/*
 * XREFs of ??$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801281A8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_77717df91143810f3efaa3ae5c7b54e8___::Invoke @ 0x18006E000 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_18006E000.c)
 *     wistd::__function::__func__lambda_4e2cc9a10809832ba46e22de4246ba81__void___cdecl(void)_::operator() @ 0x180127B40 (wistd--__function--__func__lambda_4e2cc9a10809832ba46e22de4246ba81__void___cdecl(void)_--operato.c)
 *     _lambda_2e8c3009fb6c7eb5169b41625b9541b8_::operator() @ 0x1804175A0 (_lambda_2e8c3009fb6c7eb5169b41625b9541b8_--operator().c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_dfd3c4a9c15624c97d0686fae5f3a66f___::Invoke @ 0x180418E70 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180418E70.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
        Microsoft::WRL::WeakRef *this,
        struct IInspectable **a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2);
  return Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_df65db57_d504_456e_8bd7_004ce308d8d9, a2);
}
