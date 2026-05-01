/*
 * XREFs of ??0_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_@@QEAA@AEBV?$shared_ptr@VPinRequestContext@@@std@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@AEBVPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@@Z @ 0x18069DA7C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18069DEEC (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect_ea_18069DEEC.c)
 */

_QWORD *__fastcall _lambda_753097bedced4ae9c1dc4d5cb6b36f6c_::_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int128 *v3; // r8
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // rcx
  __int64 v7; // r9

  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a1,
    a2);
  v4 = *v3;
  v5 = v3[1];
  *((_QWORD *)v3 + 2) = 0LL;
  *(_OWORD *)(v6 + 16) = v4;
  *((_QWORD *)v3 + 3) = 7LL;
  *(_OWORD *)(v6 + 32) = v5;
  *(_WORD *)v3 = 0;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    v6 + 48,
    v7);
  a1[6] = &PinManagerTelemetry::PinManagerPinItemToTaskbarShim::`vftable';
  return a1;
}
