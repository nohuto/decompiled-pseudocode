/*
 * XREFs of ??0StartupNotification@@QEAA@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18064213C
 * Callers:
 *     ??0StartupFolderNotification@@QEAA@U_GUID@@W4StartupAppLocation@@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180641FCC (--0StartupFolderNotification@@QEAA@U_GUID@@W4StartupAppLocation@@PEAUHKEY__@@V-$basic_string@GU-.c)
 *     ??0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4StartupAppLocation@@1@Z @ 0x1806422A8 (--0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall StartupNotification::StartupNotification(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  HKEY *phkResult; // r14
  __int64 v5; // rcx
  HKEY v6; // rbp
  DWORD LastError; // ebx
  unsigned int Key; // eax
  DWORD dwOptions; // [rsp+20h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (__int64)a2;
  *(_QWORD *)a1 = &StartupNotification::`vftable';
  phkResult = (HKEY *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 300000;
  v5 = a1 + 24;
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 7LL;
  *(_WORD *)v5 = 0;
  if ( (_QWORD *)v5 != a2 )
  {
    if ( a2[3] >= 8uLL )
      a2 = (_QWORD *)*a2;
    std::wstring::assign((char *)v5, a2, *(_QWORD *)(v2 + 16));
  }
  v6 = *phkResult;
  if ( *phkResult )
  {
    LastError = GetLastError();
    RegCloseKey(v6);
    SetLastError(LastError);
  }
  *phkResult = 0LL;
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\RunNotification",
          0,
          0LL,
          0,
          0x2011Fu,
          0LL,
          phkResult,
          0LL);
  if ( Key )
    wil::details::in1diag3::Throw_Win32(
      retaddr,
      35LL,
      (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)Key,
      dwOptions);
  std::wstring::_Tidy_deallocate(v2);
  return a1;
}
