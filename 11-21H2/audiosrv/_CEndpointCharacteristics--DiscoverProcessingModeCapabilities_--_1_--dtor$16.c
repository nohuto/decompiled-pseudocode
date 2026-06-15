/*
 * XREFs of _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$16 @ 0x18006F3BA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void *)(a2 + 272));
}
