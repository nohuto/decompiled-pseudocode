/*
 * XREFs of PartitionOffset @ 0x1C0002784
 * Callers:
 *     PmGrowPartition @ 0x1C000F6AC (PmGrowPartition.c)
 *     ?PmPartitionRedirect@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_IRP@@PEAX_JK@Z @ 0x1C0010230 (-PmPartitionRedirect@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_IRP@@PEAX_JK@Z.c)
 *     PartitionIoctlBandmgmt @ 0x1C001C20C (PartitionIoctlBandmgmt.c)
 *     PartitionIoctlQueryProperty @ 0x1C001C65C (PartitionIoctlQueryProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PartitionOffset(__int64 a1, char a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = 0LL;
  v3 = a1 + 328 + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( *(_QWORD *)v3 != v3 )
    return *(_QWORD *)(*(_QWORD *)v3 + 24LL);
  return v2;
}
