/*
 * XREFs of _HandleAccessChangeNotification_::_1_::dtor$1 @ 0x1800E28C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HandleAccessChangeNotification_::_1_::dtor_1()
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>();
}
