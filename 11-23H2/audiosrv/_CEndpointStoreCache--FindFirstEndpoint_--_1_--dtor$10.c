/*
 * XREFs of _CEndpointStoreCache::FindFirstEndpoint_::_1_::dtor$10 @ 0x18010F4B9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CEndpointStoreCache::FindFirstEndpoint_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::~_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(a2 + 40);
}
