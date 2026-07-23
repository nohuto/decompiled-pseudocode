/*
 * XREFs of TppAdjustRunningThreadGoalWithLock @ 0x1801258C0
 * Callers:
 *     TppGetCurrentThreadNumaNode @ 0x180033DE4 (TppGetCurrentThreadNumaNode.c)
 *     TpStartAsyncIoOperation @ 0x180034CE0 (TpStartAsyncIoOperation.c)
 *     TpPostTask @ 0x18003545C (TpPostTask.c)
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 *     TppWorkerFindTask @ 0x1800378B0 (TppWorkerFindTask.c)
 *     TpSetPoolThreadCpuSets @ 0x180125810 (TpSetPoolThreadCpuSets.c)
 * Callees:
 *     TppPoolUpdateNodeRelation @ 0x18004FE24 (TppPoolUpdateNodeRelation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A23A0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TppAdjustRunningThreadGoalWithLock(__int64 a1)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int16 v4; // r9
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  bool v7; // cf
  int v8; // r8d
  void *v9; // rcx
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v11; // [rsp+38h] [rbp+10h]

  if ( !a1 || (v2 = *(_DWORD *)(a1 + 440)) == 0 )
    v2 = MEMORY[0x7FFE03C0];
  result = *(unsigned int *)(a1 + 424);
  if ( v2 != (_DWORD)result )
  {
    *(_DWORD *)(a1 + 424) = v2;
    v4 = v2 - result;
    _m_prefetchw((const void *)(a1 + 8));
    v5 = *(_QWORD *)(a1 + 8);
    v11 = v5;
    do
    {
      LODWORD(v11) = (unsigned __int16)(v11 ^ (v11 + v4)) ^ (unsigned int)v11;
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v11, v5);
      v11 = v5;
    }
    while ( v6 != v5 );
    v7 = v2 < 4;
    v8 = v2 + 1;
    if ( v7 )
      v8 = 4;
    v9 = *(void **)(a1 + 56);
    WorkerFactoryInformation = v8;
    NtSetInformationWorkerFactory(v9, WorkerFactoryAdjustThreadGoal, &WorkerFactoryInformation, 4u);
    return TppPoolUpdateNodeRelation(a1);
  }
  return result;
}
