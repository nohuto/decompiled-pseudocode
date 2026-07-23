/*
 * XREFs of MiRemoveFromSystemSpace @ 0x140213780
 * Callers:
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x1406950AC (KsepSdbUnmapFromMemory.c)
 *     MiUnmapImageInSystemSpace @ 0x1406ACB70 (MiUnmapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B1A00 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     AlpcViewDestroyProcedure @ 0x14071EEE0 (AlpcViewDestroyProcedure.c)
 *     MmUnmapViewInSystemSpace @ 0x1407E06E0 (MmUnmapViewInSystemSpace.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x14080E030 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcpUnmapSection @ 0x14080E1B0 (CmFcpUnmapSection.c)
 *     ExInitializeLeapSecondData @ 0x140853810 (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x140856D14 (EtwpCoverageEnsureContext.c)
 *     IopDeleteIoRing @ 0x1409493B0 (IopDeleteIoRing.c)
 *     PspDeleteServerSiloGlobals @ 0x1409AD090 (PspDeleteServerSiloGlobals.c)
 *     RtlNlsDeleteState @ 0x1409B9A48 (RtlNlsDeleteState.c)
 *     EtwpCoverageSamplerCleanup @ 0x1409F31E4 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409F349C (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA924 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140A034A0 (NtMapCMFModule.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A270CC (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A275A0 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A279C8 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     MiManageSubsectionView @ 0x1402A0790 (MiManageSubsectionView.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiUnmapLargePages @ 0x1403D6AFC (MiUnmapLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDereferencePerSessionProtos @ 0x1407B5E98 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveFromSystemSpace(ULONG_PTR BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v4; // r12
  __int16 v5; // dx
  __int64 v6; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 AnyMultiplexedVm; // r13
  char *v9; // rbx
  struct _KTHREAD *v10; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v12; // ecx
  struct _KPRCB *v13; // rcx
  signed __int32 *v14; // r8
  __int64 v15; // rdx
  int SessionId; // eax
  __int64 SharedVm; // rbx
  KIRQL v19; // al
  KIRQL v20; // di
  _QWORD *v21; // rbx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  void *v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rdx
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  volatile LONG *v30; // rdi
  KIRQL v31; // al
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v36; // eax
  _QWORD v37[27]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v38; // [rsp+110h] [rbp+8h]

  memset(v37, 0, 0x98uLL);
  CurrentThread = KeGetCurrentThread();
  v4 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  if ( (BugCheckParameter1 & 0x3FFFFFFF) != 0 )
    goto LABEL_2;
  v30 = (volatile LONG *)((char *)&unk_140C68558 + 16 * (unsigned __int8)(BugCheckParameter1 >> 30));
  v31 = ExAcquireSpinLockExclusive(v30 + 3);
  v21 = *(_QWORD **)v30;
  v32 = v31;
  while ( v21 )
  {
    v33 = v21[11] & 0xFFFFFFFFFFFFF000uLL;
    if ( BugCheckParameter1 >= v33 + v21[4] )
    {
      v21 = (_QWORD *)v21[1];
    }
    else
    {
      if ( BugCheckParameter1 >= v33 )
        break;
      v21 = (_QWORD *)*v21;
    }
  }
  if ( v21 )
  {
    RtlAvlRemoveNode(v30, v21);
    --*((_DWORD *)v30 + 2);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v30 + 3);
  v6 = (unsigned int)KiIrqlFlags;
  v5 = 1;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v32 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = (unsigned int)(v32 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
      v26 = (v36 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v36;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v5 = 1;
    }
  }
  __writecr8(v32);
  if ( !v21 )
  {
LABEL_2:
    CurrentThread->SpecialApcDisable -= v5;
    v9 = 0LL;
    v10 = KeGetCurrentThread();
    _disable();
    AbEntrySummary = v10->AbEntrySummary;
    if ( v10->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v6, v10)) != 0 )
    {
      _BitScanForward(&v12, AbEntrySummary);
      v38 = v12;
      v10->AbEntrySummary = AbEntrySummary & ~(1 << v12);
      v13 = KeGetCurrentPrcb();
      v14 = (signed __int32 *)v13->SchedulerAssist;
      if ( v14 )
      {
        _m_prefetchw(v14);
        v28 = *v14;
        do
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange(v14, v28 & 0xFFDFFFFF, v28);
        }
        while ( v29 != v28 );
        if ( (v28 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
      _enable();
      v15 = 96LL * v38;
      v9 = (char *)&v10[1].Process + v15;
      if ( (unsigned __int64)&qword_140C68540 - qword_140C659E8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(v10->ApcState.Process);
      else
        SessionId = -1;
      *((_DWORD *)v9 + 2) = SessionId;
      *(_QWORD *)v9 = (unsigned __int64)&qword_140C68540 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C68540, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C68540, v9, &qword_140C68540);
    if ( v9 )
      v9[18] = 1;
    SharedVm = MiGetSharedVm(AnyMultiplexedVm, v15, v14, SchedulerAssist);
    v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v20 = v19;
    v21 = P;
    while ( v21 )
    {
      v22 = v21[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( BugCheckParameter1 >= v22 + v21[4] )
      {
        v21 = (_QWORD *)v21[1];
      }
      else
      {
        if ( BugCheckParameter1 >= v22 )
          break;
        v21 = (_QWORD *)*v21;
      }
    }
    if ( !v21 )
      KeBugCheckEx(0xD7u, BugCheckParameter1, 1uLL, 0LL, 0LL);
    --dword_140C68550;
    RtlAvlRemoveNode(&P, v21);
    LOBYTE(v23) = v20;
    MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v23);
    v24 = (void *)v21[8];
    v25 = *(_QWORD *)v21[6];
    v37[0] = v25;
    MiManageSubsectionView(v37, v21 + 9, 4LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C68540, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C68540);
    KeAbPostRelease((ULONG_PTR)&qword_140C68540);
    v26 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v26 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  else
  {
    v24 = (void *)v21[8];
    v25 = *(_QWORD *)v21[6];
  }
  if ( v24 )
    ObfDereferenceObject(v24);
  if ( (v21[7] & 1) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v25 + 92));
  if ( a2 )
    MiRemoveMappedPtes(v21, AnyMultiplexedVm);
  if ( *((_DWORD *)v21 + 24) != 0x7FFFF )
    MiDereferencePerSessionProtos(v25);
  v27 = ((v21[4] >> 12) + 15LL) & 0xFFFFFFF0LL;
  if ( (v21[7] & 0x18) == 0x18 )
    MiReleasePtes(&unk_140C683B0, v4, (unsigned int)v27);
  else
    MiUnmapLargePages(v21[11] & 0xFFFFFFFFFFFFF000uLL, v27 << 12, 9LL);
  ExFreePoolWithTag(v21, 0);
}
