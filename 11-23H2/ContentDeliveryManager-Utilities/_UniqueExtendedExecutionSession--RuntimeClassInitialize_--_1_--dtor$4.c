/*
 * XREFs of _UniqueExtendedExecutionSession::RuntimeClassInitialize_::_1_::dtor$4 @ 0x1800DA564
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UniqueExtendedExecutionSession::RuntimeClassInitialize_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
