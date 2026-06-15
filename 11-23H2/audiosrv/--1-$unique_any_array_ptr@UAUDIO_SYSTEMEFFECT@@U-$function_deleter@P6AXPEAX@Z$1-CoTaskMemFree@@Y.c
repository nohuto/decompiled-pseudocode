/*
 * XREFs of ??1?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAA@XZ @ 0x1800EB2F8
 * Callers:
 *     _CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForDiscovery_::_1_::dtor$0 @ 0x180078AF4 (_CSharedStreamGroupProxy--GetEffectsFromMFXInstantiatedForDiscovery_--_1_--dtor$0.c)
 *     _AtmosCheck::RefreshPlatformLicenses_::_1_::dtor$0 @ 0x18007B9E2 (_AtmosCheck--RefreshPlatformLicenses_--_1_--dtor$0.c)
 *     _CAudioStream::GetEffectsFromApo_::_1_::dtor$1 @ 0x1800EC26D (_CAudioStream--GetEffectsFromApo_--_1_--dtor$1.c)
 *     _CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForStreaming_::_1_::dtor$1 @ 0x180107C0C (_CSharedStreamGroupProxy--GetEffectsFromMFXInstantiatedForStreaming_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(
        __int64 a1)
{
  return wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(a1);
}
