/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@@std@@XZ @ 0x1807240E8
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18071FA24 (--$open_and_watch_errors@V-$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180720A38 (-ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180730220 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@@std@@QEAA@XZ @ 0x18071DD00 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@ti.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_RemoteSessionActivationTipTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  std::_Ref_count_base *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v2 = operator new(0x150uLL);
    v3 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_RemoteSessionActivationTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_RemoteSessionActivationTipTest>>((__int64)v2);
    v5 = (__int64)v3 + 16;
    v6 = v3;
    std::shared_ptr<KBViewInfo>::operator=(a1, &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  return a1;
}
