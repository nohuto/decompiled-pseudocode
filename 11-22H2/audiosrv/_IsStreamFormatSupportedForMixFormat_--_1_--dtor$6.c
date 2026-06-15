/*
 * XREFs of _IsStreamFormatSupportedForMixFormat_::_1_::dtor$6 @ 0x180083A5D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IsStreamFormatSupportedForMixFormat_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 248));
}
