/*
 * XREFs of PartitionLength @ 0x1C0002B2C
 * Callers:
 *     ?PmTakePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@E@Z @ 0x1C0004A44 (-PmTakePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@E@Z.c)
 *     ?PmGivePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C0009B70 (-PmGivePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     ?PmPartitionChanged@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C00100C0 (-PmPartitionChanged@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     PartitionIoctlBandmgmt @ 0x1C001C20C (PartitionIoctlBandmgmt.c)
 *     PartitionIoctlGetLengthInfo @ 0x1C001C594 (PartitionIoctlGetLengthInfo.c)
 *     PartitionIoctlGetPartitionInfoEx @ 0x1C001C788 (PartitionIoctlGetPartitionInfoEx.c)
 *     PartitionIoctlDsm @ 0x1C001D0A8 (PartitionIoctlDsm.c)
 *     PartitionIoctlGetPartitionInfo @ 0x1C0025070 (PartitionIoctlGetPartitionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PartitionLength(__int64 a1, char a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax

  v2 = 0LL;
  v3 = (_QWORD *)(a1 + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF0uLL) + 328);
  if ( (_QWORD *)*v3 != v3 )
    return *(_QWORD *)(v3[1] + 16LL) + *(_QWORD *)(v3[1] + 32LL);
  return v2;
}
