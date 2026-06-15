/*
 * XREFs of _CEndpointStoreCache::FindFirstEndpoint_::_1_::dtor$0 @ 0x18010F4FD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointStoreCache::FindFirstEndpoint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>((_QWORD **)(a2 + 96));
}
