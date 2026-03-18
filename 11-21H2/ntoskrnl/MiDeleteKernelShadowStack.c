/*
 * XREFs of MiDeleteKernelShadowStack @ 0x1405A511C
 * Callers:
 *     MiDeleteCachedKernelShadowStack @ 0x1405A50AC (MiDeleteCachedKernelShadowStack.c)
 *     MmCreateKernelShadowStack @ 0x1405A5990 (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x1405A5DF0 (MmDeleteKernelShadowStack.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiValidateKernelShadowStackPage @ 0x1405A5940 (MiValidateKernelShadowStackPage.c)
 *     VslFreeKernelShadowStack @ 0x140932068 (VslFreeKernelShadowStack.c)
 */

char __fastcall MiDeleteKernelShadowStack(_QWORD *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  char *AnyMultiplexedVm; // r12
  __int64 v5; // r9
  signed __int64 v6; // r15
  signed __int64 v7; // rdi
  int v8; // r13d
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  int v11; // edx
  int v12; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  BOOL IsPfnFromSlabAllocation; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _BOOL8 v19; // rbp
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int64 v25; // r8
  struct _KPRCB *v26; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v28; // eax
  int v31; // [rsp+78h] [rbp+10h] BYREF
  __int64 v32; // [rsp+80h] [rbp+18h]

  v32 = a3;
  v31 = a2;
  v3 = (unsigned __int64)(a1 + 1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  LOBYTE(v31) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, v5);
  v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v3) >> 12) & 0xFFFFFFFFFFLL);
  v7 = v6 - 0x220000000000LL;
  MiValidateKernelShadowStackPage(v3);
  v8 = 0;
  v9 = ZeroPte;
  v10 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v6 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  *(_QWORD *)(v6 - 0x220000000000LL) = 0LL;
  if ( MiPteInShadowRange(v3) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = v11;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_8;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_8;
    }
    if ( ((unsigned __int8)ZeroPte & (unsigned __int8)v11) != 0 )
      v9 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_8:
  *(_QWORD *)v3 = v9;
  if ( v8 )
    MiWritePteShadow(v3, v9);
  if ( ((v3 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v31);
  if ( v32 )
  {
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v12 = VslFreeKernelShadowStack(v32);
      if ( v12 < 0 )
        KeBugCheckEx(0x1Au, 0x3501uLL, (ULONG_PTR)a1, v12, 0LL);
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(v6 - 0x220000000000LL);
  v31 = 0;
  v19 = !IsPfnFromSlabAllocation;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v31, v16, v17, v18);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  MiSetPfnIdentity(v6 - 0x220000000000LL, 0);
  *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v7 + 32) = 0;
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * (v6 >> 4), 2);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v19 )
  {
    v25 = v19;
    if ( (ULONG_PTR *)v10 == &MiSystemPartition )
    {
      v26 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v26->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + v19) <= 0x100 )
        {
          do
          {
            v28 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v26->CachedResidentAvailable,
                    CachedResidentAvailable + v19,
                    CachedResidentAvailable);
            v24 = (_DWORD)CachedResidentAvailable == v28;
            LODWORD(CachedResidentAvailable) = v28;
            if ( v24 )
              goto LABEL_42;
          }
          while ( v28 != -1 && (unsigned __int64)(v28 + v19) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v26->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v25 = (int)CachedResidentAvailable - 192 + (unsigned __int64)v19;
        }
      }
    }
    if ( v25 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 16960), v25);
LABEL_42:
    MiReturnCommit(v10, v19);
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 17552), 0xFFFFFFFFFFFFFFFFuLL);
  return MiReleasePtes((__int64)&unk_140C52FF0, a1, 3u);
}
