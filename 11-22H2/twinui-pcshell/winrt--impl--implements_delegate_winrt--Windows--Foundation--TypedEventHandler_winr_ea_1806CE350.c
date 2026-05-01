/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___::Release @ 0x1806CE350
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_::__lambda_d6b4118795ae303e935bbd5b6ca0014f_ @ 0x1806CB980 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_--__lambda_d6b4118795ae303e935bbd5b6ca0014f_.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_d6b4118795ae303e935bbd5b6ca0014f___::Release(
        void *a1)
{
  unsigned int v2; // edi
  volatile int *v3; // rdx

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)a1 + 12);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    lambda_d6b4118795ae303e935bbd5b6ca0014f_::__lambda_d6b4118795ae303e935bbd5b6ca0014f_((__int64 *)a1 + 1, v3);
    operator delete(a1);
  }
  return v2;
}
