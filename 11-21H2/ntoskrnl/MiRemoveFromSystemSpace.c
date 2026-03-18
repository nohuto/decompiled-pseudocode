/*
 * XREFs of MiRemoveFromSystemSpace @ 0x14026D048
 * Callers:
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1406DF130 (MmUnmapViewInSystemSpace.c)
 *     KsepSdbUnmapFromMemory @ 0x1406E09F8 (KsepSdbUnmapFromMemory.c)
 *     MiUnmapImageInSystemSpace @ 0x1406F39F8 (MiUnmapImageInSystemSpace.c)
 *     AlpcViewDestroyProcedure @ 0x1406F6A30 (AlpcViewDestroyProcedure.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140700A40 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     KsepSdbMapToMemory @ 0x1407ECCD0 (KsepSdbMapToMemory.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x140832B54 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcpUnmapSection @ 0x140832C50 (CmFcpUnmapSection.c)
 *     ExInitializeLeapSecondData @ 0x140857D34 (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x14085A124 (EtwpCoverageEnsureContext.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140922DB4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14092317C (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     IopDeleteIoRing @ 0x140938040 (IopDeleteIoRing.c)
 *     PspDeleteServerSiloGlobals @ 0x1409ABFB0 (PspDeleteServerSiloGlobals.c)
 *     RtlNlsDeleteState @ 0x1409B6808 (RtlNlsDeleteState.c)
 *     EtwpCoverageSamplerCleanup @ 0x1409F26E8 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409F352C (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140A05860 (NtMapCMFModule.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiManageSubsectionView @ 0x140285FE0 (MiManageSubsectionView.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiUnmapLargePages @ 0x1403A111C (MiUnmapLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDereferencePerSessionProtos @ 0x1406DDA18 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveFromSystemSpace(ULONG_PTR BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v4; // r12
  __int64 AnyMultiplexedVm; // rbp
  unsigned int SessionId; // r15d
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // di
  _QWORD *i; // rbx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  void *v13; // r14
  __int64 v14; // rbp
  struct _KTHREAD *v15; // rsi
  unsigned __int64 v16; // rdx
  char *p_Process; // rdi
  unsigned int v18; // ecx
  int v19; // r8d
  bool v20; // zf
  unsigned __int64 v21; // rdx
  volatile LONG *v22; // rdi
  KIRQL v23; // al
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  _QWORD v30[27]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+110h] [rbp+8h]

  memset(v30, 0, 0x98uLL);
  CurrentThread = KeGetCurrentThread();
  v4 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  v31 = AnyMultiplexedVm;
  SessionId = -1;
  if ( (BugCheckParameter1 & 0x3FFFFFFF) == 0 )
  {
    v22 = (volatile LONG *)((char *)&unk_140C4F618 + 16 * (unsigned __int8)(BugCheckParameter1 >> 30));
    v23 = ExAcquireSpinLockExclusive(v22 + 3);
    i = *(_QWORD **)v22;
    v24 = v23;
    while ( i )
    {
      v25 = i[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( BugCheckParameter1 >= v25 + i[4] )
      {
        i = (_QWORD *)i[1];
      }
      else
      {
        if ( BugCheckParameter1 >= v25 )
        {
          RtlAvlRemoveNode(v22, i);
          --*((_DWORD *)v22 + 2);
          break;
        }
        i = (_QWORD *)*i;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v22 + 3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v20 = (v29 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v29;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v24);
    if ( i )
    {
      v13 = (void *)i[8];
      v14 = *(_QWORD *)i[6];
      goto LABEL_23;
    }
    AnyMultiplexedVm = v31;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F5E8, 0LL);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v9 = v8;
  for ( i = P; ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, BugCheckParameter1, 1uLL, 0LL, 0LL);
      v11 = i[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( BugCheckParameter1 < v11 + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( BugCheckParameter1 >= v11 )
      break;
  }
  --dword_140C4F5F8;
  RtlAvlRemoveNode(&P, i);
  LOBYTE(v12) = v9;
  MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v12);
  v13 = (void *)i[8];
  v14 = *(_QWORD *)i[6];
  v30[0] = v14;
  MiManageSubsectionView(v30, i + 9, 4LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F5E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F5E8);
  v15 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C4F5E8 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v15->ApcState.Process);
  _disable();
  v16 = (unsigned __int64)&qword_140C4F5E8 & 0x7FFFFFFFFFFFFFFCLL;
  p_Process = (char *)&v15[1].Process;
  v18 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v16
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    ++v18;
    p_Process += 96;
    if ( v18 >= 6 )
      goto LABEL_38;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v16, 0x7FFFFFFFFFFFFFFCLL);
      _disable();
    }
    v19 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    v15->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v19 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v15, (__int64)&qword_140C4F5E8, v19);
    goto LABEL_20;
  }
LABEL_38:
  if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&qword_140C4F5E8, SessionId, 0LL);
  _enable();
LABEL_20:
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
LABEL_23:
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( (i[7] & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v14 + 92), 0xFFFFFFFF);
  if ( a2 )
    MiRemoveMappedPtes(i, v31);
  if ( *((_DWORD *)i + 24) != 0x7FFFF )
    MiDereferencePerSessionProtos(v14);
  v21 = ((i[4] >> 12) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (i[7] & 0x18) == 0x18 )
    MiReleasePtes(&unk_140C52F40, v4, (unsigned int)v21);
  else
    MiUnmapLargePages(i[11] & 0xFFFFFFFFFFFFF000uLL, v21 << 12, 9LL);
  ExFreePoolWithTag(i, 0);
}
