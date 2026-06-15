/*
 * XREFs of _GetPacketSizeConstraints_::_1_::dtor$0 @ 0x180078EBC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPacketSizeConstraints_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 112);
}
