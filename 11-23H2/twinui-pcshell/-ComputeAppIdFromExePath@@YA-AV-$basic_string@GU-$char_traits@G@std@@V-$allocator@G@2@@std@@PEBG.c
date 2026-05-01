/*
 * XREFs of ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180627A6C
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180626BD0 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180621F8C (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 *     ??1AppInventoryData@@QEAA@XZ @ 0x180627844 (--1AppInventoryData@@QEAA@XZ.c)
 *     ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x180627874 (-ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@.c)
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x180627C28 (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ComputeAppIdFromExePath(_QWORD *a1, const WCHAR *a2, __int64 a3)
{
  _QWORD v6[4]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v7[32]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v8[64]; // [rsp+70h] [rbp-58h] BYREF

  GetCertSignerHashFromExe(v6, (__int64)a2, a3);
  GetAppInventoryData(v7, a2);
  Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId(a1, a2, v6, (__int64)v8);
  AppInventoryData::~AppInventoryData((AppInventoryData *)v7);
  std::wstring::_Tidy_deallocate((__int64)v6);
  return a1;
}
