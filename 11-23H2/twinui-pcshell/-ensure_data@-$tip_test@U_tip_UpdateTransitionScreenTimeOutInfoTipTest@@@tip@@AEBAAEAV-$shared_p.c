/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@details@tip@@@std@@XZ @ 0x18071B200
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180719DA8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@2@XZ @ 0x18072495C (-open_and_watch_errors@-$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@QEAA-AV-.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@details@tip@@@std@@QEAA@XZ @ 0x180708C18 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_UpdateTransitionScreenTimeOutInfoTipTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  std::_Ref_count_base *updated; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v2 = operator new(0xD0uLL);
    updated = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest>>((__int64)v2);
    v5 = (__int64)updated + 16;
    v6 = updated;
    std::shared_ptr<KBViewInfo>::operator=(a1, &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  return a1;
}
