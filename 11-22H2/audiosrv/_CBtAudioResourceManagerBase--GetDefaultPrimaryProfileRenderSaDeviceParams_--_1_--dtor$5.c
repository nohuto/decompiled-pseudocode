/*
 * XREFs of _CBtAudioResourceManagerBase::GetDefaultPrimaryProfileRenderSaDeviceParams_::_1_::dtor$5 @ 0x1800F86CB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManagerBase::GetDefaultPrimaryProfileRenderSaDeviceParams_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 232);
}
