/*
 * XREFs of _EffectPackConfiguration::ReadConfiguration_::_1_::dtor$30 @ 0x180079D5F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPackConfiguration::ReadConfiguration_::_1_::dtor_30(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 80);
}
