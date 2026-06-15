/*
 * XREFs of _GetConnectorProcessingModeDataFormatsFromDriver_::_1_::dtor$6 @ 0x18007AE19
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetConnectorProcessingModeDataFormatsFromDriver_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 48);
}
