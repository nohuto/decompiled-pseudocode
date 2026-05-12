/*
 * XREFs of PmSetDeviceParameterBinary @ 0x1C00220DC
 * Callers:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmGetSnapshotData @ 0x1C0003EE0 (PmGetSnapshotData.c)
 *     PmGetPartitionAttributesMbr @ 0x1C0004CCC (PmGetPartitionAttributesMbr.c)
 *     PmSetPartitionAttributesMbr @ 0x1C000E374 (PmSetPartitionAttributesMbr.c)
 * Callees:
 *     ?PmOpenDeviceParameter@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAX@Z @ 0x1C0022170 (-PmOpenDeviceParameter@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAX@Z.c)
 */

__int64 __fastcall PmSetDeviceParameterBinary(struct _DEVICE_EXTENSION *a1, const WCHAR *a2, void *a3, ULONG a4)
{
  NTSTATUS v7; // edi
  PCWSTR Path; // [rsp+30h] [rbp-18h] BYREF

  Path = 0LL;
  v7 = PmOpenDeviceParameter(a1, (void **)&Path);
  if ( v7 >= 0 )
    v7 = RtlWriteRegistryValue(0x40000000u, Path, a2, 3u, a3, a4);
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v7;
}
