/*
 * XREFs of sub_18000DD90 @ 0x18000DD90
 * Callers:
 *     sub_18000CF64 @ 0x18000CF64 (sub_18000CF64.c)
 *     sub_18000D00C @ 0x18000D00C (sub_18000D00C.c)
 *     sub_18000D0D8 @ 0x18000D0D8 (sub_18000D0D8.c)
 *     sub_18000D110 @ 0x18000D110 (sub_18000D110.c)
 *     sub_18000D18C @ 0x18000D18C (sub_18000D18C.c)
 *     sub_18000F0A8 @ 0x18000F0A8 (sub_18000F0A8.c)
 *     sub_18000F1DC @ 0x18000F1DC (sub_18000F1DC.c)
 *     sub_18000FCC0 @ 0x18000FCC0 (sub_18000FCC0.c)
 *     sub_18000FFC4 @ 0x18000FFC4 (sub_18000FFC4.c)
 *     sub_1800106C4 @ 0x1800106C4 (sub_1800106C4.c)
 *     sub_180010DC4 @ 0x180010DC4 (sub_180010DC4.c)
 *     sub_180011994 @ 0x180011994 (sub_180011994.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_18000DD90(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, a1);
}
