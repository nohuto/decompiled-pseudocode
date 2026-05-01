/*
 * XREFs of ??0ShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x180694FB4
 * Callers:
 *     ?InvokeSearch@CopilotHotkeyManager@@QEAAXXZ @ 0x18026533C (-InvokeSearch@CopilotHotkeyManager@@QEAAXXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu$_ResumeCoro$1 @ 0x1802764A0 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--ShowContextMenu$_ResumeC.c)
 * Callees:
 *     ??$ActivateInstance@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUShowShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x180693810 (--$ActivateInstance@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foundat.c)
 *     ??$call@P6A?AUShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AUShowShellViewOptions@Shell@UI@WindowsUdk@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x180694454 (--$call@P6A-AUShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@.c)
 */

winrt::WindowsUdk::UI::Shell::ShowShellViewOptions *__fastcall winrt::WindowsUdk::UI::Shell::ShowShellViewOptions::ShowShellViewOptions(
        winrt::WindowsUdk::UI::Shell::ShowShellViewOptions *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1809912B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions>(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1809912B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1809912B8);
    v3 = _lambda_4412af45f4a36015e2ea70df7029dae5_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsUdk::UI::Shell::ShowShellViewOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
