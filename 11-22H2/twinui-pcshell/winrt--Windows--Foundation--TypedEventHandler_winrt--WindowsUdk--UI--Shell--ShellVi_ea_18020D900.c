/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_d804407e02a26f9f142afc6c9d60f92c___ @ 0x18020D900
 * Callers:
 *     _lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator() @ 0x18020E018 (_lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180141204 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_d804407e02a26f9f142afc6c9d60f92c___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rdx
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x20uLL);
  v6[1] = *a2;
  v4 = a2[1];
  a2[1] = 0LL;
  v6[2] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 6) = 1;
  *v6 = off_1807C7050;
  *a1 = v6;
  if ( a2[1] )
    winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(a2 + 1);
  return a1;
}
