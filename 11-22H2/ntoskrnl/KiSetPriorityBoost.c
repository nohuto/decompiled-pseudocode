/*
 * XREFs of KiSetPriorityBoost @ 0x1403079D8
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KiQuantumEnd @ 0x1402486D0 (KiQuantumEnd.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402BD220 (KiPrepareReadyThreadForRescheduling.c)
 *     KiNormalPriorityReadyScan @ 0x140306CC0 (KiNormalPriorityReadyScan.c)
 *     KeSetPriorityBoost @ 0x140307860 (KeSetPriorityBoost.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402B05A0 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x140307A60 (KiUpdateThreadPriority.c)
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
