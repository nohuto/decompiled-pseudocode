/*
 * XREFs of UsbhUnlockSSH @ 0x1C0002A5C
 * Callers:
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0003974 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0003E98 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C00041F0 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00186F0 (UsbhFdoReturnPortStatus.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C0058D7C (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0058DF8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 */

LONG __fastcall UsbhUnlockSSH(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // r8

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  v5 = 32LL * *(unsigned int *)(v4 + 3456);
  *(_DWORD *)(v4 + 3124) = a2;
  *(_DWORD *)(v5 + v4 + 3468) = a2;
  *(_DWORD *)(a1 + 120) = 1734964085;
  *(_QWORD *)(v4 + 3192) = 0LL;
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3128), 16, 1, 0);
}
