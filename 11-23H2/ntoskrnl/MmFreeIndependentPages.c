/*
 * XREFs of MmFreeIndependentPages @ 0x14087FDF0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403762E0 (HvlStartBootLogicalProcessors.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403AA350 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x1405486B4 (HvlpInitializeHvCrashdump.c)
 *     KiFreeProcessorStacks @ 0x14056C40C (KiFreeProcessorStacks.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x14056C4F4 (KiFreeProcessorStateInitializationParameters.c)
 *     ExDeletePoolTagTable @ 0x140607290 (ExDeletePoolTagTable.c)
 *     HvpFreeBin @ 0x1407E9C28 (HvpFreeBin.c)
 *     MmAllocateIsrStack @ 0x14081D84C (MmAllocateIsrStack.c)
 *     HvlDeleteProcessor @ 0x1409413FC (HvlDeleteProcessor.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094E228 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14094F018 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14094F684 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094FB58 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MmFreeIsrStack @ 0x140A3CA28 (MmFreeIsrStack.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiCheckSlabPfnBitmap @ 0x1403249C0 (MiCheckSlabPfnBitmap.c)
 *     MiReturnPoolCharges @ 0x1403409F8 (MiReturnPoolCharges.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

void __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 *PteAddress; // rdi
  __int64 *v4; // r13
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  int v8; // r15d
  __int64 v9; // r8
  bool v10; // zf
  _OWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v15; // [rsp+B0h] [rbp+50h]
  __int64 *v16; // [rsp+B8h] [rbp+58h]

  v13 = 0LL;
  v2 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v15 = v2;
  v11[0] = v2;
  v12 = v2;
  v11[1] = 0LL;
  PteAddress = (__int64 *)MiGetPteAddress(a1);
  v16 = PteAddress;
  v4 = &PteAddress[v2];
  do
  {
    v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
    v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFFLL)
       - 0x220000000000LL;
    v6 = ZeroPte;
    v7 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v8 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)PteAddress) )
      goto LABEL_3;
    if ( MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_3;
      v10 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v10 = (ZeroPte & 1) == 0;
    }
    if ( !v10 )
      v6 = ZeroPte | 0x8000000000000000uLL;
LABEL_3:
    *PteAddress = v6;
    if ( v8 )
      MiWritePteShadow((__int64)PteAddress, v6, v9);
    if ( (unsigned int)MiCheckSlabPfnBitmap(v5, 1LL, 1) )
    {
      --*(_QWORD *)&v11[0];
      *(_QWORD *)&v12 = v12 - 1;
      MiLockAndDecrementShareCount(v5, 1);
    }
    else if ( (unsigned int)MiLockAndDecrementShareCount(v5, 1) == 3 )
    {
      ++*((_QWORD *)&v11[0] + 1);
    }
    MiLockAndDecrementShareCount(v7, 0);
    ++PteAddress;
  }
  while ( PteAddress < v4 );
  MiReleasePtes((__int64)&qword_140C69940, v16, v15);
  MiReturnPoolCharges((unsigned __int64 *)v11, 1, 0);
}
