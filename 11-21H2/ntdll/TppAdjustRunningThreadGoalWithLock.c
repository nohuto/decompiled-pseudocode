/*
 * XREFs of TppAdjustRunningThreadGoalWithLock @ 0x180123E80
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     TppWorkerFindTask @ 0x180018A28 (TppWorkerFindTask.c)
 *     TpPostTask @ 0x18001B374 (TpPostTask.c)
 *     TpStartAsyncIoOperation @ 0x18001B860 (TpStartAsyncIoOperation.c)
 *     TppGetCurrentThreadNumaNode @ 0x18001C39C (TppGetCurrentThreadNumaNode.c)
 *     TpSetPoolThreadCpuSets @ 0x180123DD0 (TpSetPoolThreadCpuSets.c)
 * Callees:
 *     TppPoolUpdateNodeRelation @ 0x180074CE4 (TppPoolUpdateNodeRelation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A75A0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TppAdjustRunningThreadGoalWithLock(unsigned int *a1)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int16 v4; // r9
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  signed __int64 v7; // [rsp+38h] [rbp+10h]

  if ( !a1 || (v2 = a1[110]) == 0 )
    v2 = MEMORY[0x7FFE03C0];
  result = a1[106];
  if ( v2 != (_DWORD)result )
  {
    a1[106] = v2;
    v4 = v2 - result;
    _m_prefetchw(a1 + 2);
    v5 = *((_QWORD *)a1 + 1);
    v7 = v5;
    do
    {
      LODWORD(v7) = (unsigned __int16)(v7 ^ (v7 + v4)) ^ (unsigned int)v7;
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 1, v7, v5);
      v7 = v5;
    }
    while ( v6 != v5 );
    NtSetInformationWorkerFactory();
    return TppPoolUpdateNodeRelation((__int64)a1);
  }
  return result;
}
