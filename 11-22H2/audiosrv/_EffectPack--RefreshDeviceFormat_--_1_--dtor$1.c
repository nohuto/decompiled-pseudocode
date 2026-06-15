/*
 * XREFs of _EffectPack::RefreshDeviceFormat_::_1_::dtor$1 @ 0x18007D8DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPack::RefreshDeviceFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 96);
}
