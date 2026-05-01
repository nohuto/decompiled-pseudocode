/*
 * XREFs of ??$copy_n@PEAU?$EventHandler@I@Foundation@Windows@winrt@@IPEAU1234@@std@@YAPEAU?$EventHandler@I@Foundation@Windows@winrt@@PEAU1234@I0@Z @ 0x18027D618
 * Callers:
 *     ?add@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x18027EBFC (-add@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA-AUevent_token@2@AEBU-$Even.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::copy_n<winrt::Windows::Foundation::EventHandler<unsigned int> *,unsigned int,winrt::Windows::Foundation::EventHandler<unsigned int> *>(
        winrt::Windows::Foundation::IUnknown *a1,
        int a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbx
  winrt::Windows::Foundation::IUnknown *v5; // rdi
  int i; // esi

  v3 = a3;
  v5 = a1;
  if ( a2 )
  {
    winrt::Windows::Foundation::IUnknown::operator=(a3, a1);
    v3 = (winrt::Windows::Foundation::IUnknown *)((char *)v3 + 8);
    for ( i = a2 - 1; i; --i )
    {
      v5 = (winrt::Windows::Foundation::IUnknown *)((char *)v5 + 8);
      winrt::Windows::Foundation::IUnknown::operator=(v3, v5);
      v3 = (winrt::Windows::Foundation::IUnknown *)((char *)v3 + 8);
    }
  }
  return v3;
}
