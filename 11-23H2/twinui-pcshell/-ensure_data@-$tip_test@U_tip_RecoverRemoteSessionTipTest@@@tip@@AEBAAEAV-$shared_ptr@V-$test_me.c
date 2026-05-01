/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@std@@XZ @ 0x18008D0E8
 * Callers:
 *     ?RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18008CD68 (-RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18008D098 (--$open_and_watch_errors@V-$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180718430 (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 * Callees:
 *     ??$make_shared@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@0@XZ @ 0x18008D130 (--$make_shared@V-$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@$$V@std@@YA-.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_RecoverRemoteSessionTipTest>::ensure_data(_QWORD *a1)
{
  __int64 v2; // rax
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v2 = std::make_shared<tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>,>(v4);
    std::shared_ptr<ViewEventRegistration>::operator=(a1, v2);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  return a1;
}
