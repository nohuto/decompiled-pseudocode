/*
 * XREFs of _CEndpointStoreCache::ForEachEndpoint_::_1_::dtor$9 @ 0x18007A4D5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CEndpointStoreCache::ForEachEndpoint_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::~_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(a2 + 32);
}
