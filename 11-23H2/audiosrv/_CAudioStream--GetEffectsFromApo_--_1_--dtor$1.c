/*
 * XREFs of _CAudioStream::GetEffectsFromApo_::_1_::dtor$1 @ 0x1800EC26D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetEffectsFromApo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(a2 + 80);
}
