/*
 * XREFs of ?open@?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x1805BB8E0
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SnapFlyoutShowTest@@@0@XZ @ 0x1805B8048 (--$open_and_watch_errors@V-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@tip@@YA-AV-$test_watcher@U.c)
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x1805BB224 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x1805B813C (--0-$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOpt.c)
 */

char __fastcall tip::tip_test<_tip_SnapFlyoutShowTest>::open(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rdi
  _DWORD *v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]

  v2 = (std::_Ref_count_base *)operator new(0xB8uLL);
  *((_DWORD *)v2 + 2) = 1;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SnapFlyoutShowTest>>::`vftable';
  tip::details::test_merged_data<_tip_SnapFlyoutShowTest>::test_merged_data<_tip_SnapFlyoutShowTest>(
    (__int64)v2 + 16,
    0LL,
    0LL);
  v4 = (_DWORD *)((char *)v2 + 16);
  v5 = v2;
  std::shared_ptr<KBViewInfo>::operator=(a1, (__int64 *)&v4);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return tip::details::test_common_data<1>::has_ever_started(*a1 + 8LL);
}
