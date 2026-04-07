/*
 * XREFs of ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x1800542B0
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180053924 (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18005439C (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x1800543BC (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x1800543D4 (--$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800B1A38 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterTransparencySystemPolicyChangeEvent(CWindowList *this, __int64 a2, __int64 a3)
{
  wil::details *v4; // rbx
  wil::details **v5; // r14
  wil::details *v6; // rsi
  DWORD LastError; // edi
  struct wil::details::wnf_subscription_state_base *v9; // rdx
  _QWORD v10[2]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v12[15]; // [rsp+38h] [rbp-41h] BYREF

  v12[0] = off_18010E438;
  v12[1] = this;
  v12[13] = v12;
  v4 = 0LL;
  if ( (int)wil::details::make_wnf_subscription_state<int>(this, v11, a3, v10) >= 0 )
    v4 = (wil::details *)v10[0];
  v10[0] = v4;
  v5 = (wil::details **)((char *)this + 648);
  if ( (_QWORD *)((char *)this + 648) != v10 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      LastError = GetLastError();
      wil::details::delete_wnf_subscription_state(v6, v9);
      SetLastError(LastError);
    }
    *v5 = v4;
    v10[0] = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(v10);
  wistd::function<void (int const &)>::~function<void (int const &)>(v11);
  return 0LL;
}
