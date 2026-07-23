/*
 * XREFs of MiDeleteKernelShadowStack @ 0x140644434
 * Callers:
 *     MiDeleteCachedKernelShadowStack @ 0x1406443C4 (MiDeleteCachedKernelShadowStack.c)
 *     MmCreateKernelShadowStack @ 0x14064519C (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x140645634 (MmDeleteKernelShadowStack.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiSetPfnIdentity @ 0x1402194A8 (MiSetPfnIdentity.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiCheckSlabPfnBitmap @ 0x140324550 (MiCheckSlabPfnBitmap.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiValidateKernelShadowStackPage @ 0x14064514C (MiValidateKernelShadowStackPage.c)
 *     VslFreeKernelShadowStack @ 0x140942368 (VslFreeKernelShadowStack.c)
 */

unsigned __int64 __fastcall MiDeleteKernelShadowStack(__int64 *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r12
  char *AnyMultiplexedVm; // r13
  __int64 v6; // r9
  signed __int64 v7; // r15
  signed __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r8
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  _BOOL8 v19; // r14
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int64 v25; // r8
  struct _KPRCB *v26; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v28; // eax
  int v31; // [rsp+88h] [rbp+10h] BYREF
  __int64 v32; // [rsp+90h] [rbp+18h]
  int v33; // [rsp+98h] [rbp+20h]

  v32 = a3;
  v31 = a2;
  v3 = (unsigned __int64)(a1 + 1);
  LODWORD(v4) = 4;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  LOBYTE(v31) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0, v6);
  v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v3) >> 12) & 0xFFFFFFFFFFLL);
  v8 = v7 - 0x220000000000LL;
  MiValidateKernelShadowStackPage(v3);
  v9 = *(_QWORD *)(v7 - 0x220000000000LL + 40);
  v10 = ZeroPte;
  v33 = 0;
  v11 = *(_QWORD *)(qword_140C674C8 + 8 * ((v9 >> 43) & 0x3FF));
  *(_QWORD *)(v7 - 0x220000000000LL) = 0LL;
  if ( !MiPteInShadowRange(v3) )
  {
    v14 = v33;
    goto LABEL_9;
  }
  if ( MiPteHasShadow() )
  {
    v14 = v13;
    if ( HIBYTE(word_140C66DFC) )
      goto LABEL_9;
  }
  else
  {
    v14 = v33;
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_9;
  }
  if ( ((unsigned __int8)ZeroPte & (unsigned __int8)v13) != 0 )
    v10 = ZeroPte | 0x8000000000000000uLL;
LABEL_9:
  *(_QWORD *)v3 = v10;
  if ( v14 )
    MiWritePteShadow(v3, v10, v12);
  if ( ((v3 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v31);
  if ( v32 )
  {
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v15 = VslFreeKernelShadowStack(v32);
      if ( v15 < 0 )
        KeBugCheckEx(0x1Au, 0x3501uLL, (ULONG_PTR)a1, v15, 0LL);
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql != 2 )
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v4;
  }
  v18 = MiCheckSlabPfnBitmap(v7 - 0x220000000000LL, 1LL, 1);
  v31 = 0;
  v19 = v18 == 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v31);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  MiSetPfnIdentity(v7 - 0x220000000000LL, 0);
  *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v8 + 32) = 0;
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * (v7 >> 4), 2);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
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
  __writecr8(CurrentIrql);
  if ( v19 )
  {
    v25 = v19;
    if ( (unsigned __int16 *)v11 == MiSystemPartition )
    {
      v26 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v26->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(v19 + CachedResidentAvailable) <= 0x100 )
        {
          do
          {
            v28 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v26->CachedResidentAvailable,
                    v19 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v24 = (_DWORD)CachedResidentAvailable == v28;
            LODWORD(CachedResidentAvailable) = v28;
            if ( v24 )
              goto LABEL_45;
          }
          while ( v28 != -1 && (unsigned __int64)(v19 + v28) <= 0x100 );
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
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 17280), v25);
LABEL_45:
    MiReturnCommit(v11, v19);
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 17888), 0xFFFFFFFFFFFFFFFFuLL);
  return MiReleasePtes((__int64)&unk_140C68560, a1, 3u);
}
