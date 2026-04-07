/*
 * XREFs of ??1wnf_subscription_state_base@details@wil@@UEAA@XZ @ 0x180101B44
 * Callers:
 *     _wil::details::wnf_subscription_state_int_::wnf_subscription_state_int__::_1_::dtor$0 @ 0x180065F3A (_wil--details--wnf_subscription_state_int_--wnf_subscription_state_int__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::wnf_subscription_state_base::~wnf_subscription_state_base(
        wil::details::wnf_subscription_state_base *this)
{
  *(_QWORD *)this = &wil::details::wnf_subscription_state_base::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>((__int64 *)this + 1);
}
