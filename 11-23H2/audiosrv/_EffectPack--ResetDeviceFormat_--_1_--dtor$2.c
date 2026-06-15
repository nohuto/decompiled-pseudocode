/*
 * XREFs of _EffectPack::ResetDeviceFormat_::_1_::dtor$2 @ 0x18014F227
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPack::ResetDeviceFormat_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 64));
}
