/*
 * XREFs of ??$?0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@34@@Z@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@PEAVGamingOverlayExperienceManager@@P84@EAAXUIInspectable@123@AEBUUINavigationController@Input@Gaming@23@@Z@Z @ 0x1800AA260
 * Callers:
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A8E70 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
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
  *(_QWORD *)v7 = &winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>,_lambda_d869a36d3a1053452528762f68f23059_>::`vftable';
  *a1 = v7;
  return a1;
}
