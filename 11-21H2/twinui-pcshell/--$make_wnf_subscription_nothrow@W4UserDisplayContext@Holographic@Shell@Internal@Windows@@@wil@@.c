/*
 * XREFs of ??$make_wnf_subscription_nothrow@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z@wistd@@K@Z @ 0x1800E1568
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E3788 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$make_wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x1800E1894 (--$make_wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription_nothrow<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (int)wil::details::make_wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
              a1,
              a3,
              a3,
              &v5) < 0 )
    *a1 = 0LL;
  else
    *a1 = v5;
  return a1;
}
