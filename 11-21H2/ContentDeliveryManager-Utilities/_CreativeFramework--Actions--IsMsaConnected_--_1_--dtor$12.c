/*
 * XREFs of _CreativeFramework::Actions::IsMsaConnected_::_1_::dtor$12 @ 0x1800F43ED
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::IsMsaConnected_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
