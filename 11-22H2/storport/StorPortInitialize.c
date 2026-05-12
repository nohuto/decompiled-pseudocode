/*
 * XREFs of StorPortInitialize @ 0x1C0042320
 * Callers:
 *     StorPortInitializeVrfy @ 0x1C00AAA80 (StorPortInitializeVrfy.c)
 * Callees:
 *     RaidGetPortData @ 0x1C00216A4 (RaidGetPortData.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C00414F0 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0dqddddddiiiii_EtwWriteTransfer @ 0x1C00415C8 (McTemplateK0dqddddddiiiii_EtwWriteTransfer.c)
 *     WPP_SF_qqqq @ 0x1C0042F94 (WPP_SF_qqqq.c)
 *     RaCreateDriver @ 0x1C00A8514 (RaCreateDriver.c)
 *     RaDeleteDriver @ 0x1C00A8568 (RaDeleteDriver.c)
 *     RaInitializeDriver @ 0x1C00A865C (RaInitializeDriver.c)
 *     RaSaveDriverInitData @ 0x1C00A876C (RaSaveDriverInitData.c)
 *     WppCleanupKm @ 0x1C00A87FC (WppCleanupKm.c)
 *     WppInitKm @ 0x1C00A8AE8 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C00A8B7C (WppLoadTracingSupport.c)
 *     __security_init_cookie @ 0x1C00B4044 (__security_init_cookie.c)
 */

__int64 __fastcall StorPortInitialize(PDRIVER_OBJECT DriverObject, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // r12
  int v9; // eax
  NTSTATUS v10; // edi
  void (__fastcall *v11)(PDRIVER_OBJECT, __int64); // rax
  __int64 PortData; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  int inited; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS v19; // r9d
  void (__fastcall *v20)(PDRIVER_OBJECT); // rax
  __int64 v22; // [rsp+58h] [rbp-61h]
  __int64 v23; // [rsp+60h] [rbp-59h]
  __int64 v24; // [rsp+68h] [rbp-51h]
  __int64 v25; // [rsp+70h] [rbp-49h]
  __int64 v26; // [rsp+78h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-39h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+90h] [rbp-29h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+A0h] [rbp-19h] BYREF
  PVOID DriverObjectExtension; // [rsp+120h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+128h] [rbp+6Fh] BYREF

  DeviceObject = 0LL;
  DriverObjectExtension = 0LL;
  DestinationString = 0LL;
  v8 = 0;
  SymbolicLinkName = 0LL;
  memset(&Info, 0, 52);
  if ( !InitSecurityCookie )
  {
    _security_init_cookie();
    InitSecurityCookie = 1;
  }
  if ( !DriverObject || !a2 || !a3 )
  {
    v10 = -1073741811;
LABEL_61:
    if ( _InterlockedExchangeAdd(&InitializeCount, 0xFFFFFFFF) == 1 && IsWppInitialized )
    {
      WppCleanupKm();
      IsWppInitialized = 0;
    }
    if ( DriverObjectExtension )
      RaDeleteDriver(DriverObjectExtension);
    DriverObjectExtension = 0LL;
    if ( v8 )
    {
      v20 = *(void (__fastcall **)(PDRIVER_OBJECT))(a3 + 168);
      if ( v20 )
        v20(DriverObject);
    }
    return (unsigned int)v10;
  }
  v9 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 != 208 && v9 != 176 && v9 != 136
    || !*(_QWORD *)(a3 + 8)
    || !*(_QWORD *)(a3 + 32)
    || !*(_QWORD *)(a3 + 16)
    || !*(_QWORD *)(a3 + 40) )
  {
    v10 = -1073741735;
    goto LABEL_61;
  }
  if ( _InterlockedIncrement(&InitializeCount) == 1 )
  {
    if ( !IsWppInitialized )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
      WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_wppCtlGuid;
      WPP_MAIN_CB.NextDevice = 0LL;
      WPP_MAIN_CB.CurrentIrp = 0LL;
      WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
      WppLoadTracingSupport();
      WPP_MAIN_CB.CurrentIrp = 0LL;
      WppInitKm();
      IsWppInitialized = 1;
    }
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (const _UNICODE_STRING *)L"&(";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`SpPerfInitRegistrationInformationUnitWriteCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 0LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))RaUnitReadIoCounterSetCallback;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&SpPerfUnitReadCounterSet, &Info) < 0 )
      SpPerfUnitReadCounterSet = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (const _UNICODE_STRING *)L"(*";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`SpPerfInitRegistrationInformationUnitWriteCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 0LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))RaUnitWriteIoCounterSetCallback;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&SpPerfUnitWriteCounterSet, &Info) < 0 )
      SpPerfUnitWriteCounterSet = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (const _UNICODE_STRING *)L".0";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`SpPerfInitRegistrationInformationUnitWriteCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 0LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))RaUnitTransferIoCounterSetCallback;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&SpPerfUnitTransferCounterSet, &Info) < 0 )
      SpPerfUnitTransferCounterSet = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (const _UNICODE_STRING *)L"&(";
    *(_QWORD *)&Info.CounterCount = 2LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`SpPerfInitRegistrationInformationUnitQueueCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 0LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))RaUnitQueueCounterSetCallback;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&SpPerfUnitQueueCounterSet, &Info) < 0 )
      SpPerfUnitQueueCounterSet = 0LL;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqqq(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_38dace0cdf4a301a04055db3e22f58d3_Traceguids,
      DriverObject,
      a2,
      a3,
      a4);
  }
  if ( *(_DWORD *)a3 == 176 || *(_DWORD *)a3 == 208 && (*(_DWORD *)(a3 + 184) & 1) != 0 )
  {
    v11 = *(void (__fastcall **)(PDRIVER_OBJECT, __int64))(a3 + 160);
    if ( v11 )
    {
      v11(DriverObject, a2);
      v8 = 1;
    }
  }
  PortData = RaidGetPortData();
  if ( !PortData )
  {
    v10 = -1073741801;
    goto LABEL_61;
  }
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
  if ( !DriverObjectExtension )
  {
    v10 = IoAllocateDriverObjectExtension(DriverObject, DriverEntry, 0x70u, &DriverObjectExtension);
    if ( v10 < 0 )
      goto LABEL_61;
    RaCreateDriver(DriverObjectExtension);
    v10 = RaInitializeDriver(DriverObjectExtension, DriverObject, PortData, a2);
    if ( v10 < 0 )
      goto LABEL_61;
  }
  v15 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 208 )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0dqddddddiiiii_EtwWriteTransfer(
        208LL,
        v13,
        v14,
        208,
        *(_DWORD *)(a3 + 4),
        *(_DWORD *)(a3 + 64),
        *(_DWORD *)(a3 + 68),
        *(_DWORD *)(a3 + 72),
        *(_DWORD *)(a3 + 184),
        *(_DWORD *)(a3 + 188),
        *(_DWORD *)(a3 + 192),
        *(_QWORD *)(a3 + 136),
        *(_QWORD *)(a3 + 144),
        *(_QWORD *)(a3 + 152),
        *(_QWORD *)(a3 + 160),
        *(_QWORD *)(a3 + 168));
  }
  else
  {
    if ( v15 == 176 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) == 0 )
        goto LABEL_48;
      v26 = *(_QWORD *)(a3 + 168);
      v25 = *(_QWORD *)(a3 + 160);
      v24 = *(_QWORD *)(a3 + 152);
      v23 = *(_QWORD *)(a3 + 144);
      v22 = *(_QWORD *)(a3 + 136);
    }
    else
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) == 0 )
        goto LABEL_48;
      LOBYTE(v26) = 0;
      LOBYTE(v25) = 0;
      LOBYTE(v24) = 0;
      LOBYTE(v23) = 0;
      LOBYTE(v22) = 0;
    }
    McTemplateK0dqddddddiiiii_EtwWriteTransfer(
      208LL,
      v13,
      v14,
      v15,
      *(_DWORD *)(a3 + 4),
      *(_DWORD *)(a3 + 64),
      *(_DWORD *)(a3 + 68),
      *(_DWORD *)(a3 + 72),
      0,
      0,
      0,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
LABEL_48:
  inited = RaSaveDriverInitData(DriverObjectExtension, a3);
  v10 = inited;
  if ( inited >= 0 )
    v8 = 0;
  *(_WORD *)(a3 + 104) |= 0x10u;
  if ( !CreateControlObject || (*(_DWORD *)(a3 + 184) & 0x8000) == 0 || StorpControl )
  {
    if ( inited >= 0 )
      return (unsigned int)v10;
    goto LABEL_61;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device\\StorportControl");
  v19 = IoCreateDevice(DriverObject, 4u, &DestinationString, 0x15u, 0x100u, 0, &DeviceObject);
  if ( v19 < 0 )
  {
    if ( (byte_1C0092A07 & 2) != 0 )
      McTemplateK0d_EtwWriteTransfer(v17, &EventStorportControlCreationFailed, v18, v19);
  }
  else
  {
    StorpControl = DeviceObject;
    *(_DWORD *)DeviceObject->DeviceExtension = 1146246738;
    RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\StorportControl");
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
  }
  return 0;
}
