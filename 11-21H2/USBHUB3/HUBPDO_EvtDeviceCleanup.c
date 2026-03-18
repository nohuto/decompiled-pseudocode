/*
 * XREFs of HUBPDO_EvtDeviceCleanup @ 0x1C0018CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006D20 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     Feature_UsbHubDripsWatchdogSurpriseRemove__private_IsEnabledPreCheck @ 0x1C00143E8 (Feature_UsbHubDripsWatchdogSurpriseRemove__private_IsEnabledPreCheck.c)
 *     HUBMISC_WaitForSignal @ 0x1C0030194 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C003C168 (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_BillboardCleanup @ 0x1C007A0D8 (HUBPDO_BillboardCleanup.c)
 */

void __fastcall HUBPDO_EvtDeviceCleanup(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  struct _KEVENT *v3; // r14
  __int64 v4; // rbp
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // rax
  PVOID *v11; // rbx
  __int64 v12; // rsi
  NTSTATUS v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rcx
  __int64 v21; // [rsp+28h] [rbp-30h]
  char v22; // [rsp+68h] [rbp+10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00670F8);
  v3 = *(struct _KEVENT **)(v2 + 24);
  v4 = *(_QWORD *)&v3[1].Header.Lock;
  v23 = v4;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v1, &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_START, 0LL, v4);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)v3->Header.WaitListHead.Flink[89].Blink,
      2u,
      5u,
      0x55u,
      (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
      v5);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", 0x20u);
  v7 = *(void **)(v2 + 408);
  if ( v7 )
  {
    PoUnregisterPowerSettingCallback(v7);
    *(_QWORD *)(v2 + 408) = 0LL;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v8,
      "DRIPS SR Tag",
      6400LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  Feature_UsbHubDripsWatchdogSurpriseRemove__private_IsEnabledPreCheck((__int64)v7, v6);
  v9 = *(void **)(v2 + 416);
  if ( v9 )
  {
    PoUnregisterPowerSettingCallback(v9);
    *(_QWORD *)(v2 + 416) = 0LL;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v10,
      "DRIPS IO Tag",
      6408LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  v11 = (PVOID *)(v2 + 272);
  v12 = 5LL;
  do
  {
    if ( *v11 )
    {
      v13 = PoUnregisterPowerSettingCallback(*v11);
      if ( v13 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v13;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL),
          2u,
          5u,
          0x54u,
          (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
          v21);
      }
      *v11 = 0LL;
    }
    ++v11;
    --v12;
  }
  while ( v12 );
  v14 = v23;
  if ( (*(_DWORD *)(v2 + 32) & 0x1000) != 0 )
    HUBIDLE_AddEvent(v2 + 72, 6006LL, 0LL);
  v22 = 0;
  v15 = *(_QWORD *)&v3->Header.Lock;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
          WdfDriverGlobals,
          *(_QWORD *)&v3->Header.Lock);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v16,
    "ControllerPowerReference Tag",
    94LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  (*(void (__fastcall **)(_QWORD, char *))(v15 + 560))(*(_QWORD *)(v15 + 248), &v22);
  KeClearEvent(v3 + 66);
  HUBSM_AddEvent((__int64)&v3[21], 4063);
  HUBMISC_WaitForSignal(&v3[66]);
  HUBPDO_BillboardCleanup(v3);
  v17 = *(_QWORD *)&v3->Header.Lock;
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)&v3->Header.Lock + 568LL))(
    *(_QWORD *)(*(_QWORD *)&v3->Header.Lock + 248LL),
    &v22);
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v17);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v18,
    "ControllerPowerReference Tag",
    130LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  v3->Header.WaitListHead.Blink = 0LL;
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _KEVENT *))(WdfFunctions_01015 + 1632))(
          WdfDriverGlobals,
          v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v19,
    "DSM PDO Tag",
    6469LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v20 = *(void **)(v2 + 56);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0x64334855u);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)v20, &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_COMPLETE, 0LL, v14);
}
