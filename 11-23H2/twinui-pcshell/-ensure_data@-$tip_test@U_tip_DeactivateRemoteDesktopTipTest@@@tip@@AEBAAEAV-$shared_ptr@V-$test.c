/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@XZ @ 0x18071B148
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18070CD04 (--$open_and_watch_errors@V-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??C?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEAA?AV?$test_data_control@U_tip_DeactivateRemoteDesktopTipTest@@@1@XZ @ 0x18072038C (--C-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEAA-AV-$test_data_control@U_tip_Deact.c)
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x180721258 (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?start@?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEAA?AU_GUID@@XZ @ 0x180724D6C (-start@-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@XZ @ 0x180708A20 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@ti.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  std::_Ref_count_base *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v2 = operator new(0x110uLL);
    v3 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>((__int64)v2);
    v5 = (__int64)v3 + 16;
    v6 = v3;
    std::shared_ptr<KBViewInfo>::operator=(a1, &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  return a1;
}
