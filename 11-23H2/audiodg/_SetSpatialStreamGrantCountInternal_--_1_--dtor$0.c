/*
 * XREFs of _SetSpatialStreamGrantCountInternal_::_1_::dtor$0 @ 0x140068E13
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetSpatialStreamGrantCountInternal_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
