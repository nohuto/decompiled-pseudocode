/*
 * XREFs of _QueueInitialMicBoostNotification_::_1_::dtor$2 @ 0x14002D8EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall QueueInitialMicBoostNotification_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 160));
}
