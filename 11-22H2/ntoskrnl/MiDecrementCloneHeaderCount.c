/*
 * XREFs of MiDecrementCloneHeaderCount @ 0x140663E7C
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x140659A94 (MiDrainCrossPartitionUsage.c)
 *     MiDeleteCloneDescriptor @ 0x140663EB0 (MiDeleteCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x140A49064 (MiFreeCloneDescriptor.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 */

int __fastcall MiDecrementCloneHeaderCount(__int64 a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1432), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v1 == 1 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 2424), 0, 0);
  return v1;
}
