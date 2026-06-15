/*
 * XREFs of _GetPacketSizeConstraints_::_1_::dtor$7 @ 0x180079C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPacketSizeConstraints_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 56);
}
