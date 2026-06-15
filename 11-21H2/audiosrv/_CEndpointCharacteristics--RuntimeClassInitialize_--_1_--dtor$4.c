/*
 * XREFs of _CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor$4 @ 0x18006EF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void *)(a2 + 224));
}
