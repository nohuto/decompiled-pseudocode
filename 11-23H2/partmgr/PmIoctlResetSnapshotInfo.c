/*
 * XREFs of PmIoctlResetSnapshotInfo @ 0x1C0025E08
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     memset @ 0x1C000BA40 (memset.c)
 *     PmSetSnapshotInfo @ 0x1C0027BA4 (PmSetSnapshotInfo.c)
 */

__int64 __fastcall PmIoctlResetSnapshotInfo(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  struct _KMUTANT *v3; // rcx
  _BYTE v5[80]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  memset(v5, 0, sizeof(v5));
  KeWaitForSingleObject((PVOID)(v1 + 56), Executive, 0, 0, 0LL);
  v2 = PmSetSnapshotInfo((struct _DEVICE_EXTENSION *)v1);
  v3 = (struct _KMUTANT *)(v1 + 56);
  LODWORD(v1) = v2;
  KeReleaseMutex(v3, 0);
  return (unsigned int)v1;
}
