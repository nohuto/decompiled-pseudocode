/*
 * XREFs of _IsFixedFormatApo_::_1_::dtor$1 @ 0x180079365
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFixedFormatApo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
