/*
 * XREFs of _CBaseStreamGroupProxy::InitializeAPOs_::_1_::dtor$0 @ 0x18007C53C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::InitializeAPOs_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
