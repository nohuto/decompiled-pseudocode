/*
 * XREFs of _EffectPack::SetDeviceFormatAndSpatialSettings_::_1_::dtor$4 @ 0x18007D900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EffectPack::SetDeviceFormatAndSpatialSettings_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 168);
}
