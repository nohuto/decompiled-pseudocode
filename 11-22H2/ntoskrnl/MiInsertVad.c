/*
 * XREFs of MiInsertVad @ 0x140287B70
 * Callers:
 *     MiRemoveVad @ 0x14028A350 (MiRemoveVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F155C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiPerformVadSplitting @ 0x14030B4C4 (MiPerformVadSplitting.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630CA0 (MiInsertViewOfPhysicalSection.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x1406B3068 (MiInsertProcessVads.c)
 *     MiReserveUserMemory @ 0x14071F450 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CD0F4 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateEnclaveVad @ 0x140A3CCF8 (MiAllocateEnclaveVad.c)
 *     MiInsertChildVads @ 0x140A490FC (MiInsertChildVads.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiIsVadLargePrivate @ 0x140287F50 (MiIsVadLargePrivate.c)
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     MiLocateLockedVadEvent @ 0x14030B2F4 (MiLocateLockedVadEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAweViewInserter @ 0x140A4132C (MiAweViewInserter.c)
 */

int __fastcall MiInsertVad(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r15
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  int v11; // ecx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  int v15; // ebp
  KIRQL v16; // r14
  __int64 **v17; // rdx
  __int64 *v18; // rax
  $C71981A45BEB2B45F82C232A7085991E *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rsi
  __int64 v23; // rbp
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v25; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v27; // ecx
  struct _KPRCB *v28; // rcx
  signed __int32 *v29; // r8
  int SessionId; // eax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  struct _KTHREAD *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  bool v38; // zf
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  __int64 v41; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  unsigned int v47; // [rsp+60h] [rbp+18h]

  v3 = 0LL;
  v7 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v8 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v9 = *(unsigned int *)(a1 + 24);
  v10 = 0LL;
  v11 = *(_DWORD *)(a1 + 48);
  v12 = v9 | v8;
  if ( (v11 & 0x180000) == 0x80000 )
  {
    v41 = *(_QWORD *)(a2 + 1680);
    if ( (v11 & 0x200000) != 0 )
      ++*(_QWORD *)(v41 + 408);
    else
      ++*(_QWORD *)(v41 + 416);
  }
  if ( v7 <= *(_QWORD *)(a2 + 1496) >> 12 && (a3 & 2) == 0 )
  {
    v13 = *(_QWORD *)(a2 + 1176) + ((v7 - v12 + 1) << 12);
    *(_QWORD *)(a2 + 1176) = v13;
    if ( *(_QWORD *)(a2 + 1168) < v13 )
      *(_QWORD *)(a2 + 1168) = v13;
  }
  if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 && (*(_DWORD *)(a1 + 48) & 0x6200000) != 0x4200000 )
    v10 = MiLocateLockedVadEvent(a1, 256LL) + 8;
  if ( (unsigned int)MiIsVadLargePrivate(a1) )
    ++*(_DWORD *)(a2 + 2140);
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 296LL);
  ++*(_QWORD *)(a2 + 2024);
  v15 = a3 & 1;
  if ( v15 )
    v16 = 17;
  else
    v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                   + 284));
  *(_QWORD *)(a2 + 2016) = a1;
  LOBYTE(v14) = 0;
  v17 = *(__int64 ***)(a2 + 2008);
  if ( v17 )
  {
    while ( 1 )
    {
      v14 = *((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32);
      if ( v12 <= v14 && v12 < (*((unsigned int *)v17 + 6) | ((unsigned __int64)*((unsigned __int8 *)v17 + 32) << 32)) )
      {
        v18 = *v17;
        if ( !*v17 )
        {
          LOBYTE(v14) = 0;
          break;
        }
      }
      else
      {
        v18 = v17[1];
        if ( !v18 )
        {
          LOBYTE(v14) = 1;
          break;
        }
      }
      v17 = (__int64 **)v18;
    }
  }
  LODWORD(v19) = RtlAvlInsertNodeEx(a2 + 2008, v17, v14, a1);
  if ( v16 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                         + 284));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v45 = ~(unsigned __int16)(-1LL << (v16 + 1));
        v38 = (v45 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v45;
        if ( v38 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    LODWORD(v19) = v16;
    __writecr8(v16);
  }
  if ( !v15 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
    {
      v20 = *(__int64 **)(a1 + 72);
      v21 = (__int64)KeGetCurrentThread()->ApcState.Process | 1;
      *(_QWORD *)(a1 + 112) = v21;
      v22 = (_QWORD *)(a1 + 96);
      v23 = *v20;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v25 = KeGetCurrentThread();
      _disable();
      AbEntrySummary = v25->AbEntrySummary;
      if ( v25->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v21, v25)) != 0 )
      {
        _BitScanForward(&v27, AbEntrySummary);
        v47 = v27;
        v25->AbEntrySummary = AbEntrySummary & ~(1 << v27);
        v28 = KeGetCurrentPrcb();
        v29 = (signed __int32 *)v28->SchedulerAssist;
        if ( v29 )
        {
          _m_prefetchw(v29);
          v39 = *v29;
          do
          {
            v40 = v39;
            v39 = _InterlockedCompareExchange(v29, v39 & 0xFFDFFFFF, v39);
          }
          while ( v40 != v39 );
          if ( (v39 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
        _enable();
        v3 = (__int64)(&v25[1].Process + 12 * v47);
        if ( (unsigned __int64)(v23 + 104 - qword_140C65AE8) < 0x8000000000LL )
          SessionId = MmGetSessionIdEx(v25->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v3 + 8) = SessionId;
        *(_QWORD *)v3 = (v23 + 104) & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 104), 0LL) )
        ExfAcquirePushLockExclusiveEx(v23 + 104, v3, v23 + 104);
      if ( v3 )
        *(_BYTE *)(v3 + 18) = 1;
      if ( (*(_DWORD *)(v23 + 56) & 0x400) == 0 )
      {
        v31 = *(_QWORD *)(v23 + 8);
        v32 = (_QWORD *)(v23 + 8);
        if ( *(_QWORD *)(v31 + 8) != v23 + 8 )
          __fastfail(3u);
        *v22 = v31;
        v22[1] = v32;
        *(_QWORD *)(v31 + 8) = v22;
        *v32 = v22;
      }
      v33 = KeGetCurrentThread();
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v23 + 104);
      LODWORD(v19) = KeAbPostRelease(v23 + 104);
      v38 = v33->SpecialApcDisable++ == -1;
      if ( v38 )
      {
        v19 = &v33->152;
        if ( ($C71981A45BEB2B45F82C232A7085991E *)v19->ApcState.ApcListHead[0].Flink != v19 )
          LODWORD(v19) = KiCheckForKernelApcDelivery(v35, v34, v36, v37);
      }
    }
    if ( v10 )
      LODWORD(v19) = MiAweViewInserter(KeGetCurrentThread()->ApcState.Process, v10);
  }
  return (int)v19;
}
