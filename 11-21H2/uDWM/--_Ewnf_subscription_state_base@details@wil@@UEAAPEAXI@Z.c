/*
 * XREFs of ??_Ewnf_subscription_state_base@details@wil@@UEAAPEAXI@Z @ 0x180101E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010163C (--1-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubscribe.c)
 */

wil::details::wnf_subscription_state_base *__fastcall wil::details::wnf_subscription_state_base::`vector deleting destructor'(
        wil::details::wnf_subscription_state_base *this,
        char a2)
{
  *(_QWORD *)this = &wil::details::wnf_subscription_state_base::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>((__int64 *)this + 1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, wil::details::wnf_subscription_state_base *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
