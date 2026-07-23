/*
 * XREFs of ArbInitializeOrderingList @ 0x1408143C4
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x140813D48 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ArbInitializeOrderingList(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(256LL, 256LL, 1281520193LL);
  *(_QWORD *)(a1 + 8) = Pool2;
  *(_WORD *)a1 = 0;
  if ( Pool2 )
  {
    *(_WORD *)(a1 + 2) = 16;
    return 0LL;
  }
  else
  {
    *(_WORD *)(a1 + 2) = 0;
    return 3221225626LL;
  }
}
