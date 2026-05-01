/*
 * XREFs of ??1ListenerWindow@@UEAA@XZ @ 0x1801B869C
 * Callers:
 *     ??_E?$heap_implements@VListenerWindow@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801B8660 (--_E-$heap_implements@VListenerWindow@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800D9EC8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Win.c)
 */

void __fastcall ListenerWindow::~ListenerWindow(ListenerWindow *this)
{
  __int64 *v2; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<ListenerWindow>::`vftable';
  v2 = (__int64 *)((char *)this + 32);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(v2);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
