/*
 * XREFs of _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$7 @ 0x18007AE55
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return std::shared_ptr<EffectPack>::~shared_ptr<EffectPack>(a2 + 48);
}
