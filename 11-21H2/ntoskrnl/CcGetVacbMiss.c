/*
 * XREFs of CcGetVacbMiss @ 0x1402858A0
 * Callers:
 *     CcGetVirtualAddress @ 0x140328180 (CcGetVirtualAddress.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140247800 (CcReleaseBcbLockAndVacbLock.c)
 *     CcGetVacbLargeOffset @ 0x140282064 (CcGetVacbLargeOffset.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcSetVacbInFreeList @ 0x1402856A8 (CcSetVacbInFreeList.c)
 *     SetVacb @ 0x140285740 (SetVacb.c)
 *     CcGetVacbFromFreeList @ 0x1402857B4 (CcGetVacbFromFreeList.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     CcIncrementVacbActiveCount @ 0x140285D50 (CcIncrementVacbActiveCount.c)
 *     MmMapViewInSystemCache @ 0x140285D90 (MmMapViewInSystemCache.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CcUnmapInactiveViews @ 0x14053B3F8 (CcUnmapInactiveViews.c)
 *     CcUnmapVacb @ 0x1406FAEA0 (CcUnmapVacb.c)
 */

__int64 *__fastcall CcGetVacbMiss(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r15
  int v5; // edi
  char v6; // r12
  int v7; // r13d
  int v8; // r14d
  unsigned __int64 v10; // rbx
  int v11; // ecx
  __int64 *VacbFromFreeList; // rsi
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  KIRQL v19; // bl
  NTSTATUS v20; // eax
  NTSTATUS v21; // edi
  __int64 v22; // rbx
  __int64 VacbLargeOffset; // r14
  __int64 v24; // r9
  KIRQL v25; // bl
  __int64 v26; // r9
  KIRQL v27; // bl
  unsigned __int64 v29[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+8h]
  __int64 v31; // [rsp+98h] [rbp+10h] BYREF
  int v32; // [rsp+A0h] [rbp+18h]
  int v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v4 = *(_QWORD *)(a1 + 528);
  HIDWORD(v31) = HIDWORD(a2);
  v5 = 0;
  v29[0] = 0LL;
  v6 = 0;
  v7 = a4;
  v8 = a3;
  LODWORD(v31) = a2 - (a2 & 0x3FFFF);
  while ( 1 )
  {
    v10 = KeAcquireQueuedSpinLock(4uLL);
    v11 = v5 | 2;
    if ( !v6 )
      v11 = v5;
    v30 = v11;
    VacbFromFreeList = CcGetVacbFromFreeList(v4, v6);
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = -1LL << ((unsigned __int8)v10 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)v13;
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    if ( VacbFromFreeList )
      break;
    while ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(v4 + 8), v13, 0LL, 0LL) )
    {
      v19 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = CcGetVacbFromFreeList(v4, v6);
      KeReleaseQueuedSpinLock(4uLL, v19);
      if ( VacbFromFreeList )
        goto LABEL_14;
    }
    if ( v7 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v21 = -1073741670;
    if ( !EnableFeatureServicing_CcInsufVAError )
      v21 = -1073740606;
LABEL_40:
    if ( v6 || v7 != 1 )
      RtlRaiseStatus((unsigned int)v21);
    v5 = v30;
    v6 = 1;
  }
LABEL_14:
  v29[0] = *(_QWORD *)(a1 + 32) - v31;
  if ( v29[0] > 0x40000 )
    LODWORD(v29[0]) = 0x40000;
  v20 = MmMapViewInSystemCache(*(_QWORD *)(a1 + 168), VacbFromFreeList, &v31, v29);
  v21 = v20;
  if ( !EnableFeatureServicing_CcInsufVAError && v20 == -1073741670 )
    v21 = -1073740606;
  if ( v8 )
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
  v22 = v31;
  if ( *(__int64 *)(a1 + 32) <= 0x2000000 )
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v31 >> 18));
  else
    VacbLargeOffset = CcGetVacbLargeOffset(a1, v31);
  if ( VacbLargeOffset )
  {
    if ( v21 >= 0 )
    {
      CcIncrementVacbActiveCount(VacbLargeOffset);
      CcReleaseBcbLockAndVacbLock(v32, (struct _FAST_MUTEX *)a1);
      CcUnmapVacb(VacbFromFreeList, a1, v30, v26);
      v27 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(v4, VacbFromFreeList, v6);
      KeReleaseQueuedSpinLock(4uLL, v27);
      return (__int64 *)VacbLargeOffset;
    }
    goto LABEL_34;
  }
  if ( v21 < 0 )
  {
LABEL_34:
    v8 = v32;
    CcReleaseBcbLockAndVacbLock(v32, (struct _FAST_MUTEX *)a1);
    if ( v6 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
    else
      *VacbFromFreeList = 0LL;
    v25 = KeAcquireQueuedSpinLock(4uLL);
    CcSetVacbInFreeList(v4, VacbFromFreeList, v6);
    KeReleaseQueuedSpinLock(4uLL, v25);
    if ( !FsRtlIsNtstatusExpected(v21) )
      v21 = -1073741589;
    v7 = v33;
    goto LABEL_40;
  }
  if ( !SetVacb(a1, v22, (unsigned __int64)VacbFromFreeList, 0LL) )
  {
    v21 = -1073741670;
    CcUnmapVacb(VacbFromFreeList, a1, v30, v24);
    goto LABEL_34;
  }
  if ( VacbFromFreeList[1] != -1 )
    KeBugCheckEx(0x34u, 0x780uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  VacbFromFreeList[1] = a1;
  VacbFromFreeList[2] = v22;
  CcIncrementVacbActiveCount(VacbFromFreeList);
  if ( v22 >= *(_QWORD *)(a1 + 368) )
    *(_QWORD *)(a1 + 368) = v22 + 0x40000;
  ExReleasePushLockEx(a1 + 104, 0LL);
  if ( v32 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  return VacbFromFreeList;
}
