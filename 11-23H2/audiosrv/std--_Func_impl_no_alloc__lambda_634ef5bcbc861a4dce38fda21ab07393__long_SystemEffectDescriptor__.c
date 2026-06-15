/*
 * XREFs of std::_Func_impl_no_alloc__lambda_634ef5bcbc861a4dce38fda21ab07393__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180048B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_634ef5bcbc861a4dce38fda21ab07393__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call(
        __int64 a1,
        struct SystemEffectDescriptor **a2,
        struct SystemEffectChainDescriptor **a3)
{
  return EffectPack::DecideVssEffectUsage(*(CEndpointCharacteristics ***)(a1 + 8), *a2, *a3, eHostProcessConnector);
}
