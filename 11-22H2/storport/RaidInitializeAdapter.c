/*
 * XREFs of RaidInitializeAdapter @ 0x1C00A7724
 * Callers:
 *     RaDriverAddDevice @ 0x1C003F5C0 (RaDriverAddDevice.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     _tlgKeywordOn @ 0x1C0019F3C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001C770 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     McTemplateK0jqzzqxtqqtt_EtwWriteTransfer @ 0x1C00320C8 (McTemplateK0jqzzqxtqqtt_EtwWriteTransfer.c)
 *     RaidAllocateDeviceProperty @ 0x1C003A48C (RaidAllocateDeviceProperty.c)
 *     RaGetBusInterface @ 0x1C00570E8 (RaGetBusInterface.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C005A498 (RaidQueryAcpiDsdStorageD3Property.c)
 *     StorpInitializeAdapterTelemetry @ 0x1C006C0F4 (StorpInitializeAdapterTelemetry.c)
 *     PortGetLinkTimeoutValue @ 0x1C007851C (PortGetLinkTimeoutValue.c)
 *     PortRegistryWriteDeviceKey @ 0x1C00A02CC (PortRegistryWriteDeviceKey.c)
 *     PortRegistryReadDeviceKey @ 0x1C00A0728 (PortRegistryReadDeviceKey.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C00A9080 (RiAllocateMiniportDeviceExtension.c)
 *     PortGetBusyPauseTimeValue @ 0x1C00AF2FC (PortGetBusyPauseTimeValue.c)
 *     PortGetBusyRetryCountValue @ 0x1C00AF414 (PortGetBusyRetryCountValue.c)
 *     PortGetDriverParameters @ 0x1C00AF52C (PortGetDriverParameters.c)
 *     PortGetIoLatencyCapValue @ 0x1C00AF5BC (PortGetIoLatencyCapValue.c)
 *     PortGetIoTimeoutValue @ 0x1C00AF6D4 (PortGetIoTimeoutValue.c)
 *     PortGetRegistrySettings @ 0x1C00AF7F0 (PortGetRegistrySettings.c)
 *     PortReadStorageBusType @ 0x1C00AFA28 (PortReadStorageBusType.c)
 */

__int64 __fastcall RaidInitializeAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PDEVICE_OBJECT DeviceObject,
        __int128 *a6,
        unsigned int a7)
{
  __int64 v7; // rsi
  __int128 v10; // xmm0
  int BusInterface; // eax
  int v12; // edx
  _QWORD **v13; // r10
  _QWORD *i; // r8
  _QWORD *v15; // rcx
  __int64 result; // rax
  int v17; // eax
  __int64 v18; // rcx
  _DWORD *v19; // r12
  __int64 v20; // rcx
  _QWORD *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // al
  char v33; // al
  int v34; // eax
  char v35; // al
  char v36; // al
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // eax
  char v41; // al
  int v42; // esi
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r9
  bool v47; // al
  int v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+70h] [rbp-90h] BYREF
  UUID *p_Uuid; // [rsp+78h] [rbp-88h] BYREF
  char v51; // [rsp+80h] [rbp-80h] BYREF
  bool v52; // [rsp+81h] [rbp-7Fh] BYREF
  char v53; // [rsp+82h] [rbp-7Eh] BYREF
  int v54; // [rsp+84h] [rbp-7Ch] BYREF
  struct _UNICODE_STRING v55; // [rsp+88h] [rbp-78h] BYREF
  int v56; // [rsp+98h] [rbp-68h] BYREF
  int v57; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v58; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  int v60; // [rsp+B8h] [rbp-48h] BYREF
  int v61; // [rsp+BCh] [rbp-44h] BYREF
  int v62; // [rsp+C0h] [rbp-40h] BYREF
  int v63; // [rsp+C4h] [rbp-3Ch] BYREF
  int v64; // [rsp+C8h] [rbp-38h] BYREF
  int v65; // [rsp+CCh] [rbp-34h] BYREF
  int v66; // [rsp+D0h] [rbp-30h] BYREF
  int v67; // [rsp+D4h] [rbp-2Ch] BYREF
  int v68; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v69; // [rsp+E0h] [rbp-20h] BYREF
  UUID Uuid; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+100h] [rbp+0h] BYREF
  __int64 v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  __int64 v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]
  int *v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  int *v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  __int128 *v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  int *v82; // [rsp+160h] [rbp+60h]
  __int64 v83; // [rsp+168h] [rbp+68h]
  int *v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  char *v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+188h] [rbp+88h]
  int *v88; // [rsp+190h] [rbp+90h]
  __int64 v89; // [rsp+198h] [rbp+98h]
  UUID **p_p_Uuid; // [rsp+1A0h] [rbp+A0h]
  __int64 v91; // [rsp+1A8h] [rbp+A8h]
  bool *v92; // [rsp+1B0h] [rbp+B0h]
  __int64 v93; // [rsp+1B8h] [rbp+B8h]
  char *v94; // [rsp+1C0h] [rbp+C0h]
  __int64 v95; // [rsp+1C8h] [rbp+C8h]

  v7 = a1 + 336;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  *(_QWORD *)(a1 + 24) = a4;
  v57 = -1;
  DestinationString = 0LL;
  v58 = 0;
  v69 = 0LL;
  v60 = 0;
  v10 = *a6;
  *(_DWORD *)(a1 + 1928) = a7;
  *(_DWORD *)(a1 + 2012) = 1;
  *(_OWORD *)(a1 + 40) = v10;
  *(_BYTE *)(a1 + 4829) = 1;
  *(_DWORD *)(a1 + 5300) = 0;
  *(_QWORD *)(a1 + 336) = a1;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v54 = 0;
  v55 = 0LL;
  v56 = 0;
  v66 = 0;
  BusInterface = RaGetBusInterface(DeviceObject);
  v12 = BusInterface;
  if ( BusInterface == -1 )
  {
    v12 = 0;
LABEL_4:
    *(_BYTE *)(a1 + 104) |= 8u;
    goto LABEL_5;
  }
  if ( !BusInterface )
    goto LABEL_4;
LABEL_5:
  v13 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 96LL);
  for ( i = *v13; i != v13; i = (_QWORD *)*i )
  {
    v15 = i - 26;
    if ( (*(_DWORD *)(i - 3) & 0x800) != 0 )
      *((_DWORD *)v15 + 1) = v12;
    if ( *((_DWORD *)v15 + 1) == v12 )
      goto LABEL_12;
  }
  v15 = 0LL;
LABEL_12:
  *(_QWORD *)(a1 + 568) = v15;
  if ( !v15 )
    return 3221225486LL;
  v17 = *((_DWORD *)v15 + 1);
  *(_BYTE *)(a1 + 109) |= 4u;
  *(_DWORD *)(a1 + 352) = v17;
  result = RiAllocateMiniportDeviceExtension(v7);
  if ( (int)result >= 0 )
  {
    PortGetDriverParameters(*(_QWORD *)(a1 + 16) + 40LL, a7, a1 + 1936);
    v18 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 2008) = 30;
    PortGetLinkTimeoutValue(v18, a7);
    v19 = (_DWORD *)(a1 + 4060);
    v20 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 4060) = 0;
    PortGetIoTimeoutValue(v20, a1 + 4060);
    v21 = (_QWORD *)(a1 + 4840);
    v22 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_QWORD *)(a1 + 4840) = 0LL;
    PortGetIoLatencyCapValue(v22, a1 + 4840);
    if ( *(_QWORD *)(a1 + 4840) )
      *v21 = 10000LL * *(_QWORD *)(a1 + 4840);
    v23 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 5588) = 0;
    PortGetBusyRetryCountValue(v23);
    v24 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 5592) = 0;
    PortGetBusyPauseTimeValue(v24);
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v55, L"TotalSenseDataBytes");
    v49 = 4;
    p_Uuid = (UUID *)&v58;
    v25 = PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v49);
    v26 = v58;
    if ( v25 < 0 )
      v26 = 256;
    v58 = v26;
    if ( v26 > 0x12 )
    {
      v27 = v26;
      if ( v26 >= 0xFF )
        v27 = -1;
      *(_BYTE *)(a1 + 4828) = v27;
    }
    else
    {
      *(_BYTE *)(a1 + 4828) = 18;
    }
    RtlInitUnicodeString(&v55, L"EnableIdlePowerManagement");
    *(_BYTE *)(a1 + 104) &= ~0x20u;
    p_Uuid = (UUID *)&v60;
    v49 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v49) >= 0 )
    {
      v28 = *(_BYTE *)(a1 + 104);
      if ( v60 )
        v29 = v28 | 0x20;
      else
        v29 = v28 & 0xDF;
      *(_BYTE *)(a1 + 104) = v29;
    }
    RtlInitUnicodeString(&v55, L"DisableRuntimePowerManagement");
    *(_BYTE *)(a1 + 107) &= ~0x20u;
    p_Uuid = (UUID *)&v61;
    v49 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v49) >= 0 )
    {
      v30 = *(_BYTE *)(a1 + 107);
      if ( v61 )
        v31 = v30 | 0x20;
      else
        v31 = v30 & 0xDF;
      *(_BYTE *)(a1 + 107) = v31;
    }
    RtlInitUnicodeString(&v55, L"DisableD3Cold");
    *(_BYTE *)(a1 + 107) = *(_BYTE *)(a1 + 107) & 0xE7 | 8;
    v49 = 4;
    p_Uuid = (UUID *)&v62;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v49) >= 0 )
    {
      v32 = *(_BYTE *)(a1 + 107);
      if ( v62 )
        v33 = v32 & 0xF7;
      else
        v33 = v32 | 8;
      *(_BYTE *)(a1 + 107) = v33;
    }
    RtlInitUnicodeString(&v55, L"IdleTimeoutInMS");
    *(_DWORD *)(a1 + 4912) = 60000;
    v49 = 4;
    p_Uuid = (UUID *)&v63;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v49) >= 0 )
    {
      v34 = v63;
      *(_BYTE *)(a1 + 107) |= 0x80u;
      *(_DWORD *)(a1 + 4912) = v34;
    }
    RtlInitUnicodeString(&v55, L"UseDMAv3");
    *(_BYTE *)(a1 + 108) &= ~4u;
    p_Uuid = (UUID *)&v64;
    v49 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v49) >= 0 )
      *(_BYTE *)(a1 + 108) = (v64 != 0 ? 4 : 0) | *(_BYTE *)(a1 + 108) & 0xFB;
    RtlInitUnicodeString(&v55, L"PowerSrbTimeout");
    *(_DWORD *)(a1 + 5536) = *v19;
    p_Uuid = (UUID *)&v65;
    v49 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v49) >= 0
      && v65 )
    {
      *(_DWORD *)(a1 + 5536) = v65;
    }
    if ( *(_DWORD *)(a1 + 5536) > 0x6Eu )
      *(_DWORD *)(a1 + 5536) = 110;
    RtlInitUnicodeString(&v55, L"DisableNVMeActiveNamespaceIDListCheck");
    *(_BYTE *)(a1 + 111) &= ~0x40u;
    p_Uuid = (UUID *)&v66;
    v49 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v49) >= 0 )
    {
      v35 = *(_BYTE *)(a1 + 111);
      if ( v66 )
        v36 = v35 | 0x40;
      else
        v36 = v35 & 0xBF;
      *(_BYTE *)(a1 + 111) = v36;
    }
    RtlInitUnicodeString(&v55, L"BusSpecificResetTimeout");
    *(_DWORD *)(a1 + 5980) = 5;
    v49 = 4;
    p_Uuid = (UUID *)&v54;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v49) >= 0
      && v54 )
    {
      *(_DWORD *)(a1 + 5980) = v54;
    }
    RtlInitUnicodeString(&v55, L"PLDRTimeout");
    *(_DWORD *)(a1 + 5984) = 10;
    v49 = 4;
    p_Uuid = (UUID *)&v54;
    v54 = 0;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v49) >= 0
      && v54 )
    {
      *(_DWORD *)(a1 + 5984) = v54;
    }
    v37 = *(_BYTE *)(a1 + 108) & 0xFE;
    *(_QWORD *)(a1 + 4904) = 0LL;
    *(_BYTE *)(a1 + 108) = v37 | 0x20;
    memset_0(&v71, 0, 0x148uLL);
    v38 = *(_QWORD *)(a1 + 16);
    LODWORD(v71.Ptr) = 255;
    v72 = 0LL;
    v73 = 0xFFFFFFFFLL;
    HIDWORD(v75) = 0;
    LODWORD(v74) = -1;
    PortGetRegistrySettings(v38 + 40, a7, &v71);
    *(_QWORD *)(a1 + 4224) = v73;
    *(_QWORD *)(a1 + 4232) = v72;
    *(_DWORD *)(a1 + 4208) = v74;
    *(_DWORD *)(a1 + 4216) = HIDWORD(v75);
    *(_QWORD *)(a1 + 4256) = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 4240) = 0LL;
    *(_QWORD *)(a1 + 4248) = 0LL;
    *(_DWORD *)(a1 + 4212) = 6;
    if ( (unsigned __int8)PortReadStorageBusType(*(_QWORD *)(a1 + 16) + 40LL, &v56) )
      *(_DWORD *)(a1 + 4212) = v56;
    RaidDriverGetName(a3, (__int64)&v69);
    *(_QWORD *)(a1 + 4656) = *((_QWORD *)&v69 + 1);
    RaidAllocateDeviceProperty(DeviceObject, v39, (_QWORD *)(a1 + 4664));
    *(_DWORD *)(a1 + 4864) = -1;
    v40 = RaidLogListSize;
    *(_DWORD *)(a1 + 4868) = RaidLogListSize;
    *(_QWORD *)(a1 + 4872) = (a1 + 6080) & -(__int64)(v40 != 0);
    if ( StorageD3AllowedOnCurrentPlatform )
      StorageD3InModernStandbyEnabled = 1;
    v41 = RaidQueryAcpiDsdStorageD3Property(a1, &v57);
    v42 = v57;
    if ( v41 )
      StorageD3InModernStandbyEnabled = v57 != 0;
    if ( StorageD3RegistryState == 1 )
    {
      StorageD3InModernStandbyEnabled = 1;
    }
    else
    {
      if ( !StorageD3RegistryState )
        StorageD3InModernStandbyEnabled = 0;
      if ( !StorageD3InModernStandbyEnabled )
        goto LABEL_71;
    }
    *(_BYTE *)(a1 + 120) |= 2u;
LABEL_71:
    Uuid = 0LL;
    RtlInitUnicodeString(&v55, L"AdapterGuid");
    v49 = 16;
    p_Uuid = &Uuid;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 3, (__int64)&p_Uuid, &v49) < 0
      && ExUuidCreate(&Uuid) >= 0 )
    {
      PortRegistryWriteDeviceKey(DeviceObject, (__int64)&DestinationString, (__int64)&v55, 3u, (__int64)p_Uuid, 16);
    }
    *(UUID *)(a1 + 5000) = Uuid;
    StorpInitializeAdapterTelemetry(a1);
    if ( (unsigned int)dword_1C00920C8 > 5 && tlgKeywordOn(v43, 0x400000000000LL) )
    {
      v57 = *(_DWORD *)(a1 + 2008);
      v76 = &v57;
      v56 = *v19;
      v78 = &v56;
      *(_QWORD *)&v69 = *v21;
      v80 = &v69;
      v49 = *(unsigned __int8 *)(a1 + 4828);
      v82 = &v49;
      v67 = *(_DWORD *)(a1 + 4912);
      v84 = &v67;
      v51 = StorageD3AllowedOnCurrentPlatform;
      v86 = &v51;
      v88 = &v68;
      LODWORD(p_Uuid) = StorageD3RegistryState;
      p_p_Uuid = &p_Uuid;
      v47 = (*(_BYTE *)(a1 + 120) & 2) != 0;
      v74 = a1 + 5000;
      v52 = v47;
      v92 = &v52;
      v53 = DFxEnabled;
      v94 = &v53;
      v75 = 16LL;
      v77 = 4LL;
      v79 = 4LL;
      v81 = 8LL;
      v83 = 4LL;
      v85 = 4LL;
      v87 = 1LL;
      v68 = v42;
      v89 = 4LL;
      v91 = 4LL;
      v93 = 1LL;
      v95 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(v45, (unsigned __int8 *)dword_1C0083A44, v44, v46, 0xDu, &v71);
    }
    if ( (byte_1C0092A06 & 8) != 0 )
      McTemplateK0jqzzqxtqqtt_EtwWriteTransfer(
        (unsigned __int8)DFxEnabled,
        (*(unsigned __int8 *)(a1 + 120) >> 1) & 1,
        v44,
        a1 + 5000,
        *(_DWORD *)(a1 + 56),
        *(const wchar_t **)(a1 + 4664),
        *(const wchar_t **)(a1 + 4656),
        *(_DWORD *)(a1 + 352),
        *(_QWORD *)(a1 + 104),
        StorageD3AllowedOnCurrentPlatform,
        v42,
        v48,
        (*(_BYTE *)(a1 + 120) & 2) != 0,
        DFxEnabled);
    KeInitializeDpc(
      (PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL),
      (PKDEFERRED_ROUTINE)RaidpAdapterDpcRoutine,
      *(PVOID *)(a1 + 8));
    *(_DWORD *)(a1 + 136) &= ~2u;
    *(_QWORD *)(a1 + 128) = 0LL;
    KeInitializeEvent((PRKEVENT)(a1 + 6040), SynchronizationEvent, 0);
    return 0LL;
  }
  return result;
}
