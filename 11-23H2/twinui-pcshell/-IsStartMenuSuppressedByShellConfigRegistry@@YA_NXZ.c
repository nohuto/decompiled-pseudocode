/*
 * XREFs of ?IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ @ 0x1801FF4F4
 * Callers:
 *     ?IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z @ 0x18019845C (-IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@_NU?$default_delete@_N@wistd@@@wistd@@QEAAXPEA_N@Z @ 0x1801C6208 (-reset@-$unique_ptr@_NU-$default_delete@_N@wistd@@@wistd@@QEAAXPEA_N@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     ?GetShellConfigurationFromRegistry@@YAJPEBG0PEAK@Z @ 0x1801FF148 (-GetShellConfigurationFromRegistry@@YAJPEBG0PEAK@Z.c)
 */

char IsStartMenuSuppressedByShellConfigRegistry(void)
{
  char v0; // bl
  _BYTE *v1; // rax
  const unsigned __int16 *FileNameW; // rsi
  const unsigned __int16 *v3; // rdx
  _BYTE *v4; // rdi
  bool v5; // al
  void *v6; // rdx
  _BYTE *v7; // rax
  unsigned int v9[4]; // [rsp+20h] [rbp-238h] BYREF
  WCHAR Filename[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( __TSS0__1__IsStartMenuSuppressedByShellConfigRegistry__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                       + (unsigned int)tls_index)
                                                                                     + 16LL) )
  {
    Init_thread_header(&__TSS0__1__IsStartMenuSuppressedByShellConfigRegistry__YA_NXZ_4HA);
    if ( __TSS0__1__IsStartMenuSuppressedByShellConfigRegistry__YA_NXZ_4HA == -1 )
    {
      atexit(`IsStartMenuSuppressedByShellConfigRegistry'::`2'::`dynamic atexit destructor for 's_isSuppressedByShellConfig'');
      Init_thread_footer(&__TSS0__1__IsStartMenuSuppressedByShellConfigRegistry__YA_NXZ_4HA);
    }
  }
  v0 = 1;
  v1 = (_BYTE *)`IsStartMenuSuppressedByShellConfigRegistry'::`2'::s_isSuppressedByShellConfig;
  if ( !`IsStartMenuSuppressedByShellConfigRegistry'::`2'::s_isSuppressedByShellConfig )
  {
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      v9[0] = 0;
      FileNameW = PathFindFileNameW(Filename);
      v4 = operator new(1uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v4 )
      {
        v5 = (int)GetShellConfigurationFromRegistry(FileNameW, v3, v9) >= 0 && v9[0];
        *v4 = v5;
      }
      else
      {
        v4 = 0LL;
      }
      v6 = v4;
    }
    else
    {
      v7 = operator new(1uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v7 )
        *v7 = 0;
      v6 = v7;
    }
    wistd::unique_ptr<bool,wistd::default_delete<bool>>::reset(
      (void **)&`IsStartMenuSuppressedByShellConfigRegistry'::`2'::s_isSuppressedByShellConfig,
      v6);
    v1 = (_BYTE *)`IsStartMenuSuppressedByShellConfigRegistry'::`2'::s_isSuppressedByShellConfig;
    if ( !`IsStartMenuSuppressedByShellConfigRegistry'::`2'::s_isSuppressedByShellConfig )
      return 0;
  }
  if ( !*v1 )
    return 0;
  return v0;
}
