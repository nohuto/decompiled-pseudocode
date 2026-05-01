/*
 * XREFs of ?CompleteMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A163C
 * Callers:
 *     ?Hide@MiniSearchExperienceManager@@UEAAJXZ @ 0x1803A1920 (-Hide@MiniSearchExperienceManager@@UEAAJXZ.c)
 *     ?OnClientWindowReadyForPresentationChanged@MiniSearchExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1803A23E0 (-OnClientWindowReadyForPresentationChanged@MiniSearchExperienceManager@@AEAAJPEAUIClientWindowSt.c)
 *     ?OnViewConsolidationRequested@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A2698 (-OnViewConsolidationRequested@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?StartMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A38B8 (-StartMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18011FDD8 (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 */

void __fastcall MiniSearchExperienceManager::CompleteMiniSearchActivationTest(struct _TP_TIMER **this)
{
  struct _TP_TIMER *v2; // rcx

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 31,
    0LL);
  v2 = this[32];
  if ( v2 )
    tip::details::test_common_data<0>::complete((__int64)v2 + 8);
  std::shared_ptr<PeoplePaneViewInfo>::reset(this + 32);
}
