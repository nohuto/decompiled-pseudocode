/*
 * XREFs of _CopyFaviconToEdge_::_1_::dtor$5 @ 0x1800DC460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyFaviconToEdge_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
