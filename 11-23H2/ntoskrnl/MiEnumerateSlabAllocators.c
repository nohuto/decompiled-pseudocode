/*
 * XREFs of MiEnumerateSlabAllocators @ 0x14021EF7C
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x14021ED0C (MiFreeUnusedSlabPages.c)
 *     MiLogPeriodicTelemetry @ 0x14021F654 (MiLogPeriodicTelemetry.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDemoteSlabEntriesDpc @ 0x1403CD2A0 (MiDemoteSlabEntriesDpc.c)
 *     MiGetSlabAllocatorStandbyList @ 0x1406571A8 (MiGetSlabAllocatorStandbyList.c)
 *     MiDeletePartitionResources @ 0x1406599D8 (MiDeletePartitionResources.c)
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 *     MmUpdateSlabRangeType @ 0x140B9A53C (MmUpdateSlabRangeType.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiEnumerateSlabAllocators(
        __int64 a1,
        unsigned int (__fastcall *a2)(__int64, unsigned __int64, __int64),
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  unsigned int v8; // ebx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbp

  v4 = (unsigned __int16)KeNumberNodes;
  if ( a4 != -1 )
    v4 = a4 + 1;
  v8 = 0;
  if ( a4 != -1 )
    v8 = a4;
LABEL_7:
  if ( v8 >= v4 )
    return 0LL;
  v10 = 25408LL * v8 + *(_QWORD *)(a1 + 16) + 23392LL;
  v11 = v10 + 1848;
  while ( 1 )
  {
    if ( v10 >= v11 )
    {
      ++v8;
      goto LABEL_7;
    }
    if ( a2(a1, v10, a3) )
      return 1LL;
    v10 += 264LL;
  }
}
