/*
 * XREFs of _StartDocked::GetStartScreenManagerExtensionStatics_::_1_::dtor$2 @ 0x1800F4DBE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StartDocked::GetStartScreenManagerExtensionStatics_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
