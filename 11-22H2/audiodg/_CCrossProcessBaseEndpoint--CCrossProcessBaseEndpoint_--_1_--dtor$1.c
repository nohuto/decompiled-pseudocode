/*
 * XREFs of _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$1 @ 0x140034823
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 64LL));
}
