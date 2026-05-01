/*
 * XREFs of ??$get_activation_factory@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPrivate@23Internal@45@@winrt@@YA?A_PXZ @ 0x18069CB14
 * Callers:
 *     _lambda_f6e53e493654d1a4a6ac1f77113909cc_::operator() @ 0x180250478 (_lambda_f6e53e493654d1a4a6ac1f77113909cc_--operator().c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$call@AEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@?$factory_cache_entry@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPrivate@23Internal@45@@impl@winrt@@QEAA?A_PAEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@Z @ 0x18069C140 (--$call@AEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@-$factory_cache_entry@USecondaryTile@Sta.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::get_activation_factory<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>(
        winrt::Windows::Foundation::IUnknown *a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  _InterlockedIncrement64(&qword_18098ECC8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate> )
  {
    *(_QWORD *)a1 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>;
    winrt::Windows::Foundation::IUnknown::add_ref(a1);
    _InterlockedDecrement64(&qword_18098ECC8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098ECC8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>::call<_lambda_510f073dcdc03c242fdf061cb60c9f3e_ &>(
      (__int64)a1,
      a1,
      a3);
  }
  return a1;
}
