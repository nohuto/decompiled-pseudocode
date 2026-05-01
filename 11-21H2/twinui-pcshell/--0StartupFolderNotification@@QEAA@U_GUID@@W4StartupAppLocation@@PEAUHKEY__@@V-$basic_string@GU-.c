/*
 * XREFs of ??0StartupFolderNotification@@QEAA@U_GUID@@W4StartupAppLocation@@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180584198
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1805803E4 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0StartupNotification@@QEAA@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1805842F0 (--0StartupNotification@@QEAA@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall StartupFolderNotification::StartupFolderNotification(
        __int64 a1,
        const KNOWNFOLDERID *a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v9; // rax
  HRESULT v10; // eax
  PWSTR v11; // rdx
  unsigned __int64 v12; // r8
  PWSTR ppszPath[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  ppszPath[1] = (PWSTR)a1;
  v15[4] = a5;
  v9 = std::wstring::wstring((__int64)v15, a5);
  StartupNotification::StartupNotification(a1, v9);
  *(_QWORD *)a1 = &StartupFolderNotification::`vftable';
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 7LL;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 56) = a3;
  ppszPath[0] = 0LL;
  v10 = SHGetKnownFolderPath(a2, 0, 0LL, ppszPath);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12D,
      (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)(unsigned int)v10,
      (int)ppszPath[0]);
  v11 = ppszPath[0];
  ppszPath[0] = 0LL;
  v12 = -1LL;
  do
    ++v12;
  while ( v11[v12] );
  std::wstring::assign((char *)(a1 + 64), v11, v12);
  *(_QWORD *)(a1 + 96) = a4;
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)ppszPath);
  std::wstring::_Tidy_deallocate(a5);
  return a1;
}
