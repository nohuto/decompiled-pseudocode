/*
 * XREFs of _CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$0 @ 0x1800F60FE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)(a2 + 80), a2);
}
