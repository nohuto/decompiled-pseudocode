/*
 * XREFs of IoOpenDeviceRegistryKey @ 0x1406C54A0
 * Callers:
 *     sub_14060FEF0 @ 0x14060FEF0 (sub_14060FEF0.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406C55CC @ 0x1406C55CC (sub_1406C55CC.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 */

NTSTATUS __stdcall IoOpenDeviceRegistryKey(
        PDEVICE_OBJECT DeviceObject,
        ULONG DevInstKeyType,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceRegKey)
{
  char v6; // bl
  _DWORD *DeviceNode; // rdx
  int v9; // ebp
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  NTSTATUS v12; // ebx

  v6 = DevInstKeyType;
  if ( !DeviceObject )
    return -1073741811;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  if ( (v6 & 1) != 0 )
  {
    v9 = 17;
    goto LABEL_7;
  }
  if ( (v6 & 2) == 0 )
    return -1073741811;
  v9 = 18;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
  v11 = v9 | 0x200;
  if ( (v6 & 4) == 0 )
    v11 = v9;
  v12 = sub_14077F2EC(
          qword_140D00AC0,
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 6),
          v11,
          0,
          DesiredAccess,
          1,
          (__int64)DeviceRegKey,
          0LL);
  if ( v12 >= 0 )
  {
    if ( DeviceRegKey )
      sub_1406C55CC(*DeviceRegKey);
  }
  ExReleaseResourceLite(&stru_140C462A0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v12;
}
