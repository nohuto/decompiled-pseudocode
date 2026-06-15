/*
 * XREFs of _TryGetMicBoostPartAndInterfacesFromDevice_::_1_::dtor$1 @ 0x140078CA5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TryGetMicBoostPartAndInterfacesFromDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
