/*
 * XREFs of _CAudioStream::GetAudioEffects_::_1_::dtor$2 @ 0x1800EB8C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::GetAudioEffects_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::vector<AudioEffectInternal>::~vector<AudioEffectInternal>(a2 + 32);
}
