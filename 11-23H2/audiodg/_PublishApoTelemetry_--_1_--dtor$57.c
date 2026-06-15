/*
 * XREFs of _PublishApoTelemetry_::_1_::dtor$57 @ 0x14002D2CB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PublishApoTelemetry_::_1_::dtor_57(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 544));
}
