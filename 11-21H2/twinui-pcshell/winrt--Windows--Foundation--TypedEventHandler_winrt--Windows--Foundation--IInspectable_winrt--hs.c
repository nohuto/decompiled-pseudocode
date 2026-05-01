/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_c7ad7d039b35a8565706af83963bb0b1___ @ 0x1801C155C
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801805B0 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _lambda_c7ad7d039b35a8565706af83963bb0b1_::__lambda_c7ad7d039b35a8565706af83963bb0b1_ @ 0x1801C4550 (_lambda_c7ad7d039b35a8565706af83963bb0b1_--__lambda_c7ad7d039b35a8565706af83963bb0b1_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_c7ad7d039b35a8565706af83963bb0b1___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  _QWORD *v6; // [rsp+30h] [rbp+8h]

  v6 = operator new(0x18uLL);
  v4 = *a2;
  *a2 = 0LL;
  v6[1] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 4) = 1;
  *v6 = off_180645790;
  *a1 = v6;
  lambda_c7ad7d039b35a8565706af83963bb0b1_::__lambda_c7ad7d039b35a8565706af83963bb0b1_(a2);
  return a1;
}
