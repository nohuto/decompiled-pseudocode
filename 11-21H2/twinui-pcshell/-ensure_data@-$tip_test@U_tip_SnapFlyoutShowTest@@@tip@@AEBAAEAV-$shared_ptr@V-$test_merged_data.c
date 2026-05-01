/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@XZ @ 0x1805B1964
 * Callers:
 *     ??0FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@AEBV?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@Z @ 0x1805AE5FC (--0FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@AEBV-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@Z.c)
 *     ??C?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SnapFlyoutShowTest@@@1@XZ @ 0x1805AEEA4 (--C-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SnapFlyoutShowTes.c)
 *     ?InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF4BC (-InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_storag.c)
 *     ?OnFlyoutInstanceReady@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1805AFBE0 (-OnFlyoutInstanceReady@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 *     ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B0DF0 (-StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AE.c)
 *     _SnapFlyoutHost::StartXamlExplorerHostThread_::_1_::catch$13 @ 0x1805B0FEA (_SnapFlyoutHost--StartXamlExplorerHostThread_--_1_--catch$13.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SnapFlyoutShowTest@@@0@XZ @ 0x1805B8048 (--$open_and_watch_errors@V-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@tip@@YA-AV-$test_watcher@U.c)
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x1805BB224 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@QEAA@XZ @ 0x1805AD4B8 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@QEA.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_SnapFlyoutShowTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  std::_Ref_count_base *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v2 = operator new(0xB8uLL);
    v3 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SnapFlyoutShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_SnapFlyoutShowTest>>((__int64)v2);
    v5 = (__int64)v3 + 16;
    v6 = v3;
    std::shared_ptr<KBViewInfo>::operator=(a1, &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  return a1;
}
