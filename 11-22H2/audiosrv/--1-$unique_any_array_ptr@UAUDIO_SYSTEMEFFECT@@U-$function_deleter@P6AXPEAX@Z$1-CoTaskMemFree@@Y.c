/*
 * XREFs of ??1?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAA@XZ @ 0x1800EB348
 * Callers:
 *     _CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForDiscovery_::_1_::dtor$0 @ 0x180078B24 (_CSharedStreamGroupProxy--GetEffectsFromMFXInstantiatedForDiscovery_--_1_--dtor$0.c)
 *     _AtmosCheck::RefreshPlatformLicenses_::_1_::dtor$0 @ 0x18007BA12 (_AtmosCheck--RefreshPlatformLicenses_--_1_--dtor$0.c)
 *     _CAudioStream::GetEffectsFromApo_::_1_::dtor$1 @ 0x1800EC2BD (_CAudioStream--GetEffectsFromApo_--_1_--dtor$1.c)
 *     _CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForStreaming_::_1_::dtor$1 @ 0x180107C5C (_CSharedStreamGroupProxy--GetEffectsFromMFXInstantiatedForStreaming_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(
        __int64 a1)
{
  return wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(a1);
}
