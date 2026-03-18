/*
 * XREFs of UsbhLockSSH @ 0x1C0058FFC
 * Callers:
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0004B88 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C00076A0 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C00596BC (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

__int64 __fastcall UsbhLockSSH(__int64 a1, int a2)
{
  _DWORD *v4; // rdi
  unsigned int *v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  KeWaitForSingleObject(v4 + 782, Executive, 0, 0, 0LL);
  *((_QWORD *)v4 + 399) = a1;
  v5 = v4 + 781;
  *(_DWORD *)(a1 + 120) = 2018005843;
  *(_DWORD *)(a1 + 124) = a2;
  *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
  v6 = v4[864];
  v7 = 8LL * (v6 & 7);
  if ( v4[v7 + 865] != a2 || v4[v7 + 866] != *v5 )
  {
    v8 = ((_BYTE)v6 + 1) & 7;
    v4[864] = v8;
    v8 *= 32LL;
    *(_DWORD *)((char *)v4 + v8 + 3460) = a2;
    *(_DWORD *)((char *)v4 + v8 + 3464) = *v5;
  }
  return *v5;
}
