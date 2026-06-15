/*
 * XREFs of _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$12 @ 0x18006F396
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void *)(a2 + 208));
}
