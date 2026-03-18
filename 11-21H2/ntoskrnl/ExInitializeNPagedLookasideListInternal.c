/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x140250C50
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x140250C10 (ExInitializeNPagedLookasideList.c)
 *     VfObjectContextInit @ 0x140A83574 (VfObjectContextInit.c)
 *     VfHalVerifierInitialize @ 0x140A863B8 (VfHalVerifierInitialize.c)
 *     VfDeadlockInitialize @ 0x140A98170 (VfDeadlockInitialize.c)
 *     ViIovInitialization @ 0x140A9B2E4 (ViIovInitialization.c)
 *     VfWdInit @ 0x140A9D00C (VfWdInit.c)
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     CcInitializeCacheManager @ 0x140AFC9DC (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 *     VfInitBootDriversLoaded @ 0x140B0DBD4 (VfInitBootDriversLoaded.c)
 *     WmipInitializeRegistration @ 0x140B231D8 (WmipInitializeRegistration.c)
 *     PopInitializeIrpWorkers @ 0x140B2D120 (PopInitializeIrpWorkers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExInitializeNPagedLookasideListInternal(
        __int64 a1,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PVOID P, ULONG Tag),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  void (__stdcall *v12)(PVOID, ULONG); // rax
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_WORD *)(a1 + 18) = 256;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  if ( !a2 )
    a2 = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = a4;
  v12 = ExFreePoolWithTag;
  *(_QWORD *)(a1 + 48) = a2;
  if ( a3 )
    v12 = a3;
  *(_QWORD *)(a1 + 56) = v12;
  *(_QWORD *)(a1 + 80) = 0LL;
  v13 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v14 = (_QWORD *)qword_140C116E8;
  v15 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_140C116E8 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v15 = &ExNPagedLookasideListHead;
  v15[1] = v14;
  *v14 = v15;
  qword_140C116E8 = (__int64)v15;
  KxReleaseSpinLock(&ExNPagedLookasideLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v13 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v13);
  return result;
}
