/*
 * XREFs of ??1wnf_subscription_state_base@details@wil@@UEAA@XZ @ 0x1800EB3F4
 * Callers:
 *     _wil::details::wnf_array_subscription_state_unsigned_short_::wnf_array_subscription_state_unsigned_short__::_1_::dtor$0 @ 0x1800EB2B6 (_wil--details--wnf_array_subscription_state_unsigned_short_--wnf_array_subscription_state_unsign.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::wnf_subscription_state_base::~wnf_subscription_state_base(
        wil::details::wnf_subscription_state_base *this)
{
  *(_QWORD *)this = &wil::details::wnf_subscription_state_base::`vftable';
  if ( *((_QWORD *)this + 1) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
}
