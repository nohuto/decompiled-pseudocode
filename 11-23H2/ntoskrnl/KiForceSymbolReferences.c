/*
 * XREFs of KiForceSymbolReferences @ 0x140B95628
 * Callers:
 *     KiInitSystem @ 0x140B5E764 (KiInitSystem.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     KeAbPostReleaseEx @ 0x1402BD780 (KeAbPostReleaseEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312480 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiForceSymbolReferences(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v2; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v4; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  int SessionId; // eax
  signed __int8 v10; // cf
  unsigned __int8 CurrentIrql; // bl
  _DWORD *v12; // r9
  int v13; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  __int64 result; // rax
  unsigned int v20; // [rsp+40h] [rbp+8h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = 0LL;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward(&v4, AbEntrySummary);
      v20 = v4;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v4);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v7 = *SchedulerAssist;
        do
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
        }
        while ( v8 != v7 );
        if ( (v7 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v2 = (ULONG_PTR)(&CurrentThread[1].Process + 12 * v20);
      if ( (unsigned __int64)&BugCheckParameter2 - qword_140C659E8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v2 + 8) = SessionId;
      *(_QWORD *)v2 = &BugCheckParameter2;
    }
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL);
    if ( v2 )
    {
      if ( v10 )
        KeAbPostReleaseEx((ULONG_PTR)&BugCheckParameter2, v2);
      else
        *(_BYTE *)(v2 + 18) = 1;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = KeGetCurrentPrcb()->SchedulerAssist;
    v13 = 4;
    if ( CurrentIrql != 2 )
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    v12[5] |= v13;
  }
  ExTryAcquireSpinLockExclusiveAtDpcLevel();
  if ( (_DWORD)KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v18 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)v15);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
