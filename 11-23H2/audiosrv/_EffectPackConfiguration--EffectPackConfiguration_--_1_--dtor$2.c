/*
 * XREFs of _EffectPackConfiguration::EffectPackConfiguration_::_1_::dtor$2 @ 0x18007A303
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EffectPackConfiguration::EffectPackConfiguration_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(*(_QWORD *)(a2 + 64) + 1720LL);
}
