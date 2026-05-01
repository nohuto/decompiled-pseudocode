/*
 * XREFs of ??1?$producer_ref@USearchAppHost@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801A3D10
 * Callers:
 *     _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::Windows::Foundation::IInspectable__winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_std::nullptr_t__::_1_::dtor$1 @ 0x1801A3A0A (_winrt--impl--invoke_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUd_ea_1801A3A0A.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs__winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs__::_1_::dtor$0 @ 0x1801A3ACD (_winrt--impl--invoke_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUd_ea_1801A3ACD.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::producer_ref<winrt::WindowsUdk::UI::Shell::SearchAppHost>::~producer_ref<winrt::WindowsUdk::UI::Shell::SearchAppHost>(
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a1)
{
  *(_QWORD *)a1 = 0LL;
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a1);
}
