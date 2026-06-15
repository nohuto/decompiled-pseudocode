/*
 * XREFs of _CBtAudioResourceManager::FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$6 @ 0x18011594F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CBtAudioResourceManager::FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  return std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)(a2 + 184), a2);
}
