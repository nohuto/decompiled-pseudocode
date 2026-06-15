/*
 * XREFs of _PublishApoTelemetry_::_1_::dtor$29 @ 0x14002D17B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PublishApoTelemetry_::_1_::dtor_29(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(a2 + 616);
}
