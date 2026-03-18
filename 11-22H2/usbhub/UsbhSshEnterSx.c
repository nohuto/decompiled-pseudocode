/*
 * XREFs of UsbhSshEnterSx @ 0x1C0004DC4
 * Callers:
 *     UsbhFdoSetPowerSx_Action @ 0x1C0003F04 (UsbhFdoSetPowerSx_Action.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0007050 (UsbhIncHubBusy.c)
 *     UsbhDisableTimerObject @ 0x1C00084D0 (UsbhDisableTimerObject.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

LONG __fastcall UsbhSshEnterSx(__int64 a1, int a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // r9
  int v7; // r10d
  __int64 v9; // rdx

  v4 = FdoExt(a1);
  v5 = (_QWORD *)UsbhIncHubBusy(a1, a2, a1, 2018734963, 1);
  KeWaitForSingleObject((PVOID)(v4 + 3160), Executive, 0, 0, 0LL);
  Log(
    a1,
    0x10000,
    1213429803,
    _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 3304), (signed __int64)v5, 0LL),
    (__int64)v5);
  if ( v6 )
  {
    Log(a1, v7, 1213429810, v6, (__int64)v5);
    UsbhDecHubBusy(a1, v9, v5);
  }
  UsbhDisableTimerObject(a1, v4 + 3200);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3160), 16, 1, 0);
}
