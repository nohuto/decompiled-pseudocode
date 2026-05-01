/*
 * XREFs of ??1?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x180646B5C
 * Callers:
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$14 @ 0x1802B4E8C (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1802B4E8C.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::operator()_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs__::_1_::dtor$0 @ 0x1802C4320 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--Tas.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::add_::_1_::dtor$0 @ 0x1802C5FB6 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1802C5FB6.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::remove_::_1_::dtor$0 @ 0x18064A502 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_18064A502.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::remove_::_1_::dtor$2 @ 0x18064A51A (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_18064A51A.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801532DC (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGro.c)
 */

void __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>(
        __int64 *a1)
{
  if ( *a1 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::unconditional_release_ref(a1);
}
