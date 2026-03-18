/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C002E98C
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C0001B70 (UsbhBusConnectPdo.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C00020D0 (UsbhSS_PdoWakeWorker.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C00040B8 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0005350 (Usbh_PCE_Disable_Action.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C000EB10 (UsbhFdoSetPowerDx_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0010600 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C00116B0 (Usbh_PCE_wDone_Action.c)
 *     UsbhHubProcessChangeWorker @ 0x1C0012090 (UsbhHubProcessChangeWorker.c)
 *     UsbhBusPause_Action @ 0x1C0012DC0 (UsbhBusPause_Action.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0013CC0 (UsbhHubRunPortChangeQueue.c)
 *     Usbh_PCE_wRun_Action @ 0x1C0014530 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0014D00 (Usbh_PCE_wChange_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0017430 (UsbhHubDispatchPortEvent.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C001C090 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_Enable_Action @ 0x1C001C8C0 (Usbh_PCE_Enable_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C001F8E0 (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhPCE_psSUSPEND @ 0x1C0021F8C (UsbhPCE_psSUSPEND.c)
 *     UsbhGetDeviceBusInfo @ 0x1C002BA9C (UsbhGetDeviceBusInfo.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0033EBC (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Check @ 0x1C003439C (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x1C0034474 (UsbhPCE_Close.c)
 *     UsbhPCE_Disable @ 0x1C0034550 (UsbhPCE_Disable.c)
 *     UsbhPCE_HW_Stop @ 0x1C003476C (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_SD_Resume @ 0x1C0034BD8 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_wChangeERROR @ 0x1C0034DAC (UsbhPCE_wChangeERROR.c)
 *     Usbh_PCE_Check_Action @ 0x1C00356AC (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C00357E8 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0035A14 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0035FD8 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0036144 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0036434 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhExceptionTrace @ 0x1C004AC64 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v8, (__int64 *)va);
}
