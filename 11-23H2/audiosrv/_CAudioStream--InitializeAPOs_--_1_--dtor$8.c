/*
 * XREFs of _CAudioStream::InitializeAPOs_::_1_::dtor$8 @ 0x18007AB28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::InitializeAPOs_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
