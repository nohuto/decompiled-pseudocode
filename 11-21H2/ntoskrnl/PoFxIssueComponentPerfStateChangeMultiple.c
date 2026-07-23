/*
 * XREFs of PoFxIssueComponentPerfStateChangeMultiple @ 0x1405CA760
 * Callers:
 *     PoFxIssueComponentPerfStateChange @ 0x1405CA730 (PoFxIssueComponentPerfStateChange.c)
 * Callees:
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405CCAC0 @ 0x1405CCAC0 (sub_1405CCAC0.c)
 */

__int64 __fastcall PoFxIssueComponentPerfStateChangeMultiple(
        ULONG_PTR BugCheckParameter2,
        char a2,
        unsigned int a3,
        __int64 a4,
        void *Src,
        __int64 a6)
{
  if ( (a2 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    sub_1405CAE6C(0x614uLL, BugCheckParameter2, a3, 1uLL);
  if ( (a2 & 3) == 3 )
    sub_1405CAE6C(0x614uLL, BugCheckParameter2, a3, 1uLL);
  if ( a3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    sub_1405CAE6C(0x614uLL, BugCheckParameter2, a3, 2uLL);
  return sub_1405CCAC0(BugCheckParameter2, Src, a6);
}
