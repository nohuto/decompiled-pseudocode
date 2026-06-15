/*
 * XREFs of _SystemEffectChainDescriptor::Resolve_::_1_::dtor$0 @ 0x18007A16E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemEffectChainDescriptor::Resolve_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::shared_ptr<EffectPack>::~shared_ptr<EffectPack>(a2 + 32);
}
