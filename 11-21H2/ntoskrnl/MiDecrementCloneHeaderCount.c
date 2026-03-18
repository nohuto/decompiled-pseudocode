/*
 * XREFs of MiDecrementCloneHeaderCount @ 0x1405BA5F0
 * Callers:
 *     MiDeleteCloneDescriptor @ 0x1405BA624 (MiDeleteCloneDescriptor.c)
 *     MiDrainCrossPartitionUsage @ 0x1405BE340 (MiDrainCrossPartitionUsage.c)
 *     MiFreeCloneDescriptor @ 0x140980D40 (MiFreeCloneDescriptor.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

int __fastcall MiDecrementCloneHeaderCount(__int64 a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1368), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v1 == 1 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 2360), 0, 0);
  return v1;
}
