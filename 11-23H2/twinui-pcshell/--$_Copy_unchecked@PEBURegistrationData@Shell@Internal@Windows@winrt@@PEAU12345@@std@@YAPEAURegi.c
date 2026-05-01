/*
 * XREFs of ??$_Copy_unchecked@PEBURegistrationData@Shell@Internal@Windows@winrt@@PEAU12345@@std@@YAPEAURegistrationData@Shell@Internal@Windows@winrt@@PEBU12345@0PEAU12345@@Z @ 0x180702168
 * Callers:
 *     ??$_Assign_range@PEBURegistrationData@Shell@Internal@Windows@winrt@@@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXPEBURegistrationData@Shell@Internal@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x180702090 (--$_Assign_range@PEBURegistrationData@Shell@Internal@Windows@winrt@@@-$vector@URegistrationData@.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::_Copy_unchecked<winrt::Windows::Internal::Shell::RegistrationData const *,winrt::Windows::Internal::Shell::RegistrationData *>(
        winrt::Windows::Foundation::IUnknown *a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  winrt::Windows::Foundation::IUnknown *i; // rdi

  for ( i = a1; i != a2; i = (winrt::Windows::Foundation::IUnknown *)((char *)i + 8) )
  {
    winrt::Windows::Foundation::IUnknown::operator=(a3, i);
    a3 = (winrt::Windows::Foundation::IUnknown *)((char *)a3 + 8);
  }
  return a3;
}
