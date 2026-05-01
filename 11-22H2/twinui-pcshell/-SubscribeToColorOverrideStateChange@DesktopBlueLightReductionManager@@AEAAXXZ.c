/*
 * XREFs of ?SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ @ 0x18012ACB0
 * Callers:
 *     ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x18012A9D8 (-RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800A6608 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall DesktopBlueLightReductionManager::SubscribeToColorOverrideStateChange(wil::details **this)
{
  wil::details **v2; // rax
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  wil::details **v4; // rdi
  wil::details *v5; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v7[15]; // [rsp+38h] [rbp-90h] BYREF

  v7[0] = off_1807B5348;
  v7[1] = this;
  v7[13] = v7;
  v2 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                          &v5,
                          (__int64)&WNF_DX_COLOR_OVERRIDE_STATE_CHANGE,
                          (__int64)v6,
                          0);
  v4 = v2;
  if ( this + 23 != v2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 23,
      *v2);
    *v4 = 0LL;
  }
  if ( v5 )
    wil::details::delete_wnf_subscription_state(v5, v3);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v6);
}
