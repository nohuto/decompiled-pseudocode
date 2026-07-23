/*
 * XREFs of MiSetPageFileAllocationBits @ 0x14063BB08
 * Callers:
 *     MiFindFreePageFileSpace @ 0x140294964 (MiFindFreePageFileSpace.c)
 *     MiFindPageFileWriteCluster @ 0x140639E40 (MiFindPageFileWriteCluster.c)
 *     MiGatherPagefilePages @ 0x14063A694 (MiGatherPagefilePages.c)
 * Callees:
 *     RtlSetBits @ 0x1402E07C0 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
