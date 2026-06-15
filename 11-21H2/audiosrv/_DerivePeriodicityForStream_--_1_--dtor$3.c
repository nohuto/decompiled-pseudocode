/*
 * XREFs of _DerivePeriodicityForStream_::_1_::dtor$3 @ 0x18006FCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DerivePeriodicityForStream_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void *)(a2 + 288));
}
