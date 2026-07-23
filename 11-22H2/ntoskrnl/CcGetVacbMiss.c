/*
 * XREFs of CcGetVacbMiss @ 0x14029EFF0
 * Callers:
 *     CcGetVirtualAddress @ 0x140264CD0 (CcGetVirtualAddress.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     CcGetVacbLargeOffset @ 0x14029EF70 (CcGetVacbLargeOffset.c)
 *     CcGetVacbFromFreeList @ 0x14029F418 (CcGetVacbFromFreeList.c)
 *     MmMapViewInSystemCache @ 0x14029F510 (MmMapViewInSystemCache.c)
 *     CcIncrementVacbActiveCount @ 0x1402A039C (CcIncrementVacbActiveCount.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1402A0950 (KxAcquireQueuedSpinLock.c)
 *     SetVacb @ 0x1402A09E8 (SetVacb.c)
 *     CcSetVacbInFreeList @ 0x1402A0AE0 (CcSetVacbInFreeList.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402A0F10 (CcReleaseBcbLockAndVacbLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x140359700 (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     CcUnmapInactiveViews @ 0x140538328 (CcUnmapInactiveViews.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     CcUnmapVacb @ 0x140721E80 (CcUnmapVacb.c)
 */

_QWORD *__fastcall CcGetVacbMiss(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r13
  unsigned int v5; // edi
  unsigned __int8 v6; // r15
  int v7; // r14d
  unsigned int v8; // r12d
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rdx
  _QWORD *ArbitraryUserPointer; // rcx
  _QWORD *VacbFromFreeList; // rdi
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  KIRQL v21; // bl
  NTSTATUS v22; // esi
  __int64 v23; // rbx
  __int64 VacbLargeOffset; // r14
  KIRQL v25; // bl
  KIRQL v26; // bl
  unsigned __int64 v28[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+8h]
  __int64 v30; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+18h]
  int v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v4 = *(_QWORD *)(a1 + 536);
  v5 = 0;
  HIDWORD(v30) = HIDWORD(a2);
  v28[0] = 0LL;
  v6 = 0;
  v29 = 0;
  LODWORD(v30) = a2 - (a2 & 0x3FFFF);
  v7 = a4;
  v8 = a3;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v12) = 4;
      else
        v12 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v12;
    }
    ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
    KxAcquireQueuedSpinLock(ArbitraryUserPointer + 8, ArbitraryUserPointer[9]);
    if ( v6 )
      v29 = v5 | 2;
    VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(v4, v6);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 8);
    if ( (_DWORD)KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = -1LL << (CurrentIrql + 1);
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)v15;
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    if ( VacbFromFreeList )
      break;
    while ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(v4 + 8), v15, 0LL, 0LL) )
    {
      v21 = KeAcquireQueuedSpinLock(4uLL);
      VacbFromFreeList = (_QWORD *)CcGetVacbFromFreeList(v4, v6);
      KeReleaseQueuedSpinLock(4uLL, v21);
      if ( VacbFromFreeList )
        goto LABEL_21;
    }
    if ( v7 == 1 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources;
    v22 = -1073741670;
LABEL_42:
    if ( v6 || v7 != 1 )
      RtlRaiseStatus(v22);
    v5 = v29;
    v6 = 1;
  }
LABEL_21:
  v28[0] = *(_QWORD *)(a1 + 32) - v30;
  if ( v28[0] > 0x40000 )
    LODWORD(v28[0]) = 0x40000;
  v22 = MmMapViewInSystemCache(*(_QWORD *)(a1 + 176), VacbFromFreeList, &v30, v28);
  if ( v8 )
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 288));
  ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
  v23 = v30;
  if ( *(__int64 *)(a1 + 32) <= 0x2000000 )
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v30 >> 18));
  else
    VacbLargeOffset = CcGetVacbLargeOffset(a1, v30);
  if ( VacbLargeOffset )
  {
    if ( v22 >= 0 )
    {
      CcIncrementVacbActiveCount(VacbLargeOffset);
      CcReleaseBcbLockAndVacbLock(v31, a1);
      CcUnmapVacb(VacbFromFreeList, a1, v29);
      v26 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(v4, VacbFromFreeList, v6);
      KeReleaseQueuedSpinLock(4uLL, v26);
      return (_QWORD *)VacbLargeOffset;
    }
    goto LABEL_36;
  }
  if ( v22 < 0 )
  {
LABEL_36:
    v8 = v31;
    CcReleaseBcbLockAndVacbLock(v31, a1);
    if ( v6 )
      ++CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources;
    else
      *VacbFromFreeList = 0LL;
    v25 = KeAcquireQueuedSpinLock(4uLL);
    CcSetVacbInFreeList(v4, VacbFromFreeList, v6);
    KeReleaseQueuedSpinLock(4uLL, v25);
    if ( !FsRtlIsNtstatusExpected(v22) )
      v22 = -1073741589;
    v7 = v32;
    goto LABEL_42;
  }
  if ( !(unsigned __int8)SetVacb(a1, v23, VacbFromFreeList, 0LL) )
  {
    v22 = -1073741670;
    CcUnmapVacb(VacbFromFreeList, a1, v29);
    goto LABEL_36;
  }
  if ( VacbFromFreeList[1] != -1LL )
    KeBugCheckEx(0x34u, 0x76BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  VacbFromFreeList[1] = a1;
  VacbFromFreeList[2] = v23;
  CcIncrementVacbActiveCount(VacbFromFreeList);
  if ( v23 >= *(_QWORD *)(a1 + 376) )
    *(_QWORD *)(a1 + 376) = v23 + 0x40000;
  ExReleasePushLockEx((__int64 *)(a1 + 104), 0LL);
  if ( v31 )
    ExReleaseFastMutex((PFAST_MUTEX)(a1 + 288));
  return VacbFromFreeList;
}
