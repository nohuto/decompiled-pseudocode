/*
 * XREFs of MiUpdateHugePageCounts @ 0x140622D48
 * Callers:
 *     MiAddPartitionHugeRange @ 0x14061F204 (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x1406200D4 (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x140620FCC (MiInsertHugeRangeInList.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406220B8 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiSetHugeRangePartitionId @ 0x140622808 (MiSetHugeRangePartitionId.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026EAD0 (MiSearchNumaNodeTable.c)
 */

unsigned __int64 __fastcall MiUpdateHugePageCounts(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 result; // rax

  v7 = MiSearchNumaNodeTable((unsigned __int64)(a2 & 0x3FFFFF) << 18);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 25408LL * *((unsigned int *)v7 + 2);
  v10 = a3;
  if ( !a4 )
    v10 = -(__int64)a3;
  result = a3 + *(_QWORD *)(v9 + v8 + 22856);
  if ( !a4 )
    result = *(_QWORD *)(v9 + v8 + 22856) - a3;
  *(_QWORD *)(v9 + v8 + 22856) = result;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 448), v10);
  return result;
}
