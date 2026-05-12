/*
 * XREFs of PmSetDiskAttributes @ 0x1C0009178
 * Callers:
 *     ?PmOfflineDiskWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C000EA40 (-PmOfflineDiskWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     PmValidateIds @ 0x1C001CA28 (PmValidateIds.c)
 *     PmUpdateAttributes @ 0x1C001CAC8 (PmUpdateAttributes.c)
 *     PmIoctlSetDiskAttributes @ 0x1C001EAD4 (PmIoctlSetDiskAttributes.c)
 *     PmSetInitialDiskAttributes @ 0x1C0021F84 (PmSetInitialDiskAttributes.c)
 * Callees:
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 *     PmUpdateOffline @ 0x1C0008C90 (PmUpdateOffline.c)
 *     PmSetDeviceParameter @ 0x1C001EDF8 (PmSetDeviceParameter.c)
 */

__int64 __fastcall PmSetDiskAttributes(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  NTSTATUS v4; // edi
  char v8; // bp
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // r15d
  GUID v15; // xmm0
  KIRQL v16; // r14
  int v17; // edx
  unsigned int v18; // r9d
  unsigned int v20; // r14d

  v3 = *(_DWORD *)(a1 + 512);
  v4 = 0;
  if ( (v3 & 1) != 0 )
  {
    v8 = 1;
    if ( (v3 & 0x2000) != 0 )
      return (unsigned int)-1073741790;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)(a1 + 544) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a1 + 552) - *(_QWORD *)GUID_NULL.Data4;
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 544) - *(_QWORD *)(a2 + 24);
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 552) - *(_QWORD *)(a2 + 32);
    if ( v10 )
      return (unsigned int)-1073741790;
  }
  v11 = *(_DWORD *)(a2 + 16);
  v12 = *(_DWORD *)(a2 + 8) & v11;
  v13 = ~v11;
  v14 = v12 | *(_DWORD *)(a1 + 528) & v13;
  if ( *(_BYTE *)(a2 + 4) )
  {
    v20 = v12 | v13 & *(_DWORD *)(a1 + 536);
    v4 = PmSetDeviceParameter(a1, a2, v20);
    if ( v4 < 0 )
      return (unsigned int)v4;
    *(_QWORD *)(a1 + 536) = v20;
  }
  *(_QWORD *)(a1 + 528) = v14;
  if ( *(_BYTE *)(a2 + 5) )
    v15 = GUID_NULL;
  else
    v15 = *(GUID *)(a2 + 24);
  *(GUID *)(a1 + 544) = v15;
  if ( (*(_BYTE *)(a2 + 16) & 4) != 0 )
  {
    if ( (v14 & 4) != 0 )
    {
      if ( !v8 || !*(_BYTE *)(a1 + 524) )
      {
        v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 480), 0);
        if ( v4 < 0 )
          return (unsigned int)v4;
        v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 496), 1u);
        if ( v4 < 0 )
          return (unsigned int)v4;
        *(_BYTE *)(a1 + 524) = 1;
      }
    }
    else if ( !v8 || *(_BYTE *)(a1 + 524) )
    {
      v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 496), 0);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 480), 1u);
      if ( v4 < 0 )
        return (unsigned int)v4;
      *(_BYTE *)(a1 + 524) = 0;
    }
  }
  if ( (*(_BYTE *)(a2 + 16) & 2) != 0 )
    _InterlockedExchange((volatile __int32 *)(a1 + 520), (*(_BYTE *)(a1 + 528) & 2) == 0);
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
  {
    v17 = *(_DWORD *)(a1 + 528) & 1;
    v18 = *(_DWORD *)(a1 + 512) | 8;
    if ( !v17 )
      v18 = *(_DWORD *)(a1 + 512) & 0xFFFFFFF7;
    *(_DWORD *)(a1 + 512) = v18;
    *(_DWORD *)(a1 + 516) = v17 != 0 ? a3 : 0;
    PmUpdateOffline(a1, v17);
    PmWakeupNotificationWorkItem(a1);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 112), v16);
  return (unsigned int)v4;
}
