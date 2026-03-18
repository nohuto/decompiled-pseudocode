/*
 * XREFs of RtlAddRange @ 0x140816E70
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x140815AD4 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140816844 (ArbAddMmConfigRangeAsBootReserved.c)
 *     IopMemInitialize @ 0x140816A54 (IopMemInitialize.c)
 *     IopPortAddAllocation @ 0x140816C90 (IopPortAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x140816D30 (RtlInvertRangeListEx.c)
 *     ArbAddAllocation @ 0x140816E20 (ArbAddAllocation.c)
 *     ArbInitializeRangeList @ 0x1409361E0 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlpCreateRangeListEntry @ 0x140816F14 (RtlpCreateRangeListEntry.c)
 *     RtlpAddRange @ 0x140816F84 (RtlpAddRange.c)
 *     RtlpFreeRangeListEntry @ 0x140817C48 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlAddRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // r10d
  __int64 RangeListEntry; // rax
  void *v10; // rdi
  int v11; // esi

  v7 = a3;
  if ( a3 < a2 )
    return 3221225485LL;
  LOBYTE(a3) = a4;
  RangeListEntry = RtlpCreateRangeListEntry(a2, v7, a3, a6, a7);
  v10 = (void *)RangeListEntry;
  if ( !RangeListEntry )
    return 3221225473LL;
  if ( (a5 & 2) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 1u;
  if ( (a5 & 0x10) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 0x10u;
  v11 = RtlpAddRange(a1, RangeListEntry, a5);
  if ( v11 < 0 )
  {
    RtlpFreeRangeListEntry(v10);
  }
  else
  {
    ++*(_DWORD *)(a1 + 20);
    ++*(_DWORD *)(a1 + 24);
  }
  return (unsigned int)v11;
}
