/*
 * XREFs of _CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForDiscovery_::_1_::dtor$0 @ 0x180078B24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForDiscovery_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(a2 + 80);
}
