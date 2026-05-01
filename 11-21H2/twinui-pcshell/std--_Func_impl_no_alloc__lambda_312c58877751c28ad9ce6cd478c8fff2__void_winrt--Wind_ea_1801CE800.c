/*
 * XREFs of std::_Func_impl_no_alloc__lambda_312c58877751c28ad9ce6cd478c8fff2__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1801CE800
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_312c58877751c28ad9ce6cd478c8fff2_::operator() @ 0x1801C4CBC (_lambda_312c58877751c28ad9ce6cd478c8fff2_--operator().c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_312c58877751c28ad9ce6cd478c8fff2__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v3 = v2;
  lambda_312c58877751c28ad9ce6cd478c8fff2_::operator()(
    a1 + 8,
    (winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v3);
}
