/*
 * XREFs of ?NotifySuccessfulSwitch@VirtualDesktopAnimationSyncNotificationInstance@@UEAAXXZ @ 0x180186050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopAnimationSyncNotificationInstance::NotifySuccessfulSwitch(
        VirtualDesktopAnimationSyncNotificationInstance *this)
{
  *(_BYTE *)(*((_QWORD *)this + 2) + 40LL) = 1;
}
