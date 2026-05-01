/*
 * XREFs of ??R_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@Z @ 0x1807864DC
 * Callers:
 *     ?MoveFocus@TaskViewFrame@@UEAAJI@Z @ 0x1807873C0 (-MoveFocus@TaskViewFrame@@UEAAJI@Z.c)
 * Callees:
 *     ?FindFirstFocusableElement@?$consume_Windows_UI_Xaml_Input_IFocusManagerStatics4@UIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUDependencyObject@Xaml@UI@Windows@3@@Z @ 0x18078678C (-FindFirstFocusableElement@-$consume_Windows_UI_Xaml_Input_IFocusManagerStatics4@UIFocusManagerS.c)
 */

__int64 __fastcall _lambda_49e62eb3f931e46ad527edc5ebe4a7b3_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_UI_Xaml_Input_IFocusManagerStatics4<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>::FindFirstFocusableElement(
    a3,
    a2,
    *a1);
  return a2;
}
