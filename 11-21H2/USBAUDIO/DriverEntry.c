/*
 * XREFs of DriverEntry @ 0x1C0028DA0
 * Callers:
 *     GsDriverEntry @ 0x1C003C010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qZ @ 0x1C0001B44 (WPP_RECORDER_AND_TRACE_SF_qZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     DriverCopyRegistryString @ 0x1C0028CC8 (DriverCopyRegistryString.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  char v4; // si
  struct _DEVICE_OBJECT *v5; // rdi
  void (__fastcall *v6)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *); // rax
  NTSTATUS v7; // eax
  NTSTATUS v8; // ecx
  int v10; // [rsp+20h] [rbp-40h]
  int v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+30h] [rbp-30h]
  int v13; // [rsp+38h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+40h] BYREF

  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = 0;
  WPP_MAIN_CB.Queue.Wcb.DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_EXBUSAUD;
  WPP_MAIN_CB.NextDevice = 0LL;
  v4 = 1;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  v15 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  pfnWppGetVersion = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  pfnWppTraceMessage = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  pfnWppQueryTraceInformation = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  WPPTraceSuite = 2;
  if ( pfnWppGetVersion )
    pfnWppGetVersion(&v15, 0LL, 0LL, 0LL);
  if ( v15 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    pfnEtwRegisterClassicProvider = (__int64)MmGetSystemRoutineAddress(&DestinationString);
    if ( pfnEtwRegisterClassicProvider )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      pfnEtwUnregister = (__int64)MmGetSystemRoutineAddress(&DestinationString);
      WPPTraceSuite = 4;
    }
  }
  WPP_MAIN_CB.CurrentIrp = 0LL;
  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( WPPTraceSuite == 4 )
    {
      v5 = &WPP_MAIN_CB;
      do
      {
        v6 = (void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *))pfnEtwRegisterClassicProvider;
        v5->Vpb = 0LL;
        v10 = (_DWORD)v5 + 56;
        v6(v5->DriverObject, 0LL, WppClassicProviderCallback, v5);
        v5 = v5->NextDevice;
      }
      while ( v5 );
    }
    else if ( WPPTraceSuite == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = &WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    WppAutoLogStart(WPP_GLOBAL_Control, DriverObject, RegistryPath);
    *(_QWORD *)&WPP_RECORDER_INITIALIZED = &WPP_MAIN_CB;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qZ(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      v11,
      v12,
      v13,
      (char)DriverObject,
      &RegistryPath->Length);
  pExtBusDeviceDispatchTable = (__int64)USBDeviceDispatchTable;
  v7 = KsInitializeDriver(DriverObject, RegistryPath, &KsDeviceDescriptor);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v8 = DriverCopyRegistryString((unsigned int)v7, (const void **)RegistryPath);
    if ( v8 >= 0 )
    {
      PerfSystemControlDispatch = (__int64)DriverObject->MajorFunction[23];
      DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)WmiDispatchSystemControl;
      DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
      DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
      DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
      DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
      DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
      DriverObject->DriverUnload = (PDRIVER_UNLOAD)DriverUnload;
    }
  }
  return v8;
}
