/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged_0 @ 0x1804A0160
 * Callers:
 *     <none>
 * Callees:
 *     ??_9IVirtualDesktopNotification@@$BFA@AA @ 0x1801FF320 (--_9IVirtualDesktopNotification@@$BFA@AA.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged_0(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
     IVirtualDesktopNotification::`vcall'{80,{flat}}(v1);
  return 0LL;
}
