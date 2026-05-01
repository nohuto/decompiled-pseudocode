/*
 * XREFs of ??$?0USharedDesktopBackgroundVisualHost@@P80@EAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@34@@_E@RoutedEventHandler@Xaml@UI@Windows@winrt@@QEAA@PEAUSharedDesktopBackgroundVisualHost@@P85@EAAXAEBUIInspectable@Foundation@34@AEBURoutedEventArgs@1234@@_E@Z @ 0x1806E5378
 * Callers:
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1806E6F40 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall ____0USharedDesktopBackgroundVisualHost__P80_EAAXAEBUIInspectable_Foundation_Windows_winrt__AEBURoutedEventArgs_Xaml_UI_34___E_RoutedEventHandler_Xaml_UI_Windows_winrt__QEAA_PEAUSharedDesktopBackgroundVisualHost__P85_EAAXAEBUIInspectable_Foundation_34_AEBURoutedEventArgs_1234___E_Z(
        _QWORD *a1,
        __int64 a2,
        __m128d *a3)
{
  __m128d v4; // xmm6
  _BYTE v6[24]; // [rsp+20h] [rbp-38h]
  char *v7; // [rsp+60h] [rbp+8h]

  v4 = *a3;
  *(_QWORD *)v6 = a2;
  *(__m128d *)&v6[8] = *a3;
  v7 = (char *)operator new(0x28uLL);
  *(_OWORD *)(v7 + 8) = *(_OWORD *)v6;
  *((_QWORD *)v7 + 3) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v7 + 8) = 1;
  *(_QWORD *)v7 = &winrt::impl::delegate<winrt::Windows::UI::Xaml::RoutedEventHandler,_lambda_2b1b3b6403435603254e85b21aa8ddec_>::`vftable';
  *a1 = v7;
  return a1;
}
