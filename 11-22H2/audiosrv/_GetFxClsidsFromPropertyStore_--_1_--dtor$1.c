/*
 * XREFs of _GetFxClsidsFromPropertyStore_::_1_::dtor$1 @ 0x18007A09B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFxClsidsFromPropertyStore_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 160);
}
