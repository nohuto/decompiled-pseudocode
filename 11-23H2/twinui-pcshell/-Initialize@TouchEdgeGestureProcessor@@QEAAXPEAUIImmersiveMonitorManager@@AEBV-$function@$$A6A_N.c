/*
 * XREFs of ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800A29D8
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800DBDF8 (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800A1B00 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?OperationCreated@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UInputGestureManager@Input@Internal@UI@Windows@winrt@@UInputGestureOperation@23456@@Foundation@Windows@3@@Z @ 0x1800A2640 (-OperationCreated@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800A5020 (--$make_wnf_subscription@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800BA038 (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ @ 0x18016D428 (-IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ.c)
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18016D658 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$call@P6A?AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@?$factory_cache_entry@UInputSite@Input@Internal@UI@Windows@winrt@@UIInputSiteStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUInputSite@Input@Internal@UI@Windows@2@AEBUIInputSiteStatics@45672@@Z@Z @ 0x180173D4C (--$call@P6A-AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@-$factor.c)
 *     ??$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@?$factory_cache_entry@UInputGestureManager@Input@Internal@UI@Windows@winrt@@UIInputGestureManagerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@Z @ 0x18018D758 (--$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@-$factory_cache_entry@UInputGestureManag.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??R_lambda_967ba6ffebbbee34df142266fb8e05a9_@@QEBA@AEBUIInputGestureManagerStatics@Input@Internal@UI@Windows@winrt@@@Z @ 0x180417688 (--R_lambda_967ba6ffebbbee34df142266fb8e05a9_@@QEBA@AEBUIInputGestureManagerStatics@Input@Interna.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall TouchEdgeGestureProcessor::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  TouchEdgeGestureProcessor *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 *v9; // rax
  _QWORD *wnf; // rax
  struct wil::details::wnf_subscription_state_base *v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall *v18)(const struct winrt::Windows::UI::Internal::Input::IInputSiteStatics *); // [rsp+48h] [rbp-B8h] BYREF
  wil::details *v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v20; // [rsp+58h] [rbp-A8h]
  __int64 *v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[32]; // [rsp+70h] [rbp-90h] BYREF
  char v24[24]; // [rsp+90h] [rbp-70h] BYREF
  int v25; // [rsp+A8h] [rbp-58h]
  char v26[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v27[15]; // [rsp+C8h] [rbp-38h] BYREF

  TouchEdgeGestureTelemetry::WatchCurrentThread(v23, "TouchEdgeGestureProcessor::Initialize");
  if ( *(_QWORD *)a1 != a2 )
  {
    if ( *(_QWORD *)a1 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1);
    *(_QWORD *)a1 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  if ( TouchEdgeGestureProcessor::IsTouchEdgeGestureAllowed(v6) )
  {
    std::function<void (void)>::operator=(a1 + 24, a3);
    v21 = &qword_18098E108;
    _InterlockedIncrement64(&qword_18098E108);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics> )
    {
      v15 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>
                                                         + 88LL))(
             winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>,
             &v15);
      if ( v7 < 0 )
        winrt::throw_hresult((unsigned int)v7);
      v14 = v15;
      _InterlockedDecrement64(&qword_18098E108);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E108);
      v18 = _lambda_a5e19194432ba5e1a4e075778a86de15_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>::call<winrt::Windows::UI::Internal::Input::InputSite (*)(winrt::Windows::UI::Internal::Input::IInputSiteStatics const &)>(
        0LL,
        &v14,
        &v18);
    }
    v16 = &v14;
    v20 = &qword_18098E128;
    _InterlockedIncrement64(&qword_18098E128);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics> )
    {
      _lambda_967ba6ffebbbee34df142266fb8e05a9_::operator()(
        &v16,
        &v13,
        &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>);
      _InterlockedDecrement64(&qword_18098E128);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E128);
      winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>::call<_lambda_967ba6ffebbbee34df142266fb8e05a9_ &>(
        v8,
        &v13,
        &v16);
    }
    winrt::Windows::Foundation::IUnknown::operator=(a1 + 104, &v13);
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration(a1, *(unsigned int *)(a1 + 92));
    v9 = (__int64 *)operator new(0x18uLL);
    v20 = v9;
    v9[1] = a1;
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *((_DWORD *)v9 + 4) = 1;
    *v9 = (__int64)off_1807C3998;
    v17 = v9;
    winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::OperationCreated(
      (_QWORD *)(a1 + 104),
      &v22,
      &v17);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    v27[0] = off_1807A02F0;
    v27[1] = a1;
    v27[13] = v27;
    wnf = (_QWORD *)wil::make_wnf_subscription<unsigned long>(&v19, &WNF_SHEL_LOCKSCREEN_ACTIVE, v26);
    v12 = wnf;
    if ( (_QWORD *)(a1 + 16) != wnf )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        a1 + 16,
        *wnf);
      *v12 = 0LL;
    }
    if ( v19 )
      wil::details::delete_wnf_subscription_state(v19, v11);
    wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>(v26);
  }
  if ( v25 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v23);
}
