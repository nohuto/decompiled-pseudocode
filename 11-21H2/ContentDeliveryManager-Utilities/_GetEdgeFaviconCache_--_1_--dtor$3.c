/*
 * XREFs of _GetEdgeFaviconCache_::_1_::dtor$3 @ 0x1800F39FB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetEdgeFaviconCache_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
