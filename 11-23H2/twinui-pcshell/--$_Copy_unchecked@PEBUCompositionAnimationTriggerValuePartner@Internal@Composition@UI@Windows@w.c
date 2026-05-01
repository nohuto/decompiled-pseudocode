/*
 * XREFs of ??$_Copy_unchecked@PEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@PEAU123456@@std@@YAPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@PEBU123456@0PEAU123456@@Z @ 0x18054B740
 * Callers:
 *     ??$_Assign_range@PEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEAAXPEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x18054B668 (--$_Assign_range@PEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@win.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::_Copy_unchecked<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner const *,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner *>(
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
