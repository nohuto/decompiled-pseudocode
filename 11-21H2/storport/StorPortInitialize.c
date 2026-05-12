/*
 * XREFs of StorPortInitialize @ 0x1C003F980
 * Callers:
 *     StorPortInitializeVrfy @ 0x1C008FF30 (StorPortInitializeVrfy.c)
 * Callees:
 *     RaidGetPortData @ 0x1C00035F0 (RaidGetPortData.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C003EC54 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0dqddddddiiiii_EtwWriteTransfer @ 0x1C003ED2C (McTemplateK0dqddddddiiiii_EtwWriteTransfer.c)
 *     WPP_SF_qqqq @ 0x1C00405A8 (WPP_SF_qqqq.c)
 *     RaCreateDriver @ 0x1C008DE38 (RaCreateDriver.c)
 *     RaDeleteDriver @ 0x1C008DE8C (RaDeleteDriver.c)
 *     RaInitializeDriver @ 0x1C008DF80 (RaInitializeDriver.c)
 *     RaSaveDriverInitData @ 0x1C008E090 (RaSaveDriverInitData.c)
 *     WppCleanupKm @ 0x1C008E120 (WppCleanupKm.c)
 *     WppInitKm @ 0x1C008E40C (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C008E4A0 (WppLoadTracingSupport.c)
 *     __security_init_cookie @ 0x1C0097044 (__security_init_cookie.c)
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
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+90h] [rbp+17h] BYREF
  PVOID DriverObjectExtension; // [rsp+E0h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+E8h] [rbp+6Fh] BYREF

  DeviceObject = 0LL;
  DriverObjectExtension = 0LL;
  DestinationString = 0LL;
  v8 = 0;
  SymbolicLinkName = 0LL;
  if ( !InitSecurityCookie )
  {
    _security_init_cookie();
    InitSecurityCookie = 1;
  }
  if ( !DriverObject || !a2 || !a3 )
  {
    v10 = -1073741811;
LABEL_52:
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
    goto LABEL_52;
  }
  if ( _InterlockedIncrement(&InitializeCount) == 1 && !IsWppInitialized )
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
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqqq(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_3c5b945b7266306a3038c5928b48f2e4_Traceguids,
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
    goto LABEL_52;
  }
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
  if ( !DriverObjectExtension )
  {
    v10 = IoAllocateDriverObjectExtension(DriverObject, DriverEntry, 0x70u, &DriverObjectExtension);
    if ( v10 < 0 )
      goto LABEL_52;
    RaCreateDriver(DriverObjectExtension);
    v10 = RaInitializeDriver(DriverObjectExtension, DriverObject, PortData, a2);
    if ( v10 < 0 )
      goto LABEL_52;
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
  else if ( v15 == 176 )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0dqddddddiiiii_EtwWriteTransfer(
        208LL,
        v13,
        v14,
        176,
        *(_DWORD *)(a3 + 4),
        *(_DWORD *)(a3 + 64),
        *(_DWORD *)(a3 + 68),
        *(_DWORD *)(a3 + 72),
        0,
        0,
        0,
        *(_QWORD *)(a3 + 136),
        *(_QWORD *)(a3 + 144),
        *(_QWORD *)(a3 + 152),
        *(_QWORD *)(a3 + 160),
        *(_QWORD *)(a3 + 168));
  }
  else if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
  {
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
      0,
      0,
      0,
      0,
      0);
  }
  inited = RaSaveDriverInitData(DriverObjectExtension, a3);
  v10 = inited;
  if ( inited >= 0 )
    v8 = 0;
  *(_WORD *)(a3 + 104) |= 0x10u;
  if ( !CreateControlObject || (*(_DWORD *)(a3 + 184) & 0x8000) == 0 || StorpControl )
  {
    if ( inited >= 0 )
      return (unsigned int)v10;
    goto LABEL_52;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device\\StorportControl");
  v19 = IoCreateDevice(DriverObject, 4u, &DestinationString, 0x15u, 0x100u, 0, &DeviceObject);
  if ( v19 < 0 )
  {
    if ( (byte_1C00799E7 & 1) != 0 )
      McTemplateK0d_EtwWriteTransfer(v17, &EventStorportControlCreationFailed, v18, v19);
  }
  else
  {
    StorpControl = DeviceObject;
    *(_DWORD *)DeviceObject->DeviceExtension = 2;
    RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\StorportControl");
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
  }
  return 0;
}
