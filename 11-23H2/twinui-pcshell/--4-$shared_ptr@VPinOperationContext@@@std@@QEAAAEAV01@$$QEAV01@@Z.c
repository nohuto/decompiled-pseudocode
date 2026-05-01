/*
 * XREFs of ??4?$shared_ptr@VPinOperationContext@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18069EF54
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<PinOperationContext>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx

  v2 = a2[1];
  v4 = *a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  *a1 = v4;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v2;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
