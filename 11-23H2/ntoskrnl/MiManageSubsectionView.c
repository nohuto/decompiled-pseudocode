/*
 * XREFs of MiManageSubsectionView @ 0x1402A0790
 * Callers:
 *     MiSessionInsertImage @ 0x14020AE64 (MiSessionInsertImage.c)
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MmMapViewInSystemCache @ 0x14029F8C0 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiPostInsertVad @ 0x14030BE50 (MiPostInsertVad.c)
 *     MiReleaseSessionDriverCharges @ 0x140683154 (MiReleaseSessionDriverCharges.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiConstructLoaderEntry @ 0x140704B9C (MiConstructLoaderEntry.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  struct _KTHREAD *v8; // rbp
  __int64 v9; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  int v15; // esi
  int v16; // esi
  int v17; // esi
  __int64 v18; // rcx
  _QWORD *v19; // rax
  struct _KTHREAD *v20; // rdi
  $C71981A45BEB2B45F82C232A7085991E *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned int v32; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v8 = KeGetCurrentThread();
  v9 = 0LL;
  _disable();
  AbEntrySummary = v8->AbEntrySummary;
  if ( v8->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, v8)) != 0 )
  {
    _BitScanForward(&v11, AbEntrySummary);
    v32 = v11;
    v8->AbEntrySummary = AbEntrySummary & ~(1 << v11);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v27 = *SchedulerAssist;
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange(SchedulerAssist, v27 & 0xFFDFFFFF, v27);
      }
      while ( v28 != v27 );
      if ( (v27 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v9 = (__int64)(&v8[1].Process + 12 * v32);
    if ( (unsigned __int64)(v5 + 104 - qword_140C659E8) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v8->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v9 + 8) = SessionId;
    *(_QWORD *)v9 = (v5 + 104) & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx(v5 + 104, v9, v5 + 104);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v15 = a3 - 1;
  if ( !v15 )
  {
    v29 = a1[10];
    v30 = a1 + 10;
    if ( *(__int64 **)(v29 + 8) != a1 + 10 )
      goto FatalListEntryError_5;
    goto LABEL_28;
  }
  v16 = v15 - 1;
  if ( !v16 )
    goto LABEL_15;
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
      goto LABEL_18;
    v29 = *(_QWORD *)(v5 + 8);
    v30 = (_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v29 + 8) != v5 + 8 )
      goto FatalListEntryError_5;
LABEL_28:
    *a2 = v29;
    a2[1] = v30;
    *(_QWORD *)(v29 + 8) = a2;
    *v30 = a2;
    goto LABEL_18;
  }
  if ( v17 == 1 && (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
  {
LABEL_15:
    v18 = *a2;
    v19 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) == a2 && (_QWORD *)*v19 == a2 )
    {
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      goto LABEL_18;
    }
FatalListEntryError_5:
    __fastfail(3u);
  }
LABEL_18:
  v20 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5 + 104);
  LODWORD(v21) = KeAbPostRelease(v5 + 104);
  if ( v20->SpecialApcDisable++ == -1 )
  {
    v21 = &v20->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v21->ApcState.ApcListHead[0].Flink != v21 )
      LODWORD(v21) = KiCheckForKernelApcDelivery(v23, v22, v24, v25);
  }
  return (int)v21;
}
