/*
 * XREFs of MiDeletePartition @ 0x14062941C
 * Callers:
 *     MmCreatePartition @ 0x1403ABECC (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x1409B6760 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x1406594F8 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x140659A94 (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x140A2FA68 (MiFreePartitionId.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
