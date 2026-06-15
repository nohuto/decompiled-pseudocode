/*
 * XREFs of _GetModuleName_::_1_::dtor$4 @ 0x140065A41
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetModuleName_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
