/*
 * XREFs of ?CalculateFlyoutBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AURect@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@PEAUHWND__@@_NAEBU8967@@Z @ 0x1805B87B8
 * Callers:
 *     ?Show@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805BA6F4 (-Show@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z @ 0x1805A7518 (-TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z.c)
 *     ??$SnapFlyoutInstance_CalculateFlyoutBounds@AEAURect@Foundation@Windows@winrt@@@SnapFlyoutTelemetry@@SAXAEAURect@Foundation@Windows@winrt@@@Z @ 0x1805B71CC (--$SnapFlyoutInstance_CalculateFlyoutBounds@AEAURect@Foundation@Windows@winrt@@@SnapFlyoutTeleme.c)
 *     ?ActualHeight@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBANXZ @ 0x1805B8720 (-ActualHeight@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@win.c)
 *     ?ActualWidth@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBANXZ @ 0x1805B876C (-ActualWidth@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winr.c)
 */

float *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBounds(
        float *a1,
        __int64 a2,
        __int64 *a3,
        HWND a4,
        char a5,
        float *a6)
{
  float v9; // xmm6_4
  double v10; // xmm0_8
  int v11; // edx
  float v12; // xmm2_4
  int v13; // eax
  int v14; // edx
  struct Geometry::CRect *v15; // r8
  float v16; // xmm2_4
  __m128i v17; // xmm3
  float v18; // xmm1_4
  __m128i v19; // xmm0
  int SystemMetricsForDpi; // edi
  int v21; // ebx
  int v22; // eax
  float v23; // xmm1_4
  float v24; // xmm2_4
  float *v25; // rax
  float *v26; // rcx
  float v27; // xmm2_4
  float v28; // xmm0_4
  int nNumerator; // [rsp+20h] [rbp-50h] BYREF
  struct tagPOINT Point; // [rsp+28h] [rbp-48h] BYREF
  struct HWND__ rcDst[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT pvAttribute; // [rsp+40h] [rbp-30h] BYREF

  nNumerator = 0;
  GetDpiForMonitor(a2, 0LL, &nNumerator, &nNumerator);
  v9 = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualHeight(a3);
  v10 = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualWidth(a3);
  v11 = nNumerator;
  v12 = v10;
  *(_OWORD *)a1 = 0LL;
  v13 = MulDiv((int)v12, v11, 96);
  v14 = nNumerator;
  a1[2] = (float)v13;
  a1[3] = (float)MulDiv((int)v9, v14, 96);
  GetPhysicalCursorPos(&Point);
  *(_OWORD *)&rcDst[0].unused = 0LL;
  if ( SnapLayoutHelpers::TryGetMaximizeButtonRectFromDwm(a4, (struct tagRECT *)rcDst, v15) )
  {
    v16 = a1[2];
    v17 = _mm_cvtsi32_si128(rcDst[3].unused);
    *a1 = (float)(rcDst[0].unused + (rcDst[2].unused - rcDst[0].unused) / 2) - (float)(v16 * 0.5);
  }
  else
  {
    pvAttribute = 0LL;
    if ( DwmGetWindowAttribute(a4, 9u, &pvAttribute, 0x10u) < 0 )
      GetWindowRect(a4, &pvAttribute);
    v18 = a1[2];
    if ( a5 )
    {
      v19 = _mm_cvtsi32_si128(Point.x);
      v18 = v18 * 0.5;
    }
    else
    {
      v19 = _mm_cvtsi32_si128(pvAttribute.right);
    }
    *a1 = _mm_cvtepi32_ps(v19).m128_f32[0] - v18;
    SystemMetricsForDpi = GetSystemMetricsForDpi(4LL);
    v21 = GetSystemMetricsForDpi(33LL);
    v22 = GetSystemMetricsForDpi(92LL);
    v16 = a1[2];
    v17 = _mm_cvtsi32_si128(SystemMetricsForDpi + v21 + v22 + pvAttribute.top);
  }
  *((_DWORD *)a1 + 1) = _mm_cvtepi32_ps(v17).m128_u32[0];
  v23 = *a6;
  v24 = (float)((float)(*a6 + a6[2]) - v16) - 1.0;
  if ( *a6 <= *a1 )
    v23 = *a1;
  if ( v23 <= v24 )
    v24 = v23;
  *a1 = v24;
  v25 = a6 + 1;
  v26 = a1 + 1;
  if ( a6[1] <= a1[1] )
    v25 = a1 + 1;
  v27 = (float)((float)(a6[1] + a6[3]) - a1[3]) - 1.0;
  if ( *v25 <= v27 )
    v27 = *v25;
  *v26 = v27;
  if ( a5 )
  {
    v28 = (float)(Point.y + 1);
    if ( v28 <= v27 )
      v28 = v27;
    *v26 = v28;
  }
  SnapFlyoutTelemetry::SnapFlyoutInstance_CalculateFlyoutBounds<winrt::Windows::Foundation::Rect &>((struct winrt::Windows::Foundation::Rect *)a1);
  return a1;
}
