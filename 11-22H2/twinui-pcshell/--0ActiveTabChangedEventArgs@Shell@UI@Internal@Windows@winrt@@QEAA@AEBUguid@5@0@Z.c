/*
 * XREFs of ??0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z @ 0x1806365EC
 * Callers:
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x180637760 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     ??$call@AEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@?$factory_cache_entry@UActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIActiveTabChangedEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@Z @ 0x1806359EC (--$call@AEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@-$factory_cache_entry@UActiveTabChangedE.c)
 *     ?CreateInstance@?$consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory@UIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUguid@3@0@Z @ 0x180636D5C (-CreateInstance@-$consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory@UIActiveTa.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs *__fastcall winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs::ActiveTabChangedEventArgs(
        winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs *this,
        const struct winrt::guid *a2,
        const struct winrt::guid *a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_180991478);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory> )
  {
    winrt::impl::consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>,
      this,
      a2,
      a3);
    _InterlockedDecrement64(&qword_180991478);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991478);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>::call<_lambda_0f5d06b182220372552e751da5d9ab64_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      v5);
  }
  return this;
}
