/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_a90055e34951390f8e93c66c62afcdc6___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_a90055e34951390f8e93c66c62afcdc6___ @ 0x180191E64
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_a90055e34951390f8e93c66c62afcdc6___::Release @ 0x180193300 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_180193300.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_a90055e34951390f8e93c66c62afcdc6___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_a90055e34951390f8e93c66c62afcdc6___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, a2, a3, a4);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 16));
}
