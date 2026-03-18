/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x14035CE74
 * Callers:
 *     MiZeroInParallelWorker @ 0x14026C240 (MiZeroInParallelWorker.c)
 *     MiSetIdealProcessorThread @ 0x14035CA04 (MiSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403861B4 (KeSetIdealProcessorThreadByNumber.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiSetIdealProcessorThread @ 0x14035D00C (KiSetIdealProcessorThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  _DWORD *v4; // r13
  unsigned int v5; // esi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v9; // rcx
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  bool v12; // bl
  int v13; // r14d
  unsigned int v14; // ebx
  unsigned int v15; // esi
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  int v25; // [rsp+60h] [rbp+8h] BYREF
  int v26; // [rsp+70h] [rbp+18h] BYREF

  v25 = 0;
  v4 = (_DWORD *)a3;
  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v26 = 0;
  while ( 1 )
  {
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v9[6];
        v9[6] = v18 + 1;
        if ( v18 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v17[6] - 1;
        v17[6] = v19;
        if ( !v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v26, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = *(_DWORD *)(a1 + 588);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = (*(_DWORD *)(a1 + 116) & 8) != 0 && (struct _KTHREAD *)a1 == KeGetCurrentThread();
  LOBYTE(a3) = v12;
  v13 = KiSetIdealProcessorThread(a1, v5, a3, &v25);
  if ( v13 >= 0 && !v12 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0);
  v14 = *(_DWORD *)(a1 + 588);
  v15 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadLockSafe(a1);
  if ( (xmmword_140D06910 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v10, v14);
    if ( (xmmword_140D06910 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v11, v15);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v4 )
    *v4 = v25;
  return (unsigned int)v13;
}
