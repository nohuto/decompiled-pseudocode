/*
 * XREFs of ??1?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@UEAA@XZ @ 0x140076B08
 * Callers:
 *     ??_E?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@UEAAPEAXI@Z @ 0x140076CB0 (--_E-$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@QEAA@XZ @ 0x140076AD8 (--1-$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x14007734C (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

void **__fastcall wil::details::wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>::~wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>(
        _QWORD *a1)
{
  void **result; // rax

  *a1 = &wil::details::wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
    a1 + 1,
    0LL);
  wistd::function<void (WNF_AUDIO_ORIENTATION_STATE const &)>::~function<void (WNF_AUDIO_ORIENTATION_STATE const &)>((__int64)(a1 + 2));
  result = &wil::details::wnf_subscription_state_base::`vftable';
  *a1 = &wil::details::wnf_subscription_state_base::`vftable';
  if ( a1[1] )
    return (void **)RtlUnsubscribeWnfNotificationWaitForCompletion();
  return result;
}
