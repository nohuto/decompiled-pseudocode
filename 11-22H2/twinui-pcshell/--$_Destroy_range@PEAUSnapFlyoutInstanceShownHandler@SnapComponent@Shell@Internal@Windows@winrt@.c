/*
 * XREFs of ??$_Destroy_range@PEAUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@PEAU123456@@std@@YAXPEAUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAU123456@@Z @ 0x1806788E8
 * Callers:
 *     ??$make_event_array@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x18067931C (--$make_event_array@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18067EB64 (-unconditional_release_ref@-$com_ptr@U-$event_array@USnapFlyoutInstanceShownHandler@SnapComponen.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler *>(
        winrt::Windows::Foundation::IUnknown *this,
        winrt::Windows::Foundation::IUnknown *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      if ( *(_QWORD *)v3 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
      v3 = (winrt::Windows::Foundation::IUnknown *)((char *)v3 + 8);
    }
    while ( v3 != a2 );
  }
}
