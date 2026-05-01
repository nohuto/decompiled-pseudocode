/*
 * XREFs of ?GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ @ 0x18019C344
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1 @ 0x1801CF600 (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_ResumeC.c)
 * Callees:
 *     ??$call@P6A?AUFocusSessionThemeManager@Shell@Internal@Windows@winrt@@AEBUIFocusSessionThemeManagerStatics@2345@@Z@?$factory_cache_entry@UFocusSessionThemeManager@Shell@Internal@Windows@winrt@@UIFocusSessionThemeManagerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUFocusSessionThemeManager@Shell@Internal@Windows@2@AEBUIFocusSessionThemeManagerStatics@4562@@Z@Z @ 0x18019C3A4 (--$call@P6A-AUFocusSessionThemeManager@Shell@Internal@Windows@winrt@@AEBUIFocusSessionThemeManag.c)
 *     ?GetDefault@?$consume_Windows_Internal_Shell_IFocusSessionThemeManagerStatics@UIFocusSessionThemeManagerStatics@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B3978 (-GetDefault@-$consume_Windows_Internal_Shell_IFocusSessionThemeManagerStatics@UIFocusSessionThem.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::FocusSessionThemeManager::GetDefault(__int64 a1)
{
  __int64 (__fastcall *v3)(const struct winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18098D9E8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_IFocusSessionThemeManagerStatics<winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>::GetDefault(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>,
      a1);
    _InterlockedDecrement64(&qword_18098D9E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098D9E8);
    v3 = _lambda_0bb2dcbde4e4720f037d7e02636ac325_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::FocusSessionThemeManager,winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics>::call<winrt::Windows::Internal::Shell::FocusSessionThemeManager (*)(winrt::Windows::Internal::Shell::IFocusSessionThemeManagerStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
