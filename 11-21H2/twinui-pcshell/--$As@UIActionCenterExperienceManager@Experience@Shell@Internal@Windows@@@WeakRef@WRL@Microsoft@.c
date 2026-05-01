/*
 * XREFs of ??$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180177960
 * Callers:
 *     wistd::__function::__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl(void)_::operator() @ 0x1801923B0 (wistd--__function--__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl(void)_--operato.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_f2975b9f064264dfcc4da68e52b330b2___::Invoke @ 0x180192FA0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0ebb5ce6db39d52aeb4a09466381d186___::Invoke @ 0x180193040 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180193040.c)
 *     _lambda_2e8c3009fb6c7eb5169b41625b9541b8_::operator() @ 0x18034D410 (_lambda_2e8c3009fb6c7eb5169b41625b9541b8_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
        Microsoft::WRL::WeakRef *this,
        struct IInspectable **a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2);
  return Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_df65db57_d504_456e_8bd7_004ce308d8d9, a2);
}
