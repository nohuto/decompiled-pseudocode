/*
 * XREFs of RaidInitializeAdapter @ 0x1C008D1D8
 * Callers:
 *     RaDriverAddDevice @ 0x1C003D390 (RaDriverAddDevice.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     McTemplateK0jqzzqxtqqtt_EtwWriteTransfer @ 0x1C0031A90 (McTemplateK0jqzzqxtqqtt_EtwWriteTransfer.c)
 *     RaidAllocateDeviceProperty @ 0x1C0038EB8 (RaidAllocateDeviceProperty.c)
 *     RaGetBusInterface @ 0x1C004DC78 (RaGetBusInterface.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C004EE04 (RaidQueryAcpiDsdStorageD3Property.c)
 *     StorpInitializeAdapterTelemetry @ 0x1C005EB94 (StorpInitializeAdapterTelemetry.c)
 *     PortGetLinkTimeoutValue @ 0x1C0068CEC (PortGetLinkTimeoutValue.c)
 *     PortRegistryReadDeviceKey @ 0x1C0086BBC (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C0086D80 (PortRegistryWriteDeviceKey.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C008E980 (RiAllocateMiniportDeviceExtension.c)
 *     PortGetBusyPauseTimeValue @ 0x1C00929D0 (PortGetBusyPauseTimeValue.c)
 *     PortGetBusyRetryCountValue @ 0x1C0092AE8 (PortGetBusyRetryCountValue.c)
 *     PortGetDriverParameters @ 0x1C0092C00 (PortGetDriverParameters.c)
 *     PortGetIoLatencyCapValue @ 0x1C0092C90 (PortGetIoLatencyCapValue.c)
 *     PortGetIoTimeoutValue @ 0x1C0092DA8 (PortGetIoTimeoutValue.c)
 *     PortGetRegistrySettings @ 0x1C0092EC4 (PortGetRegistrySettings.c)
 *     PortReadStorageBusType @ 0x1C00930FC (PortReadStorageBusType.c)
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
  int v12; // r8d
  _QWORD **v13; // r9
  _QWORD *i; // rdx
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
  int v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+70h] [rbp-90h] BYREF
  UUID *p_Uuid; // [rsp+78h] [rbp-88h] BYREF
  char v50; // [rsp+80h] [rbp-80h] BYREF
  char v51; // [rsp+81h] [rbp-7Fh] BYREF
  char v52; // [rsp+82h] [rbp-7Eh] BYREF
  int v53; // [rsp+84h] [rbp-7Ch] BYREF
  int v54; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING v55; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v56; // [rsp+A0h] [rbp-60h] BYREF
  int v57; // [rsp+A4h] [rbp-5Ch] BYREF
  int v58; // [rsp+A8h] [rbp-58h] BYREF
  int v59; // [rsp+ACh] [rbp-54h] BYREF
  int v60; // [rsp+B0h] [rbp-50h] BYREF
  int v61; // [rsp+B4h] [rbp-4Ch] BYREF
  int v62; // [rsp+B8h] [rbp-48h] BYREF
  int v63; // [rsp+BCh] [rbp-44h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  int v65; // [rsp+D0h] [rbp-30h] BYREF
  int v66; // [rsp+D4h] [rbp-2Ch] BYREF
  __int128 v67; // [rsp+D8h] [rbp-28h] BYREF
  UUID Uuid; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69[21]; // [rsp+100h] [rbp+0h] BYREF

  v7 = a1 + 336;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  *(_QWORD *)(a1 + 24) = a4;
  v54 = -1;
  DestinationString = 0LL;
  v56 = 0;
  v67 = 0LL;
  v57 = 0;
  Uuid = 0LL;
  v58 = 0;
  v10 = *a6;
  *(_DWORD *)(a1 + 1864) = a7;
  *(_DWORD *)(a1 + 1948) = 1;
  *(_OWORD *)(a1 + 40) = v10;
  *(_BYTE *)(a1 + 4765) = 1;
  *(_DWORD *)(a1 + 5236) = 0;
  *(_QWORD *)(a1 + 336) = a1;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v55 = 0LL;
  v53 = 0;
  v63 = 0;
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
    {
      *((_DWORD *)v15 + 1) = v12;
      goto LABEL_12;
    }
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
    PortGetDriverParameters(*(_QWORD *)(a1 + 16) + 40LL, a7, a1 + 1872);
    v18 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 1944) = 30;
    PortGetLinkTimeoutValue(v18, a7);
    v19 = (_DWORD *)(a1 + 3996);
    v20 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 3996) = 0;
    PortGetIoTimeoutValue(v20, a1 + 3996);
    v21 = (_QWORD *)(a1 + 4776);
    v22 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_QWORD *)(a1 + 4776) = 0LL;
    PortGetIoLatencyCapValue(v22, a1 + 4776);
    if ( *(_QWORD *)(a1 + 4776) )
      *v21 = 10000LL * *(_QWORD *)(a1 + 4776);
    v23 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 5524) = 0;
    PortGetBusyRetryCountValue(v23);
    v24 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 5528) = 0;
    PortGetBusyPauseTimeValue(v24);
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v55, L"TotalSenseDataBytes");
    v48 = 4;
    p_Uuid = (UUID *)&v56;
    v25 = PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v48);
    v26 = v56;
    if ( v25 < 0 )
      v26 = 256;
    v56 = v26;
    if ( v26 > 0x12 )
    {
      v27 = v26;
      if ( v26 >= 0xFF )
        v27 = -1;
      *(_BYTE *)(a1 + 4764) = v27;
    }
    else
    {
      *(_BYTE *)(a1 + 4764) = 18;
    }
    RtlInitUnicodeString(&v55, L"EnableIdlePowerManagement");
    *(_BYTE *)(a1 + 104) &= ~0x20u;
    p_Uuid = (UUID *)&v57;
    v48 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v48) >= 0 )
    {
      v28 = *(_BYTE *)(a1 + 104);
      if ( v57 )
        v29 = v28 | 0x20;
      else
        v29 = v28 & 0xDF;
      *(_BYTE *)(a1 + 104) = v29;
    }
    RtlInitUnicodeString(&v55, L"DisableRuntimePowerManagement");
    *(_BYTE *)(a1 + 107) &= ~0x20u;
    p_Uuid = (UUID *)&v58;
    v48 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v48) >= 0 )
    {
      v30 = *(_BYTE *)(a1 + 107);
      if ( v58 )
        v31 = v30 | 0x20;
      else
        v31 = v30 & 0xDF;
      *(_BYTE *)(a1 + 107) = v31;
    }
    RtlInitUnicodeString(&v55, L"DisableD3Cold");
    *(_BYTE *)(a1 + 107) = *(_BYTE *)(a1 + 107) & 0xE7 | 8;
    v48 = 4;
    p_Uuid = (UUID *)&v59;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v48) >= 0 )
    {
      v32 = *(_BYTE *)(a1 + 107);
      if ( v59 )
        v33 = v32 & 0xF7;
      else
        v33 = v32 | 8;
      *(_BYTE *)(a1 + 107) = v33;
    }
    RtlInitUnicodeString(&v55, L"IdleTimeoutInMS");
    *(_DWORD *)(a1 + 4848) = 60000;
    v48 = 4;
    p_Uuid = (UUID *)&v60;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v48) >= 0 )
    {
      v34 = v60;
      *(_BYTE *)(a1 + 107) |= 0x80u;
      *(_DWORD *)(a1 + 4848) = v34;
    }
    RtlInitUnicodeString(&v55, L"UseDMAv3");
    *(_BYTE *)(a1 + 108) &= ~4u;
    p_Uuid = (UUID *)&v61;
    v48 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v48) >= 0 )
      *(_BYTE *)(a1 + 108) = (v61 != 0 ? 4 : 0) | *(_BYTE *)(a1 + 108) & 0xFB;
    RtlInitUnicodeString(&v55, L"PowerSrbTimeout");
    *(_DWORD *)(a1 + 5472) = *v19;
    p_Uuid = (UUID *)&v62;
    v48 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v48) >= 0
      && v62 )
    {
      *(_DWORD *)(a1 + 5472) = v62;
    }
    if ( *(_DWORD *)(a1 + 5472) > 0x6Eu )
      *(_DWORD *)(a1 + 5472) = 110;
    RtlInitUnicodeString(&v55, L"DisableNVMeActiveNamespaceIDListCheck");
    *(_BYTE *)(a1 + 111) &= ~8u;
    p_Uuid = (UUID *)&v63;
    v48 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 4, (__int64)&p_Uuid, &v48) >= 0 )
    {
      v35 = *(_BYTE *)(a1 + 111);
      if ( v63 )
        v36 = v35 | 8;
      else
        v36 = v35 & 0xF7;
      *(_BYTE *)(a1 + 111) = v36;
    }
    v37 = *(_BYTE *)(a1 + 108) & 0xFE;
    *(_QWORD *)(a1 + 4840) = 0LL;
    *(_BYTE *)(a1 + 108) = v37 | 0x20;
    memset(v69, 0, 0x148uLL);
    v38 = *(_QWORD *)(a1 + 16);
    LODWORD(v69[0].Ptr) = 255;
    v69[1].Ptr = 0LL;
    *(_QWORD *)&v69[1].Size = 0xFFFFFFFFLL;
    v69[2].Reserved = 0;
    LODWORD(v69[2].Ptr) = -1;
    PortGetRegistrySettings(v38 + 40, a7, v69);
    *(_QWORD *)(a1 + 4160) = *(_QWORD *)&v69[1].Size;
    *(_QWORD *)(a1 + 4168) = v69[1].Ptr;
    *(_DWORD *)(a1 + 4144) = v69[2].Ptr;
    *(_DWORD *)(a1 + 4152) = v69[2].Reserved;
    *(_QWORD *)(a1 + 4192) = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 4176) = 0LL;
    *(_QWORD *)(a1 + 4184) = 0LL;
    *(_DWORD *)(a1 + 4148) = 6;
    if ( (unsigned __int8)PortReadStorageBusType(*(_QWORD *)(a1 + 16) + 40LL, &v53) )
      *(_DWORD *)(a1 + 4148) = v53;
    RaidDriverGetName(a3, (__int64)&v67);
    *(_QWORD *)(a1 + 4592) = *((_QWORD *)&v67 + 1);
    RaidAllocateDeviceProperty(DeviceObject, v39, (_QWORD *)(a1 + 4600));
    *(_DWORD *)(a1 + 4800) = -1;
    v40 = RaidLogListSize;
    *(_DWORD *)(a1 + 4804) = RaidLogListSize;
    *(_QWORD *)(a1 + 4808) = (a1 + 5952) & -(__int64)(v40 != 0);
    if ( StorageD3AllowedOnCurrentPlatform )
      StorageD3InModernStandbyEnabled = 1;
    v41 = RaidQueryAcpiDsdStorageD3Property(a1, &v54);
    v42 = v54;
    if ( v41 )
      StorageD3InModernStandbyEnabled = v54 != 0;
    if ( StorageD3RegistryState == 1 )
    {
      StorageD3InModernStandbyEnabled = 1;
    }
    else if ( !StorageD3RegistryState )
    {
      StorageD3InModernStandbyEnabled = 0;
    }
    RtlInitUnicodeString(&v55, L"AdapterGuid");
    v48 = 16;
    p_Uuid = &Uuid;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v55, 3, (__int64)&p_Uuid, &v48) < 0
      && ExUuidCreate(&Uuid) >= 0 )
    {
      PortRegistryWriteDeviceKey(DeviceObject, (__int64)&DestinationString, (__int64)&v55, 3u, (__int64)p_Uuid, 16);
    }
    *(UUID *)(a1 + 4936) = Uuid;
    StorpInitializeAdapterTelemetry(a1);
    if ( (unsigned int)dword_1C0079058 > 5 && tlgKeywordOn(v43, 0x400000000000LL) )
    {
      v54 = *(_DWORD *)(a1 + 1944);
      v69[3].Ptr = (unsigned __int64)&v54;
      v53 = *v19;
      v69[4].Ptr = (unsigned __int64)&v53;
      *(_QWORD *)&v67 = *v21;
      v69[5].Ptr = (unsigned __int64)&v67;
      v48 = *(unsigned __int8 *)(a1 + 4764);
      v69[6].Ptr = (unsigned __int64)&v48;
      v65 = *(_DWORD *)(a1 + 4848);
      v69[7].Ptr = (unsigned __int64)&v65;
      v50 = StorageD3AllowedOnCurrentPlatform;
      v69[8].Ptr = (unsigned __int64)&v50;
      v69[9].Ptr = (unsigned __int64)&v66;
      LODWORD(p_Uuid) = StorageD3RegistryState;
      v69[10].Ptr = (unsigned __int64)&p_Uuid;
      v51 = StorageD3InModernStandbyEnabled;
      v69[11].Ptr = (unsigned __int64)&v51;
      v52 = DFxEnabled;
      v69[12].Ptr = (unsigned __int64)&v52;
      v69[2].Ptr = a1 + 4936;
      *(_QWORD *)&v69[2].Size = 16LL;
      *(_QWORD *)&v69[3].Size = 4LL;
      *(_QWORD *)&v69[4].Size = 4LL;
      *(_QWORD *)&v69[5].Size = 8LL;
      *(_QWORD *)&v69[6].Size = 4LL;
      *(_QWORD *)&v69[7].Size = 4LL;
      *(_QWORD *)&v69[8].Size = 1LL;
      v66 = v42;
      *(_QWORD *)&v69[9].Size = 4LL;
      *(_QWORD *)&v69[10].Size = 4LL;
      *(_QWORD *)&v69[11].Size = 1LL;
      *(_QWORD *)&v69[12].Size = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(v45, (unsigned __int8 *)dword_1C006C711, v44, v46, 0xDu, v69);
    }
    if ( (byte_1C00799E6 & 4) != 0 )
      McTemplateK0jqzzqxtqqtt_EtwWriteTransfer(
        (unsigned __int8)StorageD3InModernStandbyEnabled,
        (unsigned __int8)StorageD3AllowedOnCurrentPlatform,
        v44,
        a1 + 4936,
        *(_DWORD *)(a1 + 56),
        *(const wchar_t **)(a1 + 4600),
        *(const wchar_t **)(a1 + 4592),
        *(_DWORD *)(a1 + 352),
        *(_QWORD *)(a1 + 104),
        StorageD3AllowedOnCurrentPlatform,
        v42,
        v47,
        StorageD3InModernStandbyEnabled,
        DFxEnabled);
    KeInitializeDpc(
      (PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL),
      (PKDEFERRED_ROUTINE)RaidpAdapterDpcRoutine,
      *(PVOID *)(a1 + 8));
    *(_DWORD *)(a1 + 128) &= ~1u;
    result = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}
