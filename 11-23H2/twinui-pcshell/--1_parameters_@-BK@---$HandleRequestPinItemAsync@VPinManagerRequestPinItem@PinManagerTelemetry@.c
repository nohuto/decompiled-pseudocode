/*
 * XREFs of ??1_parameters_@?BK@???$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z@QEAA@XZ @ 0x18069E4B8
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$2_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$1 @ 0x18024C4DE (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_18024C4DE.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x1800868B8 (-Release@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x18069ED24 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall `winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync<PinManagerTelemetry::PinManagerRequestPinItem>'::`26'::_parameters_::~_parameters_(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 424);
  if ( v2 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release(v2);
  if ( *(_DWORD *)(a1 + 408) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 384));
  v3 = *(volatile signed __int32 **)(a1 + 368);
  if ( v3 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release(v3);
  PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem((PinManagerTelemetry::PinManagerRequestPinItem *)(a1 + 48));
  if ( *(_QWORD *)(a1 + 24) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 24));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 16));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 8));
}
