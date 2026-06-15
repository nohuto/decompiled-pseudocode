/*
 * XREFs of _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$1 @ 0x14006B59A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 24LL));
}
