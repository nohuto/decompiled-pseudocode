/*
 * XREFs of _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$1 @ 0x1800D3E2D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 112));
}
