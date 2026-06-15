/*
 * XREFs of _CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$1 @ 0x1800F7237
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)(a2 + 80), a2);
}
