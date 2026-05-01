/*
 * XREFs of ??$get_activation_factory@UISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@winrt@@YA?AUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18069CAA8
 * Callers:
 *     ??$call@AEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@?$factory_cache_entry@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPrivate@23Internal@45@@impl@winrt@@QEAA?A_PAEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@Z @ 0x18069C140 (--$call@AEAV_lambda_510f073dcdc03c242fdf061cb60c9f3e_@@@-$factory_cache_entry@USecondaryTile@Sta.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax
  signed int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>,
    (__int64)&v5);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  result = a1;
  *a1 = v5;
  return result;
}
