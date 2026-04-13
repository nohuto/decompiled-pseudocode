/*
 * XREFs of ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x18006E5C8
 * Callers:
 *     ??_E?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAAPEAXI@Z @ 0x18006EDB0 (--_E-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ @ 0x180028E9C (--1-$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::~wnf_subscription_state<wil::details::empty_wnf_state>(
        _QWORD *a1)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx
  void **result; // rax
  __int64 v5; // rcx

  *a1 = &wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::`vftable';
  v2 = a1[1];
  if ( v2 )
  {
    LastError = GetLastError();
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    SetLastError(LastError);
  }
  a1[1] = 0LL;
  wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>((__int64)(a1 + 2));
  result = &wil::details::wnf_subscription_state_base::`vftable';
  *a1 = &wil::details::wnf_subscription_state_base::`vftable';
  v5 = a1[1];
  if ( v5 )
    return (void **)RtlUnsubscribeWnfNotificationWaitForCompletion(v5);
  return result;
}
