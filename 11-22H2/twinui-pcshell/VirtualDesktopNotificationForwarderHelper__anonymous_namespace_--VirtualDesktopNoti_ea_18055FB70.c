/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged @ 0x18055FB70
 * Callers:
 *     <none>
 * Callees:
 *     ??_9IVirtualDesktopNotification@@$BEI@AA @ 0x1802A1E50 (--_9IVirtualDesktopNotification@@$BEI@AA.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
     IVirtualDesktopNotification::`vcall'{72,{flat}}(v1);
  return 0LL;
}
