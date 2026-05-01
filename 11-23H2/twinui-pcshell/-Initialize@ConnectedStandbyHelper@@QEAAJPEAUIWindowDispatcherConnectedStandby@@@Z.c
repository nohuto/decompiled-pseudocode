/*
 * XREFs of ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1800A26DC
 * Callers:
 *     ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180129BA0 (-SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804CA040 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBE@Z@wistd@@K@Z @ 0x1800A4CB8 (--$make_wnf_subscription@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1801F51B0 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall ConnectedStandbyHelper::Initialize(
        ConnectedStandbyHelper *this,
        struct IWindowDispatcherConnectedStandby *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  ConnectedStandbyHelper *wnf; // rax
  struct wil::details::wnf_subscription_state_base *v7; // rdx
  ConnectedStandbyHelper *v8; // rbx
  wil::details *v10; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v11[8]; // [rsp+28h] [rbp-B0h] BYREF
  std::_Ref_count_base *v12; // [rsp+30h] [rbp-A8h]
  _BYTE v13[8]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v14[15]; // [rsp+48h] [rbp-90h] BYREF

  *((_QWORD *)this + 3) = a2;
  v3 = (__int64 *)std::enable_shared_from_this<ConnectedStandbyHelper>::shared_from_this(this, v11);
  v4 = *v3;
  v5 = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  v14[0] = &off_1807A02A0;
  v14[1] = v4;
  v14[2] = v5;
  v14[13] = v14;
  wnf = (ConnectedStandbyHelper *)wil::make_wnf_subscription<unsigned char>(&v10, v4, v13);
  v8 = wnf;
  if ( (ConnectedStandbyHelper *)((char *)this + 40) != wnf )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 40,
      *(_QWORD *)wnf);
    *(_QWORD *)v8 = 0LL;
  }
  if ( v10 )
    wil::details::delete_wnf_subscription_state(v10, v7);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>(v13);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return 0LL;
}
