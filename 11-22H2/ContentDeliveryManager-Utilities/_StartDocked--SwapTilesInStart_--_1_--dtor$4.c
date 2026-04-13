/*
 * XREFs of _StartDocked::SwapTilesInStart_::_1_::dtor$4 @ 0x1800DB6B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StartDocked::SwapTilesInStart_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
