/*
 * XREFs of ?open@?$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x1807248E8
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18071FA24 (--$open_and_watch_errors@V-$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180730220 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$TAEAW4TestRetrievalOptions@@@?$_Ref_count_obj2@V?$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@@std@@QEAA@$$QEA$$TAEAW4TestRetrievalOptions@@@Z @ 0x18071DAF8 (--$-0$$TAEAW4TestRetrievalOptions@@@-$_Ref_count_obj2@V-$test_merged_data@U_tip_RemoteSessionAct.c)
 */

char __fastcall tip::tip_test<_tip_RemoteSessionActivationTipTest>::open(_QWORD *a1)
{
  void *v2; // rax
  std::_Ref_count_base *v3; // rax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v8 = 0LL;
  v2 = operator new(0x150uLL);
  v3 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_RemoteSessionActivationTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_RemoteSessionActivationTipTest>>(
                                 (__int64)v2,
                                 &v8,
                                 &v5);
  v6 = (__int64)v3 + 16;
  v7 = v3;
  std::shared_ptr<KBViewInfo>::operator=(a1, &v6);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return tip::details::test_common_data<1>::has_ever_started(*a1 + 8LL);
}
