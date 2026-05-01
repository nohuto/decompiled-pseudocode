/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_e1408536c029d8c29a87d65e8f468219___::Release @ 0x18000FED0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e1408536c029d8c29a87d65e8f468219_::__lambda_e1408536c029d8c29a87d65e8f468219_ @ 0x18000FF2C (_lambda_e1408536c029d8c29a87d65e8f468219_--__lambda_e1408536c029d8c29a87d65e8f468219_.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_e1408536c029d8c29a87d65e8f468219___::Release(
        char *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 32);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    lambda_e1408536c029d8c29a87d65e8f468219_::__lambda_e1408536c029d8c29a87d65e8f468219_(a1 + 8);
    operator delete(a1, 0x28uLL);
  }
  return v2;
}
