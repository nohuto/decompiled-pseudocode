/*
 * XREFs of ??_EListenerWindowNotificationArgs@@UEAAPEAXI@Z @ 0x1805D1B50
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_reference@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@IEAAIXZ @ 0x180026348 (-subtract_reference@-$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundat.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

ListenerWindowNotificationArgs *__fastcall ListenerWindowNotificationArgs::`vector deleting destructor'(
        ListenerWindowNotificationArgs *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v4, v5, v6);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
