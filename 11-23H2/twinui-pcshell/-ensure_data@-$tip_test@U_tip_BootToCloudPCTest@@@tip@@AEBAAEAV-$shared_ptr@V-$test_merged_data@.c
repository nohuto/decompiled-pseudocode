/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_BootToCloudPCTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@@std@@XZ @ 0x180707DA8
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA?A_PXZ @ 0x180702AF4 (--$open_and_watch_errors@V-$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA?A_PXZ @ 0x1807051C4 (--$start_and_watch_errors@V-$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA-A_PXZ.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@@std@@QEAA@XZ @ 0x180701CD8 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@@std@@QEAA.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_BootToCloudPCTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  std::_Ref_count_base *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v2 = operator new(0x128uLL);
    v3 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_BootToCloudPCTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_BootToCloudPCTest>>((__int64)v2);
    v5 = (__int64)v3 + 16;
    v6 = v3;
    std::shared_ptr<KBViewInfo>::operator=(a1, &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  return a1;
}
