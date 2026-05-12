/*
 * XREFs of PmIoctlSetSnapshotInfo @ 0x1C00262E0
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmSetSnapshotInfo @ 0x1C0027BA4 (PmSetSnapshotInfo.c)
 */

__int64 __fastcall PmIoctlSetSnapshotInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ecx
  unsigned int v4; // edi
  _DWORD *v5; // rdi

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( v3 < 0x4C )
    return (unsigned int)-1073741820;
  v5 = *(_DWORD **)(a2 + 24);
  if ( v5[18] >= 0xFFFFFFB4 )
    return (unsigned int)-1073741675;
  if ( v3 < v5[18] + 76 )
  {
    return (unsigned int)-1073741820;
  }
  else if ( *v5 == 80 && v5[1] <= 3u )
  {
    KeWaitForSingleObject((PVOID)(v2 + 56), Executive, 0, 0, 0LL);
    v4 = PmSetSnapshotInfo((struct _DEVICE_EXTENSION *)v2);
    KeReleaseMutex((PRKMUTEX)(v2 + 56), 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
