/*
 * XREFs of ??0_parameters_@?BK@???$HandleRequestPinItemAsync@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z@QEAA@PEAU123456@$$QEAU96@9$$QEAUSecondaryTile@StartScreen@UI@56@2334$$QEAVPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@$$QEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@$$QEAV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18069DBB4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C1C4 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_InitCoro.c)
 * Callees:
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18069DE0C (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall `winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync<PinManagerTelemetry::PinManagerPinItemToTaskbarShim>'::`26'::_parameters_::_parameters_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx

  *(_QWORD *)a1 = a2;
  v12 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 8) = v12;
  v13 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a1 + 16) = v13;
  v14 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a1 + 24) = v14;
  *(_QWORD *)(a1 + 32) = a6;
  *(_WORD *)(a1 + 40) = 256;
  *(_DWORD *)(a1 + 44) = 13;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 48,
    a10);
  *(_QWORD *)(a1 + 48) = &PinManagerTelemetry::PinManagerPinItemToTaskbarShim::`vftable';
  v15 = *a11;
  *a11 = 0LL;
  *(_QWORD *)(a1 + 368) = v15;
  *(_QWORD *)(a1 + 376) = &tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::`vftable';
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = a1 + 376;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  return a1;
}
