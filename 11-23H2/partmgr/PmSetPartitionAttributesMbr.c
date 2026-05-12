/*
 * XREFs of PmSetPartitionAttributesMbr @ 0x1C000E374
 * Callers:
 *     PmSetSnapshotData @ 0x1C000FD58 (PmSetSnapshotData.c)
 *     PartitionIoctlSetPartitionAttributes @ 0x1C00253E0 (PartitionIoctlSetPartitionAttributes.c)
 * Callees:
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     PmSetDeviceParameterBinary @ 0x1C00220DC (PmSetDeviceParameterBinary.c)
 *     ?PmWritePartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_ATTRIBUTES_TABLE@@K@Z @ 0x1C0024E3C (-PmWritePartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_ATTRIBUTES_TABLE@@K@Z.c)
 */

__int64 __fastcall PmSetPartitionAttributesMbr(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // edi
  KIRQL v6; // al
  __int64 v7; // rcx
  KIRQL v8; // r14
  _QWORD *i; // rdx
  GUID v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]

  v11 = PARTITION_BASIC_DATA_GUID;
  v12 = a2;
  v5 = PmWritePartitionAttributesMbr((struct _DEVICE_EXTENSION *)a1, (struct _PARTITION_ATTRIBUTES_TABLE *)&v11, a3);
  if ( v5 >= 0 )
  {
    PmSetDeviceParameterBinary(a1, L"AttributesTableCache", &v11, 24LL);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
    v7 = *(_QWORD *)(a1 + 1128);
    v8 = v6;
    if ( v7 )
      *(_QWORD *)(v7 + 16) = a2;
    for ( i = *(_QWORD **)(a1 + 896); i != (_QWORD *)(a1 + 896); i = (_QWORD *)*i )
      *((_DWORD *)i - 26) |= 0x10u;
    PmWakeupNotificationWorkItem(a1);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 112), v8);
  }
  return (unsigned int)v5;
}
