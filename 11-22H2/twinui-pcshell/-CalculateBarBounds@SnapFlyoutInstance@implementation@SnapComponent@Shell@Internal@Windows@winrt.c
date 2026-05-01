/*
 * XREFs of ?CalculateBarBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AURect@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@AEBU8967@@Z @ 0x18068EB24
 * Callers:
 *     ?ShowBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180691580 (-ShowBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?ActualHeight@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068EA8C (-ActualHeight@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@win.c)
 *     ?ActualWidth@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068EAD8 (-ActualWidth@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winr.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateBarBounds(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  float v7; // xmm6_4
  double v8; // xmm0_8
  int v9; // edx
  float v10; // xmm2_4
  int v11; // eax
  int v12; // edx
  __m128i v13; // xmm0
  float v14; // xmm2_4
  __int64 result; // rax
  int nNumerator; // [rsp+40h] [rbp+8h] BYREF

  nNumerator = 0;
  GetDpiForMonitor(a2, 0LL, &nNumerator, &nNumerator);
  v7 = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualHeight(a3);
  v8 = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualWidth(a3);
  v9 = nNumerator;
  v10 = v8;
  *(_OWORD *)a1 = 0LL;
  v11 = MulDiv((int)v10, v9, 96);
  v12 = nNumerator;
  *(float *)(a1 + 8) = (float)v11;
  v13 = _mm_cvtsi32_si128(MulDiv((int)v7, v12, 96));
  v14 = (float)(*(float *)(a4 + 8) * 0.5) + *(float *)a4;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a4 + 4);
  result = a1;
  *(_DWORD *)(a1 + 12) = _mm_cvtepi32_ps(v13).m128_u32[0];
  *(float *)a1 = v14 - (float)(*(float *)(a1 + 8) * 0.5);
  return result;
}
