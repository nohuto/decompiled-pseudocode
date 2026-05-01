/*
 * XREFs of ??1ListenerWindowNotificationArgs@@UEAA@XZ @ 0x1805D1B24
 * Callers:
 *     _ListenerWindow::WndProc_::_1_::dtor$0 @ 0x18022157C (_ListenerWindow--WndProc_--_1_--dtor$0.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAIXZ @ 0x180026348 (-subtract_reference@-$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundat.c)
 */

void __fastcall ListenerWindowNotificationArgs::~ListenerWindowNotificationArgs(ListenerWindowNotificationArgs *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v1, v2, v3);
}
