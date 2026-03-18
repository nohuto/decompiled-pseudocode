/*
 * XREFs of UsbhIdleIrp_ReleaseIrp @ 0x1C0058434
 * Callers:
 *     UsbhIdleExIrp_IdleReady @ 0x1C0057A84 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C0057BF8 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C0057CF4 (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C0057E1C (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C00580F0 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C0058548 (UsbhIdleIrp_WaitWorker.c)
 * Callees:
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0007830 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhClearPdoIdleReady @ 0x1C000A20C (UsbhClearPdoIdleReady.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     WPP_RECORDER_SF_dqqD @ 0x1C0058A38 (WPP_RECORDER_SF_dqqD.c)
 */

__int64 __fastcall UsbhIdleIrp_ReleaseIrp(__int64 a1, ULONG_PTR a2, IRP *a3, int a4)
{
  __int64 v8; // r9
  int v9; // r10d
  _DWORD *v10; // rbp
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-48h]

  Log(a1, 0x10000, 1936933744, a4, (__int64)a3);
  if ( a3 )
  {
    v10 = PdoExt(a2);
    UsbhClearPdoIdleReady(a1, a2, (__int64)a3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dqqD(
        WPP_GLOBAL_Control->DeviceExtension,
        *((unsigned __int16 *)v10 + 714),
        v11,
        v12,
        v14,
        *((_WORD *)v10 + 714),
        a2,
        (char)a3,
        a4);
    UsbhEtwLogDeviceIrpEvent((__int64)v10, (__int64)a3, &USBHUB_ETW_EVENT_DEVICE_IDLE_NOTIFICATION_COMPLETE);
    a3->IoStatus.Status = a4;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  }
  else
  {
    Log(a1, v9, 1936933680, v8, 0LL);
  }
  return (unsigned int)a4;
}
