/*
 * XREFs of ?CreateAsync@TileCollection@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUTileCollectionCreateOptions@2345@@Z @ 0x1805E2930
 * Callers:
 *     JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x1802136B0 (JointResize--EnsureTileCollectionAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$call@AEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@?$factory_cache_entry@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@Z @ 0x1805E0998 (--$call@AEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@-$factory_cache_entry@UTileCollection@St.c)
 *     ?CreateAsync@?$consume_WindowsUdk_UI_StartScreen_ITileCollectionStatics@UITileCollectionStatics@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@3@@Z @ 0x1805E28D8 (-CreateAsync@-$consume_WindowsUdk_UI_StartScreen_ITileCollectionStatics@UITileCollectionStatics@.c)
 */

const struct winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *__fastcall winrt::WindowsUdk::UI::StartScreen::TileCollection::CreateAsync(
        const struct winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *a1,
        _QWORD *a2)
{
  _QWORD *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_180991338;
  _InterlockedIncrement64(&qword_180991338);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileCollectionStatics<winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>::CreateAsync(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>,
      a1,
      a2);
    _InterlockedDecrement64(&qword_180991338);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991338);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>::call<_lambda_16971566875aad41a6f0fa0e27bb06ca_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      &v4);
  }
  return a1;
}
