/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___ @ 0x1806AB0F4
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___ @ 0x1806AA94C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--To_ea_1806AA94C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r9
  _QWORD *result; // rax

  v4 = operator new(0x30uLL);
  v4[1] = 0LL;
  v4[2] = 0LL;
  v4[1] = *a2;
  v4[2] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[3] = a2[2];
  v4[4] = a2[3];
  a2[2] = 0LL;
  a2[3] = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 10) = 1;
  *v4 = off_1807CA1D8;
  result = a1;
  *a1 = v4;
  return result;
}
