/*
 * XREFs of _CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat_::_1_::dtor$0 @ 0x180168A5B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 96));
}
