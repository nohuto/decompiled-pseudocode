/*
 * XREFs of ??1?$iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@param@winrt@@QEAA@XZ @ 0x18000A9D8
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z @ 0x18000A170 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z.c)
 *     _CControlCenterExperienceManager::Show_::_1_::dtor$4 @ 0x180212A8A (_CControlCenterExperienceManager--Show_--_1_--dtor$4.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::param::iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>::~iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>(
        __int64 a1)
{
  _BYTE *v1; // rax

  v1 = *(_BYTE **)(a1 + 8);
  if ( v1 )
    *v1 = 1;
  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( *(_QWORD *)a1 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a1);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
  }
}
