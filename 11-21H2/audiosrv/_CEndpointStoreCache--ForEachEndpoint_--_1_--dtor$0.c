/*
 * XREFs of _CEndpointStoreCache::ForEachEndpoint_::_1_::dtor$0 @ 0x18006D2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointStoreCache::ForEachEndpoint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>(a2 + 112);
}
