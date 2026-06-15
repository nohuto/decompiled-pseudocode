/*
 * XREFs of _CAudioStream::PublishAudioEffects_::_1_::dtor$0 @ 0x1800ECC14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::PublishAudioEffects_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(a2 + 48);
}
