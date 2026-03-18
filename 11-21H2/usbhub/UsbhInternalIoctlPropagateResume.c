/*
 * XREFs of UsbhInternalIoctlPropagateResume @ 0x1C0002D58
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C0002C70 (UsbhFdoInternalDeviceControl.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhInternalIoctlPropagateResume(__int64 a1, IRP *a2)
{
  __int64 v4; // rax

  v4 = FdoExt(a1);
  Usbh_SSH_Event(a1, 8LL, v4 + 1912);
  Log(a1, 32, 1734503506, (_DWORD)a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      58,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      0);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
