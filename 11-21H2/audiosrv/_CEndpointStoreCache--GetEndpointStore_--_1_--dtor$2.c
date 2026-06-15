/*
 * XREFs of _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$2 @ 0x18006DB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointStoreCache::GetEndpointStore_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((__int64 *)(a2 + 128));
}
