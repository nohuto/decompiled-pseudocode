/*
 * XREFs of ??1?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x180588F08
 * Callers:
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$14 @ 0x180217311 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_180217311.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::add_::_1_::dtor$0 @ 0x18021E2FB (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_18021E2FB.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::operator()_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs__::_1_::dtor$0 @ 0x180220C27 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_180220C27.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::remove_::_1_::dtor$0 @ 0x18058C132 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_18058C132.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::remove_::_1_::dtor$2 @ 0x18058C14A (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_18058C14A.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18012B3E0 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGro.c)
 */

void __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>(
        volatile signed __int32 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( *a1 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::unconditional_release_ref(
      a1,
      a2,
      a3,
      a4);
}
