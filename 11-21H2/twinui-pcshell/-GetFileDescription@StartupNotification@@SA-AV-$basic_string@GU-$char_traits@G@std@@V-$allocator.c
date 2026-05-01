/*
 * XREFs of ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x1805863A4
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180580BC0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18033CC7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?_Parse_extension@filesystem@std@@YA?AV?$basic_string_view@GU?$char_traits@G@std@@@2@V32@@Z @ 0x1805876B4 (-_Parse_extension@filesystem@std@@YA-AV-$basic_string_view@GU-$char_traits@G@std@@@2@V32@@Z.c)
 *     ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805879AC (-compare@path@filesystem@std@@QEBAHV-$basic_string_view@GU-$char_traits@G@std@@@3@@Z.c)
 *     ?extension@path@filesystem@std@@QEBA?AV123@XZ @ 0x180587B4C (-extension@path@filesystem@std@@QEBA-AV123@XZ.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall StartupNotification::GetFileDescription(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  PCWSTR *v4; // rdx
  char v5; // di
  char *v6; // rax
  std::filesystem *v7; // r8
  char *v8; // rcx
  char v9; // r14
  HRESULT Instance; // eax
  __int64 (__fastcall **v11)(LPVOID, GUID *, int *); // rax
  int v12; // eax
  PCWSTR *v13; // rax
  PCWSTR *v14; // rdx
  int v15; // eax
  const WCHAR *v16; // rcx
  LPVOID *v17; // rax
  LPVOID *v18; // r9
  int ppv; // [rsp+20h] [rbp-E0h]
  int ppva; // [rsp+20h] [rbp-E0h]
  int ppvb; // [rsp+20h] [rbp-E0h]
  PWSTR ppszApplication; // [rsp+30h] [rbp-D0h] BYREF
  int v24[2]; // [rsp+38h] [rbp-C8h] BYREF
  PWSTR ppszParameters; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  LPVOID v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+70h] [rbp-90h]
  PCWSTR pszCmdTemplate[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v30; // [rsp+90h] [rbp-70h]
  unsigned __int64 v31; // [rsp+98h] [rbp-68h]
  char v32[16]; // [rsp+A0h] [rbp-60h] BYREF
  void *v33; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v34; // [rsp+B8h] [rbp-48h]
  char v35[16]; // [rsp+C0h] [rbp-40h] BYREF
  void *v36; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v37; // [rsp+D8h] [rbp-28h]
  _BYTE v38[32]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v2 = (_QWORD *)a2;
  ppszParameters = (PWSTR)a1;
  v26 = 0;
  std::wstring::wstring((__int64)pszCmdTemplate, a2);
  v27[0] = v32;
  v4 = pszCmdTemplate;
  if ( v31 >= 8 )
    v4 = (PCWSTR *)pszCmdTemplate[0];
  v33 = 0LL;
  v34 = 7LL;
  *(_WORD *)v32 = 0;
  std::wstring::assign(v32, v4, v30);
  v5 = 24;
  v6 = v32;
  if ( v34 >= 8 )
    v6 = *(char **)v32;
  v27[0] = v6;
  v27[1] = v33;
  if ( !*(_QWORD *)(std::filesystem::_Parse_extension(v24, v27) + 8) )
    goto LABEL_9;
  v27[0] = v35;
  v36 = 0LL;
  v37 = 7LL;
  *(_WORD *)v35 = 0;
  std::wstring::assign(v35, L".lnk", 4uLL);
  v26 = 121;
  v7 = (std::filesystem *)std::filesystem::path::extension(v32, v38);
  v5 = 123;
  v8 = v35;
  if ( v37 >= 8 )
    v8 = *(char **)v35;
  v27[0] = v8;
  v27[1] = v36;
  v9 = 1;
  if ( (unsigned int)std::filesystem::path::compare(v7) )
LABEL_9:
    v9 = 0;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    std::wstring::_Tidy_deallocate((__int64)v38);
  }
  if ( (v5 & 1) != 0 )
    std::wstring::_Tidy_deallocate((__int64)v35);
  if ( v9 )
  {
    v27[0] = 0LL;
    Instance = CoCreateInstance(&CLSID_ShellLink, 0LL, 1u, &GUID_000214f9_0000_0000_c000_000000000046, v27);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)Instance,
        ppv);
    *(_QWORD *)v24 = 0LL;
    v11 = *(__int64 (__fastcall ***)(LPVOID, GUID *, int *))v27[0];
    *(_QWORD *)v24 = 0LL;
    v12 = (*v11)(v27[0], &GUID_0000010b_0000_0000_c000_000000000046, v24);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v12,
        ppv);
    if ( v2[3] >= 8uLL )
      v2 = (_QWORD *)*v2;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)v24 + 40LL))(*(_QWORD *)v24, v2, 0LL) < 0 )
    {
      std::wstring::wstring((_QWORD *)a1, &LocaleName);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v24);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v27);
      goto LABEL_50;
    }
    if ( v30 < 0x104 )
    {
      std::wstring::append((wchar_t *)pszCmdTemplate, 260 - v30, 0);
    }
    else
    {
      v13 = pszCmdTemplate;
      if ( v31 >= 8 )
        v13 = (PCWSTR *)pszCmdTemplate[0];
      v30 = 260LL;
      *((_WORD *)v13 + 260) = 0;
    }
    v14 = pszCmdTemplate;
    if ( v31 >= 8 )
      v14 = (PCWSTR *)pszCmdTemplate[0];
    v15 = (*(__int64 (__fastcall **)(LPVOID, PCWSTR *, __int64, _QWORD))(*(_QWORD *)v27[0] + 24LL))(
            v27[0],
            v14,
            260LL,
            0LL);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x66,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v15,
        4);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v24);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v27);
  }
  ppszParameters = 0LL;
  ppszApplication = 0LL;
  v16 = (const WCHAR *)pszCmdTemplate;
  if ( v31 >= 8 )
    v16 = pszCmdTemplate[0];
  if ( SHEvaluateSystemCommandTemplate(v16, &ppszApplication, 0LL, &ppszParameters) < 0 )
  {
    std::wstring::wstring((_QWORD *)a1, &LocaleName);
  }
  else
  {
    *(_QWORD *)&v28 = 0LL;
    *((_QWORD *)&v28 + 1) = 7LL;
    LOWORD(v27[0]) = 0;
    v24[0] = 0;
    if ( !(unsigned int)SHGetFileDescriptionW(ppszApplication, 0LL, 0LL, 0LL, v24) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6F,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)0x80004005LL,
        ppva);
    if ( (unsigned int)v24[0] > (unsigned __int64)v28 )
    {
      std::wstring::append((wchar_t *)v27, (unsigned int)v24[0] - (_QWORD)v28, 0);
    }
    else
    {
      v17 = v27;
      if ( *((_QWORD *)&v28 + 1) >= 8uLL )
        v17 = (LPVOID *)v27[0];
      *(_QWORD *)&v28 = (unsigned int)v24[0];
      *((_WORD *)v17 + (unsigned int)v24[0]) = 0;
    }
    v18 = v27;
    if ( *((_QWORD *)&v28 + 1) >= 8uLL )
      v18 = (LPVOID *)v27[0];
    if ( !(unsigned int)SHGetFileDescriptionW(ppszApplication, 0LL, 0LL, v18, v24) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x71,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)0x80004005LL,
        ppvb);
    *(_OWORD *)a1 = *(_OWORD *)v27;
    *(_OWORD *)(a1 + 16) = v28;
    *(_QWORD *)&v28 = 0LL;
    *((_QWORD *)&v28 + 1) = 7LL;
    LOWORD(v27[0]) = 0;
    std::wstring::_Tidy_deallocate((__int64)v27);
  }
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&ppszParameters);
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&ppszApplication);
LABEL_50:
  std::wstring::_Tidy_deallocate((__int64)v32);
  std::wstring::_Tidy_deallocate((__int64)pszCmdTemplate);
  return a1;
}
