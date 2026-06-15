/*
 * XREFs of _EffectPack::DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$4 @ 0x18007D626
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EffectPack::DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 88);
}
