/*
 * XREFs of _IsEndpointDefaultAudioEndpoint_::_1_::dtor$3 @ 0x18010C49E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsEndpointDefaultAudioEndpoint_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(a2 + 120);
}
