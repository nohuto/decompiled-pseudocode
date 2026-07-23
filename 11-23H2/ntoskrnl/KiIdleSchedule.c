/*
 * XREFs of KiIdleSchedule @ 0x1403076B0
 * Callers:
 *     KiIdleLoop @ 0x140423D50 (KiIdleLoop.c)
 * Callees:
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiEndThreadCycleAccumulation @ 0x1402B2F20 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1402B2FD0 (KiStartThreadCycleAccumulation.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140462566 (KiSendHeteroRescheduleIntRequest.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1)
{
  __int64 v2; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rdx
  struct _KPRCB *v9; // rcx
  signed __int32 *v10; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = 0LL;
  KiAcquirePrcbLocksForIsolationUnit(a1, 0, &v16);
  *(_BYTE *)(a1 + 13243) = 0;
  v2 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v2 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  KiEndThreadCycleAccumulation(a1, v2, 0LL, 1u);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v12 = *SchedulerAssist;
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  v5 = KiSearchForNewThread(a1, 1, &v16);
  v7 = v5;
  if ( !v5 )
    goto LABEL_5;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = v5;
  if ( *(_BYTE *)(v5 + 388) == 1 )
    *(_DWORD *)(v5 + 132) = *(_DWORD *)(v5 + 132) - *(_DWORD *)(v5 + 436) + MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(v5 + 388) = 2;
  KiReleasePrcbLocksForIsolationUnit(&v16);
  if ( v7 == *(_QWORD *)(a1 + 24) )
  {
    v7 = 0LL;
LABEL_5:
    if ( KeHeteroSystem && !KeHeteroSystemVirtual )
      KiSendHeteroRescheduleIntRequest(a1);
    v8 = *(_QWORD *)(a1 + 24);
    _disable();
    LOBYTE(v6) = 1;
    KiStartThreadCycleAccumulation(a1, v8, v6);
    v9 = KeGetCurrentPrcb();
    v10 = (signed __int32 *)v9->SchedulerAssist;
    if ( v10 )
    {
      _m_prefetchw(v10);
      v14 = *v10;
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange(v10, v14 & 0xFFDFFFFF, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v9);
    }
    _enable();
  }
  return v7;
}
