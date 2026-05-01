/*
 * XREFs of ??1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECF8
 * Callers:
 *     ??$HandleRequestPinItemAsync@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@45@Uhstring@5@0USecondaryTile@StartScreen@UI@45@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18024DF80 (--$HandleRequestPinItemAsync@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@@PinManager@im.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::dtor$2 @ 0x18024E104 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_18024E104.c)
 *     ??1_parameters_@?4??PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@PEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z@QEAA@XZ @ 0x18024F6A8 (--1_parameters_@-4--PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@w.c)
 *     ?PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@PEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x180251250 (-PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_a.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync_::_1_::dtor$2 @ 0x18025134B (_winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimA_ea_18025134B.c)
 *     ??1_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_@@QEAA@XZ @ 0x18069E380 (--1_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_@@QEAA@XZ.c)
 *     ??1_parameters_@?BK@???$HandleRequestPinItemAsync@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z@QEAA@XZ @ 0x18069E444 (--1_parameters_@-BK@---$HandleRequestPinItemAsync@VPinManagerPinItemToTaskbarShim@PinManagerTele.c)
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A4550 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShim_::_1_::dtor$4 @ 0x1806A4958 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShim_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1806A0D24 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall PinManagerTelemetry::PinManagerPinItemToTaskbarShim::~PinManagerPinItemToTaskbarShim(
        PinManagerTelemetry::PinManagerPinItemToTaskbarShim *this)
{
  *(_QWORD *)this = &PinManagerTelemetry::PinManagerPinItemToTaskbarShim::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
