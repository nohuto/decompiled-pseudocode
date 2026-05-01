/*
 * XREFs of ??0LauncherOptions@System@Windows@winrt@@QEAA@XZ @ 0x18062F140
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180274070 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ??$ActivateInstance@ULauncherOptions@System@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULauncherOptions@System@23@XZ @ 0x18062D648 (--$ActivateInstance@ULauncherOptions@System@Windows@winrt@@@IActivationFactory@Foundation@Window.c)
 *     ??$call@P6A?AULauncherOptions@System@Windows@winrt@@AEBUIActivationFactory@Foundation@34@@Z@?$factory_cache_entry@ULauncherOptions@System@Windows@winrt@@UIActivationFactory@Foundation@34@@impl@winrt@@QEAA?A_P$$QEAP6A?AULauncherOptions@System@Windows@2@AEBUIActivationFactory@Foundation@52@@Z@Z @ 0x18062EA20 (--$call@P6A-AULauncherOptions@System@Windows@winrt@@AEBUIActivationFactory@Foundation@34@@Z@-$fa.c)
 */

winrt::Windows::System::LauncherOptions *__fastcall winrt::Windows::System::LauncherOptions::LauncherOptions(
        winrt::Windows::System::LauncherOptions *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_180990D88);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::System::LauncherOptions>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_180990D88);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990D88);
    v3 = _lambda_e196766f83e1d66489056b7e2848d983_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::System::LauncherOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::System::LauncherOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
