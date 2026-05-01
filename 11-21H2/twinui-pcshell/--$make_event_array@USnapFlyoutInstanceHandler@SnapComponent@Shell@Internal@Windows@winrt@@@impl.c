/*
 * XREFs of ??$make_event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1805AE198
 * Callers:
 *     ?add@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1805B1410 (-add@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA.c)
 *     ?remove@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1805B2074 (-remove@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@Q.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@PEAUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@PEAU123456@@std@@YAXPEAUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAU123456@@Z @ 0x1805AD9D4 (--$_Destroy_range@PEAUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@PEAU.c)
 */

_QWORD *__fastcall winrt::impl::make_event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned int v2; // edi
  _DWORD *v4; // rax
  _DWORD *v5; // rsi
  winrt::Windows::Foundation::IUnknown *v6; // rbx
  _QWORD *result; // rax

  v2 = a2;
  v4 = operator new(8LL * a2 + 8);
  v5 = v4;
  *v4 = 1;
  v4[1] = v2;
  if ( v2 )
  {
    v6 = (winrt::Windows::Foundation::IUnknown *)(v4 + 2);
    do
    {
      *(_QWORD *)v6 = 0LL;
      winrt::Windows::Foundation::IUnknown::add_ref(v6);
      v6 = (winrt::Windows::Foundation::IUnknown *)((char *)v6 + 8);
      --v2;
    }
    while ( v2 );
    std::_Destroy_range<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler *>(
      v6,
      v6);
  }
  result = a1;
  *a1 = v5;
  return result;
}
