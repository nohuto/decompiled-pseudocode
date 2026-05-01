/*
 * XREFs of _lambda_e058c550b9a0e8fe978c38ba0103cacb_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const_&_winrt::Windows::UI::Internal::Input::InputGestureOperation_const_&_ @ 0x18054B268
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation___lambda_e058c550b9a0e8fe978c38ba0103cacb___::Invoke @ 0x18054F2F0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18054F2F0.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$?0VMultitaskingViewGestureHandler@@P80@EAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@23456@@Z@?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVMultitaskingViewGestureHandler@@P84@EAAXAEBUInputGestureOperation@Input@Internal@UI@23@AEBUInputGestureOperationEventArgs@67823@@Z@Z @ 0x18054B1A4 (--$-0VMultitaskingViewGestureHandler@@P80@EAAXAEBUInputGestureOperation@Input@Internal@UI@Window.c)
 *     ?OperationEnded@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18054F590 (-OperationEnded@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperati.c)
 *     ?OperationStarted@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18054F5E0 (-OperationStarted@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOpera.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_e058c550b9a0e8fe978c38ba0103cacb_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const___winrt::Windows::UI::Internal::Input::InputGestureOperation_const___(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __m128d v5; // [rsp+20h] [rbp-10h] BYREF
  char v6; // [rsp+40h] [rbp+10h] BYREF
  __int64 v7; // [rsp+48h] [rbp+18h] BYREF

  v7 = a2;
  *(_QWORD *)&v5.m128d_f64[0] = MultitaskingViewGestureHandler::InputGestureOperationStarted;
  LODWORD(v5.m128d_f64[1]) = 0;
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
    &v7,
    *a1,
    &v5);
  winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::OperationStarted(
    a3,
    &v6,
    &v7);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  *(_QWORD *)&v5.m128d_f64[0] = MultitaskingViewGestureHandler::InputGestureOperationEnded;
  LODWORD(v5.m128d_f64[1]) = 0;
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
    &v7,
    *a1,
    &v5);
  winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::OperationEnded(
    a3,
    &v6,
    &v7);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
}
