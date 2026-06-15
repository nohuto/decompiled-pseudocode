/*
 * XREFs of ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAA@XZ @ 0x1800CF3BC
 * Callers:
 *     _CSharedStreamGroupProxy::RefreshAposEffectStates_::_1_::dtor$2 @ 0x180078B12 (_CSharedStreamGroupProxy--RefreshAposEffectStates_--_1_--dtor$2.c)
 *     _CAudioStream::GetEffectsFromApo_::_1_::dtor$0 @ 0x1800EC2B1 (_CAudioStream--GetEffectsFromApo_--_1_--dtor$0.c)
 *     _CAudioStream::PublishAudioEffects_::_1_::dtor$0 @ 0x1800ECC64 (_CAudioStream--PublishAudioEffects_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForStreaming_::_1_::dtor$0 @ 0x180107C50 (_CSharedStreamGroupProxy--GetEffectsFromMFXInstantiatedForStreaming_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(
        __int64 a1)
{
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(a1);
}
