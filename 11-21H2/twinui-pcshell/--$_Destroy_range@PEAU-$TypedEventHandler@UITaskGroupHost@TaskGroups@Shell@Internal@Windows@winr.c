/*
 * XREFs of ??$_Destroy_range@PEAU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@PEAU1234@@std@@YAXPEAU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@QEAU1234@@Z @ 0x18017F6A8
 * Callers:
 *     ??$make_event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800FB748 (--$make_event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18012B3E0 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGro.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18041F1D0 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UITaskGrou_ea_18041F1D0.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs> *,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs> *>(
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
