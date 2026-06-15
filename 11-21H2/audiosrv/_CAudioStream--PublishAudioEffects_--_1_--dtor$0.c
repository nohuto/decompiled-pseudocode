/*
 * XREFs of _CAudioStream::PublishAudioEffects_::_1_::dtor$0 @ 0x1800E4E4D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CAudioStream::PublishAudioEffects_::_1_::dtor_0()
{
  return wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>();
}
