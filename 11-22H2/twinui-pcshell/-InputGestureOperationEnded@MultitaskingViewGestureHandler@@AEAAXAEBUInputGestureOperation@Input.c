/*
 * XREFs of ?InputGestureOperationEnded@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18054EED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::InputGestureOperationEnded(
        MultitaskingViewGestureHandler *this,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperation *a2,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs *a3)
{
  winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::SourceId(a2);
}
