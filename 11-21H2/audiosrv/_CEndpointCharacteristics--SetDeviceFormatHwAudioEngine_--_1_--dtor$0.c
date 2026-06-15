/*
 * XREFs of _CEndpointCharacteristics::SetDeviceFormatHwAudioEngine_::_1_::dtor$0 @ 0x18014C472
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::SetDeviceFormatHwAudioEngine_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 104));
}
