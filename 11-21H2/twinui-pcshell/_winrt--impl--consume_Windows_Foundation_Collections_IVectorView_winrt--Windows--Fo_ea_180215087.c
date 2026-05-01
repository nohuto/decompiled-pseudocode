/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_Collections_IVectorView_winrt::Windows::Foundation::Collections::IVectorView_winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension__winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension_::GetAt_::_1_::dtor$0 @ 0x180215087
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800F81AC (--1-$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView_winrt::Windows::Foundation::Collections::IVectorView_winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension__winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension_::GetAt_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>::~TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>(*(winrt::Windows::Foundation::IUnknown **)(a2 + 72));
  }
}
