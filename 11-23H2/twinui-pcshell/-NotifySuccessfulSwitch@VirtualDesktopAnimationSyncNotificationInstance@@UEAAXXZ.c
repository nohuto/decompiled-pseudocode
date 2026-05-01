/*
 * XREFs of ?NotifySuccessfulSwitch@VirtualDesktopAnimationSyncNotificationInstance@@UEAAXXZ @ 0x1801C40B0
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
