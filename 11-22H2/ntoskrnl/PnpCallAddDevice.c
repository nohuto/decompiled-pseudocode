/*
 * XREFs of PnpCallAddDevice @ 0x140792B3C
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C82E4 (PipCallDriverAddDevice.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140305CD0 (KeRevertToUserGroupAffinityThread.c)
 *     PpvUtilCallAddDevice @ 0x140322130 (PpvUtilCallAddDevice.c)
 *     PnpSetDeviceAffinityThread @ 0x140322660 (PnpSetDeviceAffinityThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140554A20 (McTemplateK0q_EtwWriteTransfer.c)
 *     PnpWatchdogEtwWrite @ 0x140560B10 (PnpWatchdogEtwWrite.c)
 *     McTemplateK0qhzr1z_EtwWriteTransfer @ 0x1405612B4 (McTemplateK0qhzr1z_EtwWriteTransfer.c)
 *     PnpRecordBlackbox @ 0x140785ADC (PnpRecordBlackbox.c)
 *     PnpWatchdogTimerPause @ 0x140785B50 (PnpWatchdogTimerPause.c)
 *     WdtpCancelTimer @ 0x140785BDC (WdtpCancelTimer.c)
 *     PnpEnableWatchdog @ 0x14078652C (PnpEnableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCallAddDevice(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *),
        int a4)
{
  int v7; // eax
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // r8
  void *v13; // rbx
  _QWORD v15[4]; // [rsp+40h] [rbp-78h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-58h] BYREF

  v15[0] = 0LL;
  PreviousAffinity = 0LL;
  if ( (byte_140C0E20B & 8) != 0 )
    McTemplateK0qhzr1z_EtwWriteTransfer(
      *(_WORD *)(a2 + 56) >> 1,
      a2,
      (__int64)a3,
      a4,
      *(_WORD *)(a2 + 56) >> 1,
      *(_QWORD *)(a2 + 64),
      *(const wchar_t **)(a1 + 48));
  v7 = PnpSetDeviceAffinityThread(*(_QWORD *)(a1 + 32), &PreviousAffinity);
  v15[1] = a1;
  v15[2] = a2;
  v8 = v7;
  v9 = *(_QWORD *)(a2 + 48);
  v15[3] = KeGetCurrentThread();
  v10 = PnpEnableWatchdog(4, (__int64)v15, (const UNICODE_STRING *)(v9 + 24));
  v11 = PpvUtilCallAddDevice(*(struct _DEVICE_OBJECT **)(a1 + 32), (struct _DRIVER_OBJECT *)a2, a3);
  if ( v10 )
  {
    PnpWatchdogTimerPause(*(_QWORD *)(v10 + 8));
    PnpRecordBlackbox(0LL, *(_DWORD *)(v10 + 16));
    if ( *(_BYTE *)(v10 + 32) )
    {
      PnpWatchdogEtwWrite(v10, 1);
      if ( !*(_BYTE *)(v10 + 33) )
        PnpWatchdogEtwWrite(v10, 3);
    }
    v13 = *(void **)(v10 + 8);
    WdtpCancelTimer((__int64)v13, 1);
    ExFreePoolWithTag(v13, 0x54645750u);
  }
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140C0E20B & 8) != 0 )
    McTemplateK0q_EtwWriteTransfer(
      MS_KernelPnP_Provider_Context,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceAdd_Stop,
      v12,
      v11);
  return v11;
}
