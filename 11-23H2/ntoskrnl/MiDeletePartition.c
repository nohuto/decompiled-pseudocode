/*
 * XREFs of MiDeletePartition @ 0x1406293AC
 * Callers:
 *     MmCreatePartition @ 0x1403AC6AC (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x1409B66B0 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x140659488 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x140659A24 (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x140A2F9F8 (MiFreePartitionId.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartition(unsigned __int16 *P)
{
  unsigned __int16 v1; // bx

  v1 = *P;
  MiDrainCrossPartitionUsage();
  MiDeletePartitionResources((_DWORD)P);
  MiFreePartitionId(v1);
  ExFreePoolWithTag(P, 0);
}
