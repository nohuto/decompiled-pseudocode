/*
 * XREFs of ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x1801734F4
 * Callers:
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180173280 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800A1B00 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?ManipulationCompleted@?$consume_Windows_UI_Internal_Input_IPhysicalGestureRecognizer@UIPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@UManipulationCompletedEventArgs@2456@@Foundation@Windows@3@@Z @ 0x180173990 (-ManipulationCompleted@-$consume_Windows_UI_Internal_Input_IPhysicalGestureRecognizer@UIPhysical.c)
 *     ?ManipulationUpdated@?$consume_Windows_UI_Internal_Input_IPhysicalGestureRecognizer@UIPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@UManipulationUpdatedEventArgs@2456@@Foundation@Windows@3@@Z @ 0x1801739E0 (-ManipulationUpdated@-$consume_Windows_UI_Internal_Input_IPhysicalGestureRecognizer@UIPhysicalGe.c)
 *     ?PointerReleased@?$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UShellGesturesController@Input@Internal@UI@Windows@winrt@@UPointerEventArgs@Core@456@@Foundation@Windows@3@@Z @ 0x180173A30 (-PointerReleased@-$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesCon.c)
 *     ?PointerMoved@?$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UShellGesturesController@Input@Internal@UI@Windows@winrt@@UPointerEventArgs@Core@456@@Foundation@Windows@3@@Z @ 0x180173A7C (-PointerMoved@-$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesContro.c)
 *     ?PointerPressed@?$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UShellGesturesController@Input@Internal@UI@Windows@winrt@@UPointerEventArgs@Core@456@@Foundation@Windows@3@@Z @ 0x180173AC8 (-PointerPressed@-$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesCont.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180173B48 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??$call@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@?$factory_cache_entry@UShellGesturesController@Input@Internal@UI@Windows@winrt@@UIShellGesturesControllerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@Z @ 0x180173B9C (--$call@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@-$factory_cache_entry@UShellGesturesCont.c)
 *     ?CreateForInputSite@?$consume_Windows_UI_Internal_Input_IShellGesturesControllerStatics@UIShellGesturesControllerStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUInputSite@Input@Internal@UI@Windows@3@@Z @ 0x180173CF4 (-CreateForInputSite@-$consume_Windows_UI_Internal_Input_IShellGesturesControllerStatics@UIShellG.c)
 *     ??$call@P6A?AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@?$factory_cache_entry@UInputSite@Input@Internal@UI@Windows@winrt@@UIInputSiteStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUInputSite@Input@Internal@UI@Windows@2@AEBUIInputSiteStatics@45672@@Z@Z @ 0x180173D4C (--$call@P6A-AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@-$factor.c)
 *     ?TouchGesturesEnabled@?$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180173EB0 (-TouchGesturesEnabled@-$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGestur.c)
 *     ?TranslationMinContactCount@?$consume_Windows_UI_Internal_Input_IPhysicalGestureRecognizer@UIPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x180173EE8 (-TranslationMinContactCount@-$consume_Windows_UI_Internal_Input_IPhysicalGestureRecognizer@UIPhy.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall TouchGestureProcessor::Initialize(TouchGestureProcessor *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall *v21)(const struct winrt::Windows::UI::Internal::Input::IInputSiteStatics *); // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v22; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v23; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v24[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v27[16]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v28[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v29[8]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v30[8]; // [rsp+120h] [rbp+20h] BYREF

  v20[1] = &qword_18098E108;
  _InterlockedAdd64(&qword_18098E108, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics> )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>,
      &v15);
    _InterlockedDecrement64(&qword_18098E108);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E108);
    v21 = _lambda_a5e19194432ba5e1a4e075778a86de15_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>::call<winrt::Windows::UI::Internal::Input::InputSite (*)(winrt::Windows::UI::Internal::Input::IInputSiteStatics const &)>(
      this,
      &v15,
      &v21);
  }
  v22 = &v15;
  v24[1] = &qword_18098E0E8;
  _InterlockedAdd64(&qword_18098E0E8, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics> )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesControllerStatics<winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>::CreateForInputSite(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>,
      &v18,
      &v15);
    _InterlockedDecrement64(&qword_18098E0E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E0E8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>::call<_lambda_f96af84709a62cb4ccbf50bc9965f301_ &>(
      v2,
      &v18,
      &v22);
  }
  winrt::Windows::Foundation::IUnknown::operator=(
    (TouchGestureProcessor *)((char *)this + 24),
    (winrt::Windows::Foundation::IUnknown *)&v18);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  v3 = operator new(0x18uLL);
  v16 = v3;
  v3[1] = this;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v3 + 4) = 1;
  *v3 = off_1807BDE70;
  v19 = v3;
  *((_QWORD *)this + 5) = *(_QWORD *)winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController<winrt::Windows::UI::Internal::Input::IShellGesturesController>::PointerPressed(
                                       (char *)this + 24,
                                       v25,
                                       &v19);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  v4 = operator new(0x18uLL);
  v16 = v4;
  v4[1] = this;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 4) = 1;
  *v4 = off_1807BDE90;
  v20[0] = v4;
  *((_QWORD *)this + 6) = *(_QWORD *)winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController<winrt::Windows::UI::Internal::Input::IShellGesturesController>::PointerMoved(
                                       (char *)this + 24,
                                       v26,
                                       v20);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v20);
  v5 = operator new(0x18uLL);
  v5[1] = this;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v5 + 4) = 1;
  *v5 = off_1807BDEB0;
  v16 = v5;
  *((_QWORD *)this + 7) = *(_QWORD *)winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController<winrt::Windows::UI::Internal::Input::IShellGesturesController>::PointerReleased(
                                       (char *)this + 24,
                                       &v23,
                                       &v16);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 56LL))(*((_QWORD *)this + 4), 65732LL);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  winrt::impl::consume_Windows_UI_Internal_Input_IPhysicalGestureRecognizer<winrt::Windows::UI::Internal::Input::IPhysicalGestureRecognizer>::TranslationMinContactCount((char *)this + 32);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 136LL))(*((_QWORD *)this + 4));
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  v8 = operator new(0x18uLL);
  v23 = v8;
  v8[1] = this;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v8 + 4) = 1;
  *v8 = off_1807BDED0;
  v17 = v8;
  *((_QWORD *)this + 9) = *(_QWORD *)winrt::impl::consume_Windows_UI_Internal_Input_IPhysicalGestureRecognizer<winrt::Windows::UI::Internal::Input::IPhysicalGestureRecognizer>::ManipulationUpdated(
                                       (char *)this + 32,
                                       v24,
                                       &v17);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  v9 = operator new(0x18uLL);
  v24[0] = v9;
  v9[1] = this;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v9 + 4) = 1;
  *v9 = off_1807BDEF0;
  v17 = v9;
  *((_QWORD *)this + 10) = *(_QWORD *)winrt::impl::consume_Windows_UI_Internal_Input_IPhysicalGestureRecognizer<winrt::Windows::UI::Internal::Input::IPhysicalGestureRecognizer>::ManipulationCompleted(
                                        (char *)this + 32,
                                        v27,
                                        &v17);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  v28[0] = off_1807CE8B0;
  v28[1] = this;
  v28[7] = v28;
  std::function<void (void)>::operator=((__int64)this + 136, (__int64)v28);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)v28,
    v10);
  v29[0] = off_1807CE8E0;
  v29[1] = this;
  v29[7] = v29;
  std::function<void (void)>::operator=((__int64)this + 200, (__int64)v29);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)v29,
    v11);
  v12 = *((_QWORD *)this + 2);
  v30[0] = off_1807CE910;
  v30[1] = this;
  v30[7] = v30;
  std::function<void (void)>::operator=(v12 + 40, (__int64)v30);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)v30,
    v13);
  LOBYTE(v14) = 1;
  winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController<winrt::Windows::UI::Internal::Input::IShellGesturesController>::TouchGesturesEnabled(
    (char *)this + 24,
    v14);
}
