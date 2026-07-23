/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x1403D5D24
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1403D5C98 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14033B230 (KeQueryMaximumProcessorCountEx.c)
 *     ExpSaBinaryArrayRemove @ 0x1403D5EB8 (ExpSaBinaryArrayRemove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaPageGroupDescriptorFree(unsigned int *P)
{
  ULONG MaximumProcessorCount; // eax
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // ecx
  void *v16; // rbx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  unsigned int v19; // [rsp+58h] [rbp+10h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = MaximumProcessorCount;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v3, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward(&v8, AbEntrySummary);
    v19 = v8;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v17 = *SchedulerAssist;
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v5 = (__int64)(&CurrentThread[1].Process + 12 * v19);
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v5, (__int64)&ExSaPageGroupDescriptorArrayLock);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  if ( (_DWORD)v6 )
  {
    v13 = 0LL;
    do
    {
      v14 = P[8];
      _BitScanReverse(&v15, v14);
      v16 = *(void **)(*(_QWORD *)(*(_QWORD *)(v13 + ExSaPageArrays) + 8LL * (v15 - 2))
                     + 8LL * ((unsigned int)v14 ^ (1 << v15))
                     + 8);
      ExpSaBinaryArrayRemove(*(_QWORD *)(v13 + ExSaPageArrays), v14);
      ExFreePoolWithTag(v16, 0);
      v13 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, P[8]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  KeAbPostRelease((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  ExFreePoolWithTag(P, 0);
}
