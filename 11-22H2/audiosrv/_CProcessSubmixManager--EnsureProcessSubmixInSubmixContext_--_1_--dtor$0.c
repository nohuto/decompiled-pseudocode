/*
 * XREFs of _CProcessSubmixManager::EnsureProcessSubmixInSubmixContext_::_1_::dtor$0 @ 0x1800D19B5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmixManager::EnsureProcessSubmixInSubmixContext_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
