/*
 * XREFs of ??R_lambda_ff98fc05277ac080bf005904487943da_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@Z @ 0x180786504
 * Callers:
 *     ?MoveFocus@TaskViewFrame@@UEAAJI@Z @ 0x1807873C0 (-MoveFocus@TaskViewFrame@@UEAAJI@Z.c)
 * Callees:
 *     ?FindLastFocusableElement@?$consume_Windows_UI_Xaml_Input_IFocusManagerStatics4@UIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUDependencyObject@Xaml@UI@Windows@3@@Z @ 0x1807867E4 (-FindLastFocusableElement@-$consume_Windows_UI_Xaml_Input_IFocusManagerStatics4@UIFocusManagerSt.c)
 */

__int64 __fastcall _lambda_ff98fc05277ac080bf005904487943da_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_UI_Xaml_Input_IFocusManagerStatics4<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>::FindLastFocusableElement(
    a3,
    a2,
    *a1);
  return a2;
}
