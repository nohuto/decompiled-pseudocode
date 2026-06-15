/*
 * XREFs of ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAA@XZ @ 0x1800E3B10
 * Callers:
 *     _CAudioStream::GetAudioEffects_::_1_::dtor$1 @ 0x1800E4370 (_CAudioStream--GetAudioEffects_--_1_--dtor$1.c)
 *     _CAudioStream::PublishAudioEffects_::_1_::dtor$0 @ 0x1800E4E4D (_CAudioStream--PublishAudioEffects_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>()
{
  return wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset();
}
