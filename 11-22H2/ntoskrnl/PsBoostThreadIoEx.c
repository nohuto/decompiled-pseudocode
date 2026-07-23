/*
 * XREFs of PsBoostThreadIoEx @ 0x14022FF50
 * Callers:
 *     PsBoostThreadIo @ 0x14022FF30 (PsBoostThreadIo.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D860 (ExpReleaseResourceSharedForThreadLite.c)
 *     CcUnpinFileDataEx @ 0x14025D6F0 (CcUnpinFileDataEx.c)
 *     ExpFreeOwnerEntry @ 0x140260A40 (ExpFreeOwnerEntry.c)
 *     CcApplyLowIoPriorityToThread @ 0x14029BA88 (CcApplyLowIoPriorityToThread.c)
 *     CcAcquireByteRangeForWrite @ 0x14029CF10 (CcAcquireByteRangeForWrite.c)
 *     ExpApplyPriorityBoost @ 0x1402A8420 (ExpApplyPriorityBoost.c)
 *     ExDeleteResourceLite @ 0x1402A8CA0 (ExDeleteResourceLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     FsRtlpWaitForIoAtEof @ 0x140304990 (FsRtlpWaitForIoAtEof.c)
 *     KiAbThreadUnboostIoPriority @ 0x140318684 (KiAbThreadUnboostIoPriority.c)
 *     ExReinitializeResourceLite @ 0x1403187C0 (ExReinitializeResourceLite.c)
 *     KiAbThreadBoostIoPriority @ 0x140319118 (KiAbThreadBoostIoPriority.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140319F90 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x14031ACD0 (ExpBoostIoAfterAcquire.c)
 *     FsRtlReleaseEofLock @ 0x140328600 (FsRtlReleaseEofLock.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140338340 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsLeavePriorityRegion @ 0x140339930 (PsLeavePriorityRegion.c)
 *     PsEnterPriorityRegion @ 0x14033BF50 (PsEnterPriorityRegion.c)
 *     FsRtlpModifyThreadPriorities @ 0x140358684 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x140358738 (FsRtlpDoBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14036D094 (CcBoostLowPriorityWorkerThread.c)
 *     IoBoostThreadIo @ 0x140373590 (IoBoostThreadIo.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14060AA20 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x14060AA80 (ExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140227700 (RtlCaptureStackBackTrace.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAbQueueAutoBoostDpc @ 0x140307C18 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x14035F9D0 (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, __int64 a4)
{
  signed __int32 v4; // edi
  KIRQL v5; // r13
  _QWORD *v6; // rax
  char v8; // bp
  __int64 v11; // r12
  bool v12; // zf
  __int64 **v13; // r14
  __int64 *v14; // rcx
  __int64 **v15; // r14
  __int64 *v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // bl
  struct _KPRCB *v19; // rdi
  __int64 Pool2; // rax
  __int64 v21; // r12
  _QWORD *v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  _DWORD *v29; // r9
  __int64 v30; // rdx
  unsigned __int8 v31; // cl
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  _QWORD *v35; // [rsp+20h] [rbp-38h]

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  v8 = a3;
  if ( PspAlwaysTrackIoBoosting )
  {
    v8 = 1;
  }
  else if ( !a3 )
  {
    v11 = a1 + 1488;
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(64LL, 112LL, 1936682818LL);
  v35 = (_QWORD *)Pool2;
  v21 = Pool2;
  if ( Pool2 )
  {
    RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
    *(_QWORD *)(v21 + 96) = KeGetCurrentThread();
    *(_QWORD *)(v21 + 104) = a4;
  }
  v11 = a1 + 1488;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1488));
  v6 = v35;
LABEL_4:
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1440) )
    {
      v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1440));
      if ( !v8 )
        goto LABEL_12;
      if ( *(_DWORD *)(a1 + 1440) )
      {
        if ( v6 )
        {
          v24 = *(_QWORD **)(a1 + 1480);
          if ( *v24 != a1 + 1472 )
            goto LABEL_41;
          *v6 = a1 + 1472;
          v6[1] = v24;
          *v24 = v6;
          *(_QWORD *)(a1 + 1480) = v6;
        }
      }
      else
      {
        if ( v6 )
          ExFreePoolWithTag(v6, 0x736F6F42u);
        v15 = (__int64 **)(a1 + 1456);
        while ( 1 )
        {
          v16 = *v15;
          if ( *v15 == (__int64 *)v15 )
            break;
          v17 = *v16;
          if ( (__int64 **)v16[1] != v15 || *(__int64 **)(v17 + 8) != v16 )
            goto LABEL_41;
          *v15 = (__int64 *)v17;
          *(_QWORD *)(v17 + 8) = v15;
          ExFreePoolWithTag(v16, 0x736F6F42u);
        }
        v13 = (__int64 **)(a1 + 1472);
        while ( 1 )
        {
          v14 = *v13;
          if ( *v13 == (__int64 *)v13 )
            break;
          v23 = *v14;
          if ( (__int64 **)v14[1] != v13 || *(__int64 **)(v23 + 8) != v14 )
            goto LABEL_41;
          *v13 = (__int64 *)v23;
          *(_QWORD *)(v23 + 8) = v13;
          ExFreePoolWithTag(v14, 0x736F6F42u);
        }
      }
    }
    if ( !v8 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1440));
  if ( v8 )
  {
    if ( !v6 )
    {
LABEL_10:
      KxReleaseSpinLock(v11);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v12 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v5);
      if ( !a2 )
        goto LABEL_6;
LABEL_12:
      v12 = v4 == 0;
      goto LABEL_13;
    }
    v22 = *(_QWORD **)(a1 + 1464);
    if ( *v22 == a1 + 1456 )
    {
      *v6 = a1 + 1456;
      v6[1] = v22;
      *v22 = v6;
      *(_QWORD *)(a1 + 1464) = v6;
      goto LABEL_10;
    }
LABEL_41:
    __fastfail(3u);
  }
LABEL_6:
  v12 = v4 == 1;
LABEL_13:
  if ( v12 && !a2 && *(_BYTE *)(a1 + 793) )
  {
    v18 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
    {
      v29 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v18 == 2 )
        LODWORD(v30) = 4;
      else
        v30 = (-1LL << (v18 + 1)) & 4;
      v29[5] |= v30;
    }
    v19 = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &v19->AbPropagateBoostsList, a1 + 808) )
      KiAbQueueAutoBoostDpc(v19);
    if ( (_DWORD)KiIrqlFlags )
    {
      v31 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v31 <= 0xFu && v18 <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << (v18 + 1));
        v12 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
    __writecr8(v18);
  }
}
