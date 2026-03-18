/*
 * XREFs of DpiInitializeGlobalState @ 0x1C03C7648
 * Callers:
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DpiKsrRestore @ 0x1C03941B0 (DpiKsrRestore.c)
 */

__int64 DpiInitializeGlobalState()
{
  char v0; // si
  char v1; // di
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v11; // r8
  LARGE_INTEGER *p_NumberOfBytes; // rax
  int v13; // r9d
  LONGLONG QuadPart; // rcx
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  __int64 v16; // rdx
  struct _KMUTANT *PoolWithTag; // rax
  struct _KMUTANT *v18; // rax
  NTSTATUS v19; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+40h] [rbp-1A8h] BYREF
  int v24; // [rsp+44h] [rbp-1A4h] BYREF
  int v25; // [rsp+48h] [rbp-1A0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-198h] BYREF
  int Data; // [rsp+58h] [rbp-190h] BYREF
  int v28; // [rsp+5Ch] [rbp-18Ch] BYREF
  int v29; // [rsp+60h] [rbp-188h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-180h] BYREF
  int v31; // [rsp+78h] [rbp-170h] BYREF
  int v32; // [rsp+7Ch] [rbp-16Ch] BYREF
  int v33; // [rsp+80h] [rbp-168h] BYREF
  _QWORD v34[2]; // [rsp+88h] [rbp-160h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-150h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-120h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-108h] BYREF
  int v38; // [rsp+E8h] [rbp-100h]
  const wchar_t *v39; // [rsp+F0h] [rbp-F8h]
  int *v40; // [rsp+F8h] [rbp-F0h]
  int v41; // [rsp+100h] [rbp-E8h]
  int *v42; // [rsp+108h] [rbp-E0h]
  int v43; // [rsp+110h] [rbp-D8h]
  __int64 v44; // [rsp+118h] [rbp-D0h]
  int v45; // [rsp+120h] [rbp-C8h]
  __int128 v46; // [rsp+128h] [rbp-C0h]
  __int128 v47; // [rsp+138h] [rbp-B0h]
  __int64 v48; // [rsp+148h] [rbp-A0h]
  __int64 v49; // [rsp+150h] [rbp-98h]
  int v50; // [rsp+158h] [rbp-90h]
  const wchar_t *v51; // [rsp+160h] [rbp-88h]
  unsigned int *v52; // [rsp+168h] [rbp-80h]
  int v53; // [rsp+170h] [rbp-78h]
  unsigned int *v54; // [rsp+178h] [rbp-70h]
  int v55; // [rsp+180h] [rbp-68h]
  __int64 v56; // [rsp+188h] [rbp-60h]
  int v57; // [rsp+190h] [rbp-58h]
  __int128 v58; // [rsp+198h] [rbp-50h]
  __int128 v59; // [rsp+1A8h] [rbp-40h]
  __int64 v60; // [rsp+1B8h] [rbp-30h]

  v34[0] = 3932218LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v34[1] = L"Kernel-OneCore-DeviceFamilyID";
  KeyHandle = 0LL;
  Data = 0;
  v28 = 0;
  v32 = 0;
  v31 = 0;
  UnicodeString = 0LL;
  v0 = 0;
  v1 = 0;
  DestinationString = 0LL;
  v2 = ZwQueryLicenseValue(v34, &v32, &dword_1C0130A00, 4LL, &v31);
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(2LL, v2);
    dword_1C0130A00 = 3;
  }
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_1C0130490 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_1C0130491 = 1;
  if ( (unsigned __int8)ExIsSoftBoot() )
    DpiKsrRestore();
  dword_1C01308C4 = 7236;
  v41 = 67108868;
  LODWORD(v47) = 67108868;
  v53 = 67108868;
  v39 = L"MiracastDefaultRtspPort";
  v24 = 0;
  v40 = &dword_1C01308C4;
  v42 = &dword_1C01308C4;
  v23 = 500000;
  *(_QWORD *)&v46 = L"PlatformSupportMiracast";
  v37 = 0LL;
  *((_QWORD *)&v46 + 1) = &v24;
  *((_QWORD *)&v47 + 1) = &v24;
  v51 = L"SuspendAdapterTimerPeriod";
  v52 = &v23;
  v54 = &v23;
  v60 = 0LL;
  v38 = 288;
  v43 = 4;
  v44 = 0LL;
  v45 = 288;
  LODWORD(v48) = 4;
  v49 = 0LL;
  v50 = 288;
  v55 = 4;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v3 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v37, 0LL, 0LL);
  if ( (v3 < 0 || !dword_1C01308C4) && (dword_1C01308C4 = 7236, v3 < 0) || (byte_1C0130496 = 1, !v24) )
    byte_1C0130496 = 0;
  v4 = -v23;
  v23 = 0;
  DueTime.QuadPart = v4;
  v37 = 0LL;
  v39 = L"SupportMultipleIntegratedDisplays";
  v38 = 288;
  v40 = (int *)&v23;
  v41 = 67108868;
  v42 = (int *)&v23;
  v48 = 0LL;
  v43 = 4;
  v44 = 0LL;
  v45 = 0;
  v46 = 0LL;
  v47 = 0LL;
  byte_1C0130498 = (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v37, 0LL, 0LL) >= 0 && v23 != 0;
  v23 = 0;
  v41 = 67108868;
  LODWORD(v47) = 67108868;
  v39 = L"HwSchMode";
  v53 = 67108868;
  v40 = (int *)&v23;
  v25 = 1;
  v42 = (int *)&v23;
  v24 = 0;
  *(_QWORD *)&v46 = L"HwSchOverrideBlockList";
  v37 = 0LL;
  *((_QWORD *)&v46 + 1) = &v25;
  *((_QWORD *)&v47 + 1) = &v25;
  v51 = L"HwSchTreatExperimentalAsStable";
  v52 = (unsigned int *)&v24;
  v54 = (unsigned int *)&v24;
  v60 = 0LL;
  v38 = 288;
  v43 = 4;
  v44 = 0LL;
  v45 = 288;
  LODWORD(v48) = 4;
  v49 = 0LL;
  v50 = 288;
  v55 = 4;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v5 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v37, 0LL, 0LL);
  if ( v5 >= 0 && v23 < 3 )
  {
    dword_1C01304B8 = v23;
    goto LABEL_17;
  }
  dword_1C01304B8 = 0;
  if ( v5 >= 0 )
  {
LABEL_17:
    byte_1C01304BC = 0;
    byte_1C01304BD = v24 != 0;
    if ( !v25 )
      goto LABEL_19;
  }
  byte_1C01304BC = 1;
LABEL_19:
  v24 = 0;
  v25 = -1;
  v23 = -1;
  v37 = 0LL;
  v41 = 67108868;
  LODWORD(v47) = 67108868;
  v39 = L"EnableBasicDisplayFallback";
  v53 = 67108868;
  v40 = &v25;
  v38 = 288;
  v42 = &v25;
  *(_QWORD *)&v46 = L"DisableBasicDisplayFallback";
  *((_QWORD *)&v46 + 1) = &v23;
  *((_QWORD *)&v47 + 1) = &v23;
  v51 = L"ForcePreserveBootDisplay";
  v52 = (unsigned int *)&v24;
  v54 = (unsigned int *)&v24;
  v60 = 0LL;
  v43 = 4;
  v44 = 0LL;
  v45 = 288;
  LODWORD(v48) = 4;
  v49 = 0LL;
  v50 = 288;
  v55 = 4;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v37, 0LL, 0LL) >= 0 )
  {
    if ( v23 == 1 && v25 != 1 )
      byte_1C0130492 = 1;
    byte_1C0130493 = v24 == 1;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v6 < 0 )
  {
    if ( v6 != -1073741771 )
      WdLogSingleEntry1(2LL, v6);
  }
  else
  {
    ZwClose(KeyHandle);
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v8 = v7;
  if ( v7 < 0 )
    goto LABEL_52;
  Data = 61443;
  RtlInitUnicodeString(&DestinationString, L"DxgKrnlVersion");
  v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  v8 = v9;
  if ( v9 < 0 )
  {
    ZwClose(KeyHandle);
    goto LABEL_52;
  }
  v28 = 20499;
  RtlInitUnicodeString(&DestinationString, L"MinDxgKrnlVersion");
  v8 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v28, 4u);
  ZwClose(KeyHandle);
  if ( (int)v8 < 0 )
  {
LABEL_52:
    v21 = v8;
    v22 = 2LL;
LABEL_56:
    WdLogSingleEntry1(v22, v21);
    goto LABEL_59;
  }
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v11 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
  {
    LODWORD(v8) = -1073741670;
    v21 = -1073741670LL;
LABEL_55:
    v22 = 6LL;
    goto LABEL_56;
  }
  p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
  v13 = 0;
  QuadPart = p_NumberOfBytes->QuadPart;
  if ( p_NumberOfBytes->QuadPart )
  {
    p_BaseAddress = &v11->BaseAddress;
    do
    {
      DpGlobals += QuadPart;
      v16 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
      if ( v16 > *(&DpGlobals + 1) )
        *(&DpGlobals + 1) = v16;
      p_BaseAddress = &v11[++v13].BaseAddress;
      p_NumberOfBytes = p_BaseAddress + 1;
      QuadPart = p_BaseAddress[1].QuadPart;
    }
    while ( QuadPart );
  }
  ExFreePoolWithTag(v11, 0);
  PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
  Mutex = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_54;
  KeInitializeMutex(PoolWithTag, 0);
  word_1C01304E0 = 0;
  qword_1C01304D0 = (__int64)&qword_1C01304C8;
  qword_1C01304C8 = (__int64)&qword_1C01304C8;
  KeInitializeEvent(&stru_1C01304E8, NotificationEvent, 0);
  byte_1C01304E2 = 0;
  ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x90uLL, 0x74727044u, 0);
  v0 = 1;
  v18 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
  P = v18;
  if ( !v18
    || (KeInitializeMutex(v18, 0),
        dword_1C0130720 = 0,
        qword_1C0130730 = (__int64)&qword_1C0130728,
        qword_1C0130728 = (__int64)&qword_1C0130728,
        KeInitializeTimerEx(&stru_1C0130698, SynchronizationTimer),
        KeInitializeDpc(&stru_1C01306D8, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL),
        (qword_1C0130718 = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject)) == 0LL) )
  {
LABEL_54:
    v21 = -1073741801LL;
    LODWORD(v8) = -1073741801;
    goto LABEL_55;
  }
  ExInitializeNPagedLookasideList(&stru_1C0130580, 0LL, 0LL, 0x200u, 0x30uLL, 0x74727044u, 0);
  byte_1C0130840 = 0;
  KeInitializeMutex(&stru_1C0130848, 0);
  v29 = 2;
  qword_1C0130888 = (__int64)&qword_1C0130880;
  qword_1C0130880 = (__int64)&qword_1C0130880;
  v33 = 4;
  if ( ((int (__fastcall *)(__int64, __int64, int *, int *))HalDispatchTable->HalQuerySystemInformation)(
         9LL,
         4LL,
         &v29,
         &v33) < 0
    || (byte_1C0130495 = 1, v29 == 2) )
  {
    byte_1C0130495 = 0;
  }
  dword_1C01307F4 = -1;
  byte_1C0130494 = 0;
  KeInitializeSpinLock(&SpinLock);
  qword_1C01308A8 = (__int64)&qword_1C01308A0;
  qword_1C01308A0 = (__int64)&qword_1C01308A0;
  dword_1C01308C0 = 0;
  qword_1C01308B8 = (__int64)&qword_1C01308B0;
  qword_1C01308B0 = (__int64)&qword_1C01308B0;
  v19 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
          g_pDriverObject,
          (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
          0LL,
          &qword_1C0130890);
  LODWORD(v8) = v19;
  if ( v19 >= 0 )
  {
    IoWorkItem = 0LL;
    qword_1C0130668 = (__int64)&qword_1C0130660;
    qword_1C0130660 = (__int64)&qword_1C0130660;
    dword_1C0130670 = 0;
    qword_1C0130658 = 0LL;
    dword_1C0130620 = 1;
    qword_1C0130628 = 0LL;
    dword_1C0130630 = 0;
    KeInitializeEvent(&stru_1C0130638, SynchronizationEvent, 0);
    KeInitializeEvent(&Event, NotificationEvent, 1u);
    byte_1C01309B0 = 0;
    KeInitializeMutex(&stru_1C01309B8, 0);
    byte_1C013049B = 0;
    qword_1C01309F8 = (__int64)&qword_1C01309F0;
    qword_1C01309F0 = &qword_1C01309F0;
    qword_1C0130988 = 1LL;
    dword_1C013083C = 0;
    goto LABEL_40;
  }
  WdLogSingleEntry1(2LL, v19);
  qword_1C0130890 = 0LL;
  v1 = 1;
LABEL_59:
  if ( qword_1C0130718 )
    IoFreeWorkItem(qword_1C0130718);
  if ( v1 == 1 )
    ExDeleteNPagedLookasideList(&stru_1C0130580);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  if ( v0 == 1 )
    ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
LABEL_40:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
