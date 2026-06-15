/*
 * XREFs of _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$6 @ 0x140035EDD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 208));
}
