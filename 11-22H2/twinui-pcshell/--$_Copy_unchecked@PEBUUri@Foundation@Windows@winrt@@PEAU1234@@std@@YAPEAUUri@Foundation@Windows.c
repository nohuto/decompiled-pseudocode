/*
 * XREFs of ??$_Copy_unchecked@PEBUUri@Foundation@Windows@winrt@@PEAU1234@@std@@YAPEAUUri@Foundation@Windows@winrt@@PEBU1234@0PEAU1234@@Z @ 0x18022F2F8
 * Callers:
 *     ??$_Assign_range@PEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAXPEBUUri@Foundation@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x18022F224 (--$_Assign_range@PEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt@@V-$a.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::_Copy_unchecked<winrt::Windows::Foundation::Uri const *,winrt::Windows::Foundation::Uri *>(
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
