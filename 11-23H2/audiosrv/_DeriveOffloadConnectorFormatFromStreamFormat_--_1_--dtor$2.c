/*
 * XREFs of _DeriveOffloadConnectorFormatFromStreamFormat_::_1_::dtor$2 @ 0x180115772
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeriveOffloadConnectorFormatFromStreamFormat_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 160));
}
