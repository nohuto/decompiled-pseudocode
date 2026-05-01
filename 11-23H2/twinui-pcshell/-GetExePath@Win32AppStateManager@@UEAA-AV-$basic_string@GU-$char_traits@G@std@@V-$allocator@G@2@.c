/*
 * XREFs of ?GetExePath@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180625A40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180625AC0 (-GetExePathFromAppId@ExePathToAppIdMapping@@QEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32AppStateManager::GetExePath(RTL_SRWLOCK *a1, __int64 a2, _WORD *a3)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a1 + 15;
  std::wstring::wstring(v6, a3);
  ExePathToAppIdMapping::GetExePathFromAppId(v4);
  std::wstring::_Tidy_deallocate((__int64)v6);
  return a2;
}
