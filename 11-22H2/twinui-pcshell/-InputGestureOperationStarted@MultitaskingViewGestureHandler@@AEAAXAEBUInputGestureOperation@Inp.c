/*
 * XREFs of ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18054EEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800A1B00 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@@Z @ 0x18020D868 (-InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA-AUfire_and_forget@winrt@@UInputGest.c)
 *     ?StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x180210F44 (-StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA-AUfire_and_forget@winrt@@UInputGestu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1802DF22A (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ??4?$function@$$A6AXPEAUHWND__@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18054C844 (--4-$function@$$A6AXPEAUHWND__@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Position@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18054F630 (-Position@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Inp.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18054FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?SourceId@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180550060 (-SourceId@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Inp.c)
 *     ?HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ @ 0x180558C98 (-HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall MultitaskingViewGestureHandler::InputGestureOperationStarted(
        MultitaskingViewGestureHandler *this,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperation *a2,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // r13d
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, _DWORD *, GUID *, GUID *); // rsi
  int v11; // eax
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  CAppThumbnailWindow *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  int *v17; // [rsp+20h] [rbp-79h]
  _BYTE v18[8]; // [rsp+30h] [rbp-69h] BYREF
  int v19[2]; // [rsp+38h] [rbp-61h] BYREF
  __int64 v20; // [rsp+40h] [rbp-59h] BYREF
  __int64 v21; // [rsp+48h] [rbp-51h] BYREF
  _DWORD v22[2]; // [rsp+50h] [rbp-49h] BYREF
  CAppThumbnailWindow *v23; // [rsp+58h] [rbp-41h] BYREF
  std::_Ref_count_base *v24; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall **v25)(); // [rsp+70h] [rbp-29h] BYREF
  MultitaskingViewGestureHandler *v26; // [rsp+78h] [rbp-21h]
  __int64 (__fastcall ***v27)(); // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v6 = winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::SourceId(a2);
  if ( v6 == 4 )
  {
    *(_QWORD *)v19 = *(_QWORD *)a2;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)v19);
    MultitaskingViewGestureHandler::InitiateSwipeDownAsync(
      (__int64)this,
      (__int64)v18,
      (winrt::Windows::Foundation::IUnknown *)v19,
      (__int64)a3);
  }
  else if ( v6 == 6 )
  {
    LOBYTE(v7) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      v7);
    *((_DWORD *)this + 54) = 0;
    *((_BYTE *)this + 212) = 0;
    v8 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
           *((_DWORD *)this + 32),
           *((_DWORD *)this + 33));
    *(_QWORD *)v19 = 0LL;
    v22[0] = (int)*(float *)winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::Position(
                              a2,
                              &v21);
    v22[1] = (int)*(float *)(winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::Position(
                               a2,
                               &v21)
                           + 4);
    v9 = *((_QWORD *)this + 5);
    v10 = *(int (__fastcall **)(__int64, _DWORD *, GUID *, GUID *))(*(_QWORD *)v9 + 96LL);
    *(_QWORD *)v19 = 0LL;
    v17 = v19;
    if ( v10(v9, v22, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000) < 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgs();
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v19 + 40LL))(*(_QWORD *)v19, &v21);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x41F,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v11,
          (int)v19);
      v12 = (_QWORD *)*((_QWORD *)this + 12);
      v13 = (_QWORD *)*((_QWORD *)this + 13);
      while ( v12 != v13 )
      {
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          &v23,
          v12);
        v14 = v23;
        if ( v21 == *((_QWORD *)v23 + 19) && CAppThumbnailWindow::HasSwitchAnimationVisuals(v23) )
        {
          v25 = off_1807E21E8;
          v26 = this;
          v27 = &v25;
          std::function<void (HWND__ *)>::operator=((__int64)v14 + 256, (__int64)&v25);
          std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
            (__int64)&v25,
            v15);
          v25 = off_1807E2248;
          v26 = this;
          v27 = &v25;
          std::function<void (void)>::operator=((__int64)v14 + 320, (__int64)&v25);
          std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
            (__int64)&v25,
            v16);
          v20 = *(_QWORD *)a2;
          winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v20);
          LODWORD(v17) = v8;
          CAppThumbnailWindow::StartSwitchGestureOperationAsync(
            (int)v14,
            v18,
            (winrt::Windows::Foundation::IUnknown *)&v20,
            (int)a3,
            v17);
          *((_BYTE *)this + 232) = 1;
          if ( v24 )
            std::_Ref_count_base::_Decref(v24);
          break;
        }
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        v12 += 2;
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v19);
  }
}
