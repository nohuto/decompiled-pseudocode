/*
 * XREFs of KiSetPriorityBoost @ 0x140307B08
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A2D0 (KiDeferredReadySingleThread.c)
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402BD250 (KiPrepareReadyThreadForRescheduling.c)
 *     KiNormalPriorityReadyScan @ 0x140306DF0 (KiNormalPriorityReadyScan.c)
 *     KeSetPriorityBoost @ 0x140307990 (KeSetPriorityBoost.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402B05D0 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x140307B90 (KiUpdateThreadPriority.c)
 */

unsigned __int64 __fastcall KiSetPriorityBoost(
        unsigned __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 result; // rax

  *(_BYTE *)(a2 + 564) += 16 * (a3 - *(_BYTE *)(a2 + 195));
  if ( a1 )
    KiSetPriorityThread(a2, a1, a3);
  else
    KiUpdateThreadPriority(0, a2, a2, a3, 0);
  v7 = *(_QWORD *)(a2 + 32);
  if ( a4 > v7 || (result = v7 - a4, result < a5) )
  {
    result = a5 + a4;
    *(_QWORD *)(a2 + 32) = result;
  }
  return result;
}
