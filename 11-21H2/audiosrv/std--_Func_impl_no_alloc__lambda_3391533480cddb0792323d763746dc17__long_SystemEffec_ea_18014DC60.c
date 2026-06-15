/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3391533480cddb0792323d763746dc17__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x18014DC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_3391533480cddb0792323d763746dc17__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call(
        __int64 a1,
        struct SystemEffectDescriptor **a2,
        struct SystemEffectChainDescriptor **a3)
{
  return CEndpointCharacteristics::DecideVssEffectUsage(
           *(CEndpointCharacteristics **)(a1 + 8),
           *a2,
           *a3,
           eOffloadConnector);
}
