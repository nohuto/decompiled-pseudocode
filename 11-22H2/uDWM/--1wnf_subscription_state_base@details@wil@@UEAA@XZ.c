/*
 * XREFs of ??1wnf_subscription_state_base@details@wil@@UEAA@XZ @ 0x180108E2C
 * Callers:
 *     _wil::details::wnf_subscription_state_int_::wnf_subscription_state_int__::_1_::dtor$0 @ 0x18006869E (_wil--details--wnf_subscription_state_int_--wnf_subscription_state_int__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::wnf_subscription_state_base::~wnf_subscription_state_base(
        wil::details::wnf_subscription_state_base *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &wil::details::wnf_subscription_state_base::`vftable';
  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v1);
}
