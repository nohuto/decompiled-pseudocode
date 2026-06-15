/*
 * XREFs of _EffectPack::DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$5 @ 0x18007D638
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPack::DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 112);
}
