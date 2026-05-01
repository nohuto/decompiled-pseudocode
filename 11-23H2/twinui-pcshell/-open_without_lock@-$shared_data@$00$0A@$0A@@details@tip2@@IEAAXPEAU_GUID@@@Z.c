/*
 * XREFs of ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x1802033A0
 * Callers:
 *     ??0?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180201E98 (--0-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@QEAA@PEAU_GUID.c)
 *     ??0?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x18021E244 (--0-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U12345.c)
 *     ??0?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x18022B8E0 (--0-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 *     ??0?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x18022C270 (--0-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 *     ??0?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180233B3C (--0-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 *     ??0?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180233D9C (--0-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 *     ??0?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180234058 (--0-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@QEAA@PEAU_GU.c)
 *     ??0?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x18023452C (--0-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 * Callees:
 *     ?update_from_test_info@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x180013178 (-update_from_test_info@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_gu.c)
 *     TestOpen @ 0x180092678 (TestOpen.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHTIPTEST__@@@Z @ 0x1800983B8 (-reset@-$unique_storage@U-$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1-TestClose@@YAX0@ZU-$in.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall tip2::details::shared_data<1,0,0>::open_without_lock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  FARPROC v5; // rax
  __int128 v6; // [rsp+30h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+40h] [rbp-38h]
  __int128 v8; // [rsp+50h] [rbp-28h]

  LOBYTE(a3) = *(_BYTE *)(a1 + 32);
  v4 = *(_DWORD *)(a1 + 16);
  v6 = 0LL;
  *(_OWORD *)pv = 0LL;
  v8 = 0LL;
  v5 = TestOpen(v4, 0x200002u, a3, a2, (__int64)&v6);
  if ( v5 )
  {
    *(_OWORD *)(a1 + 144) = v6;
    wil::details::unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>::reset(
      (__int64 *)(a1 + 232),
      (__int64)v5);
    tip2::details::shared_data<1,0,0>::update_from_test_info(a1, (__int64)&v6);
  }
  CoTaskMemFree(pv[1]);
}
