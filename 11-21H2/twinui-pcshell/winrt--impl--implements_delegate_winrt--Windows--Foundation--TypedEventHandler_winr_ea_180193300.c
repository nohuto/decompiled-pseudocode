/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_a90055e34951390f8e93c66c62afcdc6___::Release @ 0x180193300
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_a90055e34951390f8e93c66c62afcdc6___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_a90055e34951390f8e93c66c62afcdc6___ @ 0x180191E64 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_180191E64.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_a90055e34951390f8e93c66c62afcdc6___::Release(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9

  v6 = winrt::impl::atomic_ref_count::operator--(a1 + 6, a2, a3, a4);
  if ( !v6 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_a90055e34951390f8e93c66c62afcdc6___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_a90055e34951390f8e93c66c62afcdc6___(
      (__int64)a1,
      v5,
      v7,
      v8);
    operator delete((void *)a1);
  }
  return v6;
}
