/*
 * XREFs of DriverEntry @ 0x1C003F178
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0003664 (FxDriverEntryWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     ProcLibDriverCleanup @ 0x1C002333C (ProcLibDriverCleanup.c)
 *     WppCleanupKm @ 0x1C0023394 (WppCleanupKm.c)
 *     WppInitKm @ 0x1C0023448 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C0023524 (WppLoadTracingSupport.c)
 *     wil_InitializeFeatureStaging @ 0x1C003F34C (wil_InitializeFeatureStaging.c)
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // ebx
  unsigned __int16 v5; // r9
  unsigned int v6; // r8d
  __int64 v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_ProcessorDriverTraceGuid;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  wil_InitializeFeatureStaging();
  v9[0] = 32LL;
  v9[1] = EvtDriverDeviceAdd;
  v9[3] = 0LL;
  v9[2] = EvtDriverUnload;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD, _QWORD *, _QWORD))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         0LL,
         v9,
         0LL);
  if ( v4 >= 0 )
  {
    KeInitializeAffinityEx2(&unk_1C0012568, 32LL);
    dword_1C00124D4 = KeQueryActiveProcessorAffinity2(&unk_1C0012568);
    KeInitializeAffinityEx2(&unk_1C00128E0, 32LL);
    v4 = ProcLibGlobalInit((PDEVICE_OBJECT)DriverObject);
    if ( v4 >= 0 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 11;
      v6 = 3;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 10;
    v6 = 4;
LABEL_7:
    LODWORD(v8) = v4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v6,
      v5,
      (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids,
      v8);
  }
  ProcLibDriverCleanup();
  WppCleanupKm((__int64)DriverObject);
  if ( WPP_MAIN_CB.Reserved )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    WPP_MAIN_CB.Reserved = 0LL;
  }
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = 0;
  return v4;
}
