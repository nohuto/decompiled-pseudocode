/*
 * XREFs of _CSharedStreamGroupProxy::RefreshAposEffectStates_::_1_::dtor$2 @ 0x180078AE2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSharedStreamGroupProxy::RefreshAposEffectStates_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(a2 + 64);
}
