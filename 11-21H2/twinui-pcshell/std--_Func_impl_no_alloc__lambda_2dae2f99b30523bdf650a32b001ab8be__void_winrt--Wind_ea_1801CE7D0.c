/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2dae2f99b30523bdf650a32b001ab8be__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1801CE7D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2dae2f99b30523bdf650a32b001ab8be_::operator() @ 0x1801C4BD8 (_lambda_2dae2f99b30523bdf650a32b001ab8be_--operator().c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_2dae2f99b30523bdf650a32b001ab8be__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v3 = v2;
  lambda_2dae2f99b30523bdf650a32b001ab8be_::operator()(
    a1 + 8,
    (winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v3);
}
