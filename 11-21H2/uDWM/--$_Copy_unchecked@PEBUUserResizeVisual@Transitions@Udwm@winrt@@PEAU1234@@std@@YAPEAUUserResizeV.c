/*
 * XREFs of ??$_Copy_unchecked@PEBUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@PEBU1234@0PEAU1234@@Z @ 0x1800FC0D4
 * Callers:
 *     ??$_Assign_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXPEBUUserResizeVisual@Transitions@Udwm@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1800FBFFC (--$_Assign_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transi.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800126B0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::_Copy_unchecked<winrt::Udwm::Transitions::UserResizeVisual const *,winrt::Udwm::Transitions::UserResizeVisual *>(
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
