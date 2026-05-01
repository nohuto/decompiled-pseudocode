/*
 * XREFs of _lambda_e1408536c029d8c29a87d65e8f468219_::__lambda_e1408536c029d8c29a87d65e8f468219_ @ 0x18000FF2C
 * Callers:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18000FD70 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_e1408536c029d8c29a87d65e8f468219___::Release @ 0x18000FED0 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--I.c)
 *     _TaskViewFrame::CreateFilteredItemCollection_::_1_::dtor$1 @ 0x180212FFF (_TaskViewFrame--CreateFilteredItemCollection_--_1_--dtor$1.c)
 *     _TaskViewFrame::CreateFilteredItemCollection_::_1_::dtor$19 @ 0x180213023 (_TaskViewFrame--CreateFilteredItemCollection_--_1_--dtor$19.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall lambda_e1408536c029d8c29a87d65e8f468219_::__lambda_e1408536c029d8c29a87d65e8f468219_(__int64 *a1)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (winrt::Windows::Foundation::IUnknown *)(a1 + 2);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( a1[1] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 1));
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a1);
}
