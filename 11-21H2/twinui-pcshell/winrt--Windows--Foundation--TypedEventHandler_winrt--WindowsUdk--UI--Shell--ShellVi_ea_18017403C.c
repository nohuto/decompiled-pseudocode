/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_66de46b83fd18e18502563a85dd5e1ef___ @ 0x18017403C
 * Callers:
 *     _lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_::operator() @ 0x1800F4C08 (_lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180147344 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_66de46b83fd18e18502563a85dd5e1ef___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x20uLL);
  v6[1] = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v6[2] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 6) = 1;
  *v6 = off_180640F80;
  *a1 = v6;
  if ( *(_QWORD *)(a2 + 8) )
    winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref((volatile signed __int32 **)(a2 + 8));
  return a1;
}
