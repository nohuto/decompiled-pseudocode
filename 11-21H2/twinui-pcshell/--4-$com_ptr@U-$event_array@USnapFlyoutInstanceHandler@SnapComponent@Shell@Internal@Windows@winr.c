/*
 * XREFs of ??4?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1805AEC70
 * Callers:
 *     ??$exchange@U?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1805ADD5C (--$exchange@U-$com_ptr@U-$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Wi.c)
 *     ?add@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1805B1410 (-add@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA.c)
 *     ?remove@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1805B2074 (-remove@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@Q.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1805B253C (-unconditional_release_ref@-$com_ptr@U-$event_array@USnapFlyoutInstanceHandler@SnapComponent@She.c)
 */

__int64 *__fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>>::unconditional_release_ref();
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
