/*
 * XREFs of _TryGetMicBoostPartAndInterfacesFromDevice_::_1_::dtor$5 @ 0x140078CD5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TryGetMicBoostPartAndInterfacesFromDevice_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
