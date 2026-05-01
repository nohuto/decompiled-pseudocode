/*
 * XREFs of ??0StartupFolderNotification@@QEAA@U_GUID@@W4StartupAppLocation@@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180641FCC
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x18063F3CC (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0StartupNotification@@QEAA@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18064213C (--0StartupNotification@@QEAA@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
char *__fastcall StartupFolderNotification::StartupFolderNotification(
        char *a1,
        const KNOWNFOLDERID *a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v9; // rax
  void **v10; // rax
  HRESULT v11; // eax
  _WORD *v12; // rdx
  unsigned __int64 v13; // r8
  LPVOID pv[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v16[5]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  pv[1] = a1;
  v16[4] = a5;
  v9 = std::wstring::wstring(v16, a5);
  StartupNotification::StartupNotification(a1, v9);
  *(_QWORD *)a1 = &StartupFolderNotification::`vftable';
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 11) = 7LL;
  *((_WORD *)a1 + 32) = 0;
  *((_DWORD *)a1 + 14) = a3;
  pv[0] = 0LL;
  v10 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(pv);
  v11 = SHGetKnownFolderPath(a2, 0, 0LL, (PWSTR *)v10);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12F,
      (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)(unsigned int)v11,
      (int)pv[0]);
  v12 = pv[0];
  pv[0] = 0LL;
  v13 = -1LL;
  do
    ++v13;
  while ( v12[v13] );
  std::wstring::assign(a1 + 64, v12, v13);
  *((_QWORD *)a1 + 12) = a4;
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  std::wstring::_Tidy_deallocate(a5);
  return a1;
}
