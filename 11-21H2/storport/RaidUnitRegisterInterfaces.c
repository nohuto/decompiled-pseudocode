/*
 * XREFs of RaidUnitRegisterInterfaces @ 0x1C001EEC0
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C0087C34 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     PortMapBuildLunEntry @ 0x1C001F058 (PortMapBuildLunEntry.c)
 *     PortRegistryCreateKeyEx @ 0x1C001F380 (PortRegistryCreateKeyEx.c)
 *     PortGetDeviceType @ 0x1C00879D8 (PortGetDeviceType.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C008FCF4 (RaidUnitAddAclToVmDevices.c)
 */

__int64 __fastcall RaidUnitRegisterInterfaces(__int64 a1)
{
  int v1; // eax
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rcx
  ULONG v10; // r8d
  __int64 v11; // r10
  int v12; // r11d
  __int64 v13; // rax
  _BYTE *v14; // rax
  struct _DEVICE_OBJECT *v15; // rcx
  struct _UNICODE_STRING *v16; // rsi
  GUID *v17; // rdx
  void *v18; // [rsp+40h] [rbp-28h]
  unsigned __int8 v19; // [rsp+72h] [rbp+Ah]
  HANDLE Handle; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 1824);
  Handle = 0LL;
  if ( (v1 & 0x20) != 0 )
  {
    v16 = (struct _UNICODE_STRING *)(a1 + 3400);
    v15 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    v17 = &GUID_DEVINTERFACE_ZNSDISK;
LABEL_19:
    v6 = IoRegisterDeviceInterface(v15, v17, 0LL, v16);
    if ( v6 >= 0 )
    {
      v6 = IoSetDeviceInterfaceState(v16, 1u);
      if ( v6 < 0 )
        RtlFreeUnicodeString(v16);
    }
    return (unsigned int)v6;
  }
  v3 = *(_DWORD *)(a1 + 96);
  v19 = BYTE2(v3);
  result = PortRegistryCreateKeyEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (unsigned __int8)v3 + 1952),
             1LL,
             &Handle,
             L"Target Id %d",
             BYTE1(v3));
  v6 = result;
  if ( (int)result < 0 )
    return result;
  v7 = *(_QWORD *)(a1 + 136);
  if ( v7 )
  {
    v8 = (*(unsigned __int8 *)(v7 + 3) | (*(unsigned __int8 *)(v7 + 2) << 8)) + 4;
    if ( (unsigned int)v8 > 0xFFFF )
      v8 = 0xFFFFLL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *(_QWORD *)(PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F, v5, v8) + 16);
  v13 = -1LL;
  do
    ++v13;
  while ( *(_WORD *)(v9 + 2 * v13) );
  PortMapBuildLunEntry((int)Handle, v19, v12, a1 + 112, v11, v10, v9, v13, v18);
  ZwClose(Handle);
  if ( (*(_DWORD *)(a1 + 1824) & 1) != 0 )
  {
    v6 = RaidUnitAddAclToVmDevices(a1);
    if ( v6 >= 0 )
      v6 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &GUID_DEVINTERFACE_VMLUN,
             0LL,
             (PUNICODE_STRING)(a1 + 1832));
  }
  v14 = *(_BYTE **)(a1 + 104);
  if ( v14 && (*v14 & 0x1F) == 0xD )
  {
    v15 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    v16 = (struct _UNICODE_STRING *)(a1 + 1952);
    v17 = &GUID_DEVINTERFACE_SES;
    goto LABEL_19;
  }
  return (unsigned int)v6;
}
