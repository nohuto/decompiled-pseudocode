/*
 * XREFs of ??4?$com_ptr@U?$event_array@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180679F94
 * Callers:
 *     ??$exchange@U?$com_ptr@U?$event_array@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x180678FE8 (--$exchange@U-$com_ptr@U-$event_array@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Intern.c)
 *     ?add@?$event@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18067DA24 (-add@-$event@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@.c)
 *     ?remove@?$event@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18067E654 (-remove@-$event@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18067EB64 (-unconditional_release_ref@-$com_ptr@U-$event_array@USnapFlyoutInstanceShownHandler@SnapComponen.c)
 */

__int64 *__fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler>>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler>>::unconditional_release_ref();
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
