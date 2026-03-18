/*
 * XREFs of MiMarkBootGuardPage @ 0x14081FBC8
 * Callers:
 *     MmAllocateIsrStack @ 0x14081FAFC (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140B49AB4 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x14020B9E4 (MiPartitionIdToPointer.c)
 *     MiLockAndDecrementShareCount @ 0x140211BCC (MiLockAndDecrementShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiReturnResident @ 0x140292CF0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     KeFlushSingleTb @ 0x1402EB0C4 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 */

void __fastcall MiMarkBootGuardPage(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int16 *v6; // rsi
  int v7; // r14d
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 1) == 0 )
    return;
  v2 = (__int64)(a1 << 25) >> 16;
  v10 = MI_READ_PTE_LOCK_FREE(a1);
  v3 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  v4 = 48 * (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v5 = ZeroPte;
  v6 = (unsigned __int16 *)MiPartitionIdToPointer((*(_QWORD *)(v3 + 40) >> 43) & 0x3FF);
  v7 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( MiPteHasShadow() )
    {
      v7 = 1;
      if ( HIBYTE(word_140C66DFC) )
        goto LABEL_3;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_3;
    }
    if ( (ZeroPte & 1) != 0 )
      v5 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_3:
  *(_QWORD *)a1 = v5;
  if ( v7 )
    MiWritePteShadow(a1, v5, v8);
  KeFlushSingleTb(v2, 0, 1u);
  v9 = MiLockAndDecrementShareCount(v3, 1);
  MiLockAndDecrementShareCount(v4, 0);
  MiReturnResident((__int64)v6, 1uLL);
  if ( v9 != 3 )
    MiReturnCommit((__int64)v6, 1LL);
  if ( v6 == MiSystemPartition )
  {
    if ( (unsigned int)MiGetSystemRegionType(v2) == 14 )
      _InterlockedExchangeAdd64(&qword_140C69AC8, 0xFFFFFFFFFFFFFFFFuLL);
    else
      --qword_140C69AA8;
  }
}
