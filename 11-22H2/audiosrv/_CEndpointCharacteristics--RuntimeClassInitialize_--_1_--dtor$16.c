/*
 * XREFs of _CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor$16 @ 0x18007907B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 72);
}
