/*
 * XREFs of ??0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1802D4E70
 * Callers:
 *     ?LowLevelMouseHookProc@CJumpViewExperienceManager@@CA_JH_K_J@Z @ 0x1801E39A0 (-LowLevelMouseHookProc@CJumpViewExperienceManager@@CA_JH_K_J@Z.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x18020DDA0 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 *     ?InvokeSearch@CopilotHotkeyManager@@QEAAXXZ @ 0x18026533C (-InvokeSearch@CopilotHotkeyManager@@QEAAXXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu$_ResumeCoro$1 @ 0x1802761B0 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--DismissContextMenu$_Resu.c)
 * Callees:
 *     ??$ActivateInstance@UDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDismissShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18044688C (--$ActivateInstance@UDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foun.c)
 *     ??$call@P6A?AUDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDismissShellViewOptions@Shell@UI@WindowsUdk@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x180446F28 (--$call@P6A-AUDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundati.c)
 */

// Hidden C++ exception states: #wind=1
winrt::WindowsUdk::UI::Shell::DismissShellViewOptions *__fastcall winrt::WindowsUdk::UI::Shell::DismissShellViewOptions::DismissShellViewOptions(
        winrt::WindowsUdk::UI::Shell::DismissShellViewOptions *this)
{
  __int64 (__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_180991058);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_180991058);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991058);
    v3 = _lambda_0df55e773ac92632ea908e96f7e5a375_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      this,
      &v3);
  }
  return this;
}
