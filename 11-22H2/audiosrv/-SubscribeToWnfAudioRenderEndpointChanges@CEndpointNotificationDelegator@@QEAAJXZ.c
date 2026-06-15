/*
 * XREFs of ?SubscribeToWnfAudioRenderEndpointChanges@CEndpointNotificationDelegator@@QEAAJXZ @ 0x18010A3C0
 * Callers:
 *     ?RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ @ 0x18010973C (-RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180014FF8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x1800EB318 (--1-$function@$$A6AXXZ@wistd@@QEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EE78C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_array_subscription_state@G@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXPEBG_K@Z@wistd@@KPEAPEAU?$wnf_array_subscription_state@G@01@@Z @ 0x180104218 (--$make_wnf_array_subscription_state@G@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A.c)
 */

__int64 __fastcall CEndpointNotificationDelegator::SubscribeToWnfAudioRenderEndpointChanges(
        CEndpointNotificationDelegator *this,
        __int64 a2,
        int a3)
{
  int wnf_array_subscription; // eax
  struct wil::details::wnf_subscription_state_base *v5; // rdx
  wil::details *v6; // rcx
  wil::details **v7; // rbx
  wil::details *v9[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v11[15]; // [rsp+38h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v11[1] = this;
  v11[0] = off_180170748;
  v11[13] = v11;
  wnf_array_subscription = wil::details::make_wnf_array_subscription_state<unsigned short>(
                             (__int64)this,
                             (__int64)v10,
                             a3,
                             v9);
  v6 = 0LL;
  if ( wnf_array_subscription >= 0 )
    v6 = v9[0];
  v7 = (wil::details **)((char *)this + 56);
  if ( v7 == v9 )
  {
    if ( v6 )
      wil::details::delete_wnf_subscription_state(v6, v5);
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v7,
      v6);
  }
  wistd::function<void (void)>::~function<void (void)>((__int64)v10);
  if ( *v7 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10A5,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
