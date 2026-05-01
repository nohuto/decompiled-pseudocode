/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_645383672cc8ef3abc3762ef416a0823___::Release @ 0x1800F7BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_645383672cc8ef3abc3762ef416a0823___::Release(
        char *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 16);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    operator delete(a1, 0x18uLL);
  }
  return v2;
}
