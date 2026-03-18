/*
 * XREFs of KiSetPriorityBoost @ 0x14021050C
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x1402447EC (KiNormalPriorityReadyScan.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14028F83C (KiPrepareReadyThreadForRescheduling.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 * Callees:
 *     KiUpdateThreadPriority @ 0x140291010 (KiUpdateThreadPriority.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 */

unsigned __int64 __fastcall KiSetPriorityBoost(__int64 a1, __int64 a2, char a3, unsigned __int64 a4, unsigned int a5)
{
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 result; // rax

  *(_BYTE *)(a2 + 564) += 16 * (a3 - *(_BYTE *)(a2 + 195));
  v7 = (unsigned int)a3;
  if ( a1 )
    KiSetPriorityThread(a2, a1, v7);
  else
    KiUpdateThreadPriority(0LL, a2, v7, 0LL);
  v8 = *(_QWORD *)(a2 + 32);
  if ( a4 > v8 || (result = v8 - a4, result < a5) )
  {
    result = a5 + a4;
    *(_QWORD *)(a2 + 32) = result;
  }
  return result;
}
