/*
 * XREFs of _CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$1 @ 0x1800F610A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SaDeviceParams *__fastcall CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(a2 + 88);
}
