/*
 * XREFs of ??0TileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1805E144C
 * Callers:
 *     JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x1802136B0 (JointResize--EnsureTileCollectionAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$ActivateInstance@UTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@3@XZ @ 0x1805E024C (--$ActivateInstance@UTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@@IActivationFa.c)
 *     ??$call@P6A?AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1805E0E90 (--$call@P6A-AUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@AEBUIActivationFactor.c)
 */

winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *__fastcall winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions::TileCollectionCreateOptions(
        winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_180991318);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions>(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_180991318);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991318);
    v3 = _lambda_59762283627f7fdd9316b5187be5bad3_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
