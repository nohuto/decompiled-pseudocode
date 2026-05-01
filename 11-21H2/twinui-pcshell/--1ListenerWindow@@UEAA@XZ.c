/*
 * XREFs of ??1ListenerWindow@@UEAA@XZ @ 0x1800CC8CC
 * Callers:
 *     ??_E?$heap_implements@VListenerWindow@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800CC890 (--_E-$heap_implements@VListenerWindow@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAIXZ @ 0x180026348 (-subtract_reference@-$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundat.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801514C8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Win.c)
 */

void __fastcall ListenerWindow::~ListenerWindow(ListenerWindow *this)
{
  _QWORD *v2; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<ListenerWindow>::`vftable';
  v2 = (_QWORD *)((char *)this + 32);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(v2);
  winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
