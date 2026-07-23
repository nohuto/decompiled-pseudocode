/*
 * XREFs of ExpPoolTrackerChargeEntry @ 0x1403BA8DC
 * Callers:
 *     ExAllocateHeapPool @ 0x1402AD570 (ExAllocateHeapPool.c)
 *     ExpResizeBigPageTable @ 0x1403B9A3C (ExpResizeBigPageTable.c)
 *     ExAllocateContiguousHeapPool @ 0x1403BA2F4 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1403BA6DC (ExInsertPoolTag.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140608088 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapSpecialPool @ 0x14060F280 (ExAllocateHeapSpecialPool.c)
 *     ExInitializePoolTracker @ 0x140B54C88 (ExInitializePoolTracker.c)
 * Callees:
 *     ExpTrackTableGetMoreLimit @ 0x140609040 (ExpTrackTableGetMoreLimit.c)
 */

__int64 __fastcall ExpPoolTrackerChargeEntry(int a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v6; // ebx
  __int64 v7; // r12
  __int64 v8; // rax
  signed __int64 v9; // r14
  signed __int64 v11; // rdi
  unsigned __int64 MoreLimit; // rax

  v3 = a1;
  v6 = 1;
  v7 = 8LL;
  if ( a1 != 1 )
    v7 = 32LL;
  v8 = 16LL;
  if ( a1 != 1 )
    v8 = 40LL;
  _InterlockedAdd64((volatile signed __int64 *)(v8 + a3), 1uLL);
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + a3), a2);
  if ( *(_QWORD *)(a3 + 72) )
  {
    v11 = *(_QWORD *)(a3 + 8LL * a1 + 56);
    while ( (v11 & 1) == 0 && v11 < v9 )
    {
      MoreLimit = ExpTrackTableGetMoreLimit(*(_QWORD *)(a3 + 72), a2, (unsigned int)v3);
      if ( !MoreLimit )
        return 0;
      if ( MoreLimit == 1 )
      {
        if ( v11 == _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8 * v3 + 56), 1LL, v11) )
          return v6;
        v11 = *(_QWORD *)(a3 + 8 * v3 + 56);
      }
      else
      {
        v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 8 * v3 + 56), MoreLimit);
        v9 = *(_QWORD *)(v7 + a3);
      }
    }
  }
  return v6;
}
