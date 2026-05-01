/*
 * XREFs of ??$make_wnf_subscription@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800A5020
 * Callers:
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800A29D8 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800A5DBC (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ??0TouchGestureSettings@@QEAA@XZ @ 0x1800E8310 (--0TouchGestureSettings@@QEAA@XZ.c)
 * Callees:
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x1800A5B14 (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription<unsigned long>(_QWORD *a1, __int64 a2, __int64 a3)
{
  int wnf_subscription; // eax
  int v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wnf_subscription = wil::details::make_wnf_subscription_state<unsigned long>(a2, a3, a3, &v7);
  if ( wnf_subscription < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43C,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)wnf_subscription,
      v6);
  *a1 = v7;
  return a1;
}
