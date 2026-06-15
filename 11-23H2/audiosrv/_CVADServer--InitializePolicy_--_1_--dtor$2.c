/*
 * XREFs of _CVADServer::InitializePolicy_::_1_::dtor$2 @ 0x18007C0E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVADServer::InitializePolicy_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)(a2 + 64));
}
