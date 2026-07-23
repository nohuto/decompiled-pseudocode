/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x140212F80
 * Callers:
 *     _tlgWriteAgg @ 0x140212EB4 (_tlgWriteAgg.c)
 *     MiLogPeriodicTelemetry @ 0x14021F674 (MiLogPeriodicTelemetry.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1403D0440 (MiLogPeriodicTelemetryForSlabAllocator.c)
 *     MiLogSlabEntriesDemote @ 0x1403D6500 (MiLogSlabEntriesDemote.c)
 *     CmpThreadInfoLogStack @ 0x14061607C (CmpThreadInfoLogStack.c)
 *     MiLogBadMapper @ 0x140630E68 (MiLogBadMapper.c)
 *     MiLogSlabEntryAllocateFailure @ 0x14065715C (MiLogSlabEntryAllocateFailure.c)
 * Callees:
 *     ComputeEventEntryHash @ 0x14021338C (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x1402134E4 (CompareEventEntry.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     CreateNewEventEntry @ 0x14034F194 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1403C6B80 (EnableFlushTimer.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // rcx
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v12; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v14; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 v18; // rcx
  char v19; // si
  volatile signed __int64 *i; // rdi
  volatile signed __int64 v21; // rdi
  int v22; // eax
  unsigned __int8 v23; // r9
  signed __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // r11d
  volatile signed __int64 *v27; // r8
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  signed __int64 v31; // rax
  volatile signed __int64 v32; // rtt
  unsigned int NewEventEntry; // eax
  unsigned int v34; // eax
  volatile LONG *v35; // rcx
  unsigned __int8 v36; // bl
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  bool v41; // zf
  signed __int64 v42; // [rsp+48h] [rbp-60h] BYREF
  __int64 v43; // [rsp+58h] [rbp-50h]
  __int64 CurrentIrql; // [rsp+60h] [rbp-48h]
  unsigned int v45; // [rsp+B0h] [rbp+8h]
  int v46; // [rsp+B8h] [rbp+10h]

  v46 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  LOBYTE(a2) = a3;
  v42 = 0LL;
  LOBYTE(a1) = a5;
  v43 = v5;
  v8 = 0;
  v10 = ComputeEventEntryHash(a1, a2, a4);
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
  }
  else
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v12 = (volatile signed __int64 *)(v5 + 272);
      _disable();
      AbEntrySummary = CurrentThread->AbEntrySummary;
      if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v9, CurrentThread)) != 0 )
      {
        _BitScanForward(&v14, AbEntrySummary);
        v45 = v14;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v14);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v29 = *SchedulerAssist;
          do
          {
            v30 = v29;
            v29 = _InterlockedCompareExchange(SchedulerAssist, v29 & 0xFFDFFFFF, v29);
          }
          while ( v30 != v29 );
          if ( (v29 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v7 = (__int64)(&CurrentThread[1].Process + 12 * v45);
        if ( (unsigned __int64)v12 - qword_140C65AE8 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v7 + 8) = SessionId;
        *(_QWORD *)v7 = (unsigned __int64)v12 & 0x7FFFFFFFFFFFFFFCLL;
      }
      LODWORD(v18) = 17;
      if ( _InterlockedCompareExchange64(v12, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v5 + 272, 0LL, v7, v5 + 272);
      if ( v7 )
        *(_BYTE *)(v7 + 18) = 1;
      v19 = 0;
      v8 = 0;
      goto LABEL_13;
    }
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  v19 = 1;
LABEL_13:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v10 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v22 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v21 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v8 = -1073741789;
        goto LABEL_24;
      }
      if ( !v42 )
      {
        LOBYTE(v18) = *(_BYTE *)(v5 + 373);
        LOBYTE(SchedulerAssist) = a3;
        NewEventEntry = CreateNewEventEntry(v18, v46, (_DWORD)SchedulerAssist, a4, a5, v10, (__int64)&v42);
        v8 = NewEventEntry;
        if ( !v42 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_24;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v42, 0LL) )
      {
        v42 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v34 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v34 )
          *(_DWORD *)(v5 + 304) = v34;
        goto LABEL_24;
      }
    }
    v21 = *i;
    v18 = *(unsigned int *)(v21 + 40);
    if ( v10 == (_DWORD)v18 )
    {
      LOBYTE(v18) = a3;
      v22 = CompareEventEntry(v18, a4, v21);
    }
    else
    {
      v22 = v10 - v18;
    }
    if ( !v22 )
      break;
  }
  if ( v21 )
  {
    v23 = 2;
    if ( a5 )
    {
      do
      {
        v24 = **(_QWORD **)(a4 + 16LL * v23);
        v25 = *(_QWORD *)(v21 + 16);
        v26 = *(unsigned __int8 *)(v25 + 16LL * v23 + 13);
        v27 = *(volatile signed __int64 **)(v25 + 16LL * v23);
        if ( v26 == 113 )
        {
          _InterlockedExchangeAdd64(v27, v24);
        }
        else if ( (unsigned int)*(unsigned __int8 *)(v25 + 16LL * v23 + 13) - 114 <= 1 )
        {
          do
          {
            v31 = *v27;
            if ( v26 == 114 )
            {
              if ( v24 >= v31 )
                break;
            }
            else if ( v24 <= v31 )
            {
              break;
            }
            v32 = *v27;
          }
          while ( v32 != _InterlockedCompareExchange64(v27, v24, v31) );
        }
        ++v23;
      }
      while ( v23 < (unsigned int)a5 + 2 );
      v5 = v43;
    }
  }
LABEL_24:
  if ( v19 )
  {
    v35 = (volatile LONG *)(v5 + 280);
    v36 = CurrentIrql;
    ExReleaseSpinLockSharedFromDpcLevel(v35);
    if ( v36 < 2u )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v37 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v37 - 2) <= 0xDu )
        {
          v38 = KeGetCurrentPrcb();
          v39 = v38->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << (v36 + 1));
          v41 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
      __writecr8(v36);
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 + 272);
    KeAbPostRelease(v5 + 272);
  }
  if ( v42 )
    ExFreePoolWithTag(*(PVOID *)(v42 + 16), 0);
  return v8;
}
