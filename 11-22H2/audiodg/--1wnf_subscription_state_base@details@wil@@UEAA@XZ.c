/*
 * XREFs of ??1wnf_subscription_state_base@details@wil@@UEAA@XZ @ 0x140076B64
 * Callers:
 *     _wil::details::wnf_subscription_state_WNF_AUDIO_ORIENTATION_STATE_::wnf_subscription_state_WNF_AUDIO_ORIENTATION_STATE__::_1_::dtor$0 @ 0x140076AC6 (_wil--details--wnf_subscription_state_WNF_AUDIO_ORIENTATION_STATE_--wnf_subscription_state_WNF_A.c)
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
