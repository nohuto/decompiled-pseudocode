/*
 * XREFs of ??_Ewnf_subscription_state_base@details@wil@@UEAAPEAXI@Z @ 0x18006EE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wil::details::wnf_subscription_state_base *__fastcall wil::details::wnf_subscription_state_base::`vector deleting destructor'(
        wil::details::wnf_subscription_state_base *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &wil::details::wnf_subscription_state_base::`vftable';
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
