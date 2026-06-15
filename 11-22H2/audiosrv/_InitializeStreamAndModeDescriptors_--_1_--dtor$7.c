/*
 * XREFs of _InitializeStreamAndModeDescriptors_::_1_::dtor$7 @ 0x180070415
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeStreamAndModeDescriptors_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
