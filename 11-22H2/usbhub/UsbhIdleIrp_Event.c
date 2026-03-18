/*
 * XREFs of UsbhIdleIrp_Event @ 0x1C0057F68
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C001BD28 (UsbhCompletePdoIdleIrp.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003136C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoIdleIrp @ 0x1C0057A50 (UsbhCompleteCanceledPdoIdleIrp.c)
 *     UsbhPdoIdleCC_Worker @ 0x1C0058720 (UsbhPdoIdleCC_Worker.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetIdleIrpState @ 0x1C001BE10 (UsbhGetIdleIrpState.c)
 *     UsbhSetIdleIrpState @ 0x1C001BE6C (UsbhSetIdleIrpState.c)
 *     UsbhIdleExIrp_IdleReady @ 0x1C0057A84 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C0057BF8 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C0057CF4 (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C0057E1C (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C00580F0 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C0058548 (UsbhIdleIrp_WaitWorker.c)
 */

__int64 __fastcall UsbhIdleIrp_Event(ULONG_PTR a1, __int64 a2, IRP *a3, unsigned int a4, int a5)
{
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  int IdleIrpState; // eax
  int v12; // r10d
  unsigned int v13; // ebx
  KIRQL NewIrql; // [rsp+68h] [rbp+20h] BYREF

  NewIrql = 0;
  Log(a1, 0x10000, 1936934230, (int)a4, (__int64)a3);
  v9 = PdoExt(a2);
  IdleIrpState = UsbhGetIdleIrpState(v10, a2, &NewIrql);
  v9[360] = a5;
  Log(a1, 0x10000, 1936934193, a2, IdleIrpState);
  switch ( v12 )
  {
    case 0:
      return (unsigned int)UsbhIdleIrp_NoIrp(a1, a2, a3, a4, 0, NewIrql);
    case 1:
      return (unsigned int)UsbhIdleIrp_WaitWorker(a1, a2, a3, a4, 1, NewIrql);
    case 2:
      return (unsigned int)UsbhIdleIrp_CB_Pending(a1, a2, a3, a4, 2, NewIrql);
    case 3:
      return (unsigned int)UsbhIdleIrp_CB_Canceled(a1, a2, (__int64)a3, a4, 3, NewIrql);
    case 4:
      return (unsigned int)UsbhIdleIrp_CB_Complete(a1, a2, (__int64)a3, a4, 4, NewIrql);
    case 5:
      return (unsigned int)UsbhIdleExIrp_IdleReady(a1, a2, (__int64)a3, a4, 5, NewIrql);
  }
  v13 = -1073741823;
  UsbhSetIdleIrpState((unsigned int)(v12 - 4), a2, a4, v12, NewIrql);
  return v13;
}
