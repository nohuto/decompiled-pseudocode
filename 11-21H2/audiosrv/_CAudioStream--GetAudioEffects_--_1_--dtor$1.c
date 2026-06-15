/*
 * XREFs of _CAudioStream::GetAudioEffects_::_1_::dtor$1 @ 0x1800E4370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CAudioStream::GetAudioEffects_::_1_::dtor_1()
{
  return wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>();
}
