/*
 * XREFs of _CEndpointCharacteristics::RemoveEffectPack_::_1_::dtor$1 @ 0x18014EF14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::RemoveEffectPack_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::shared_ptr<EffectPack>::~shared_ptr<EffectPack>(a2 + 40);
}
