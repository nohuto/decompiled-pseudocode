/*
 * XREFs of MiInitializeDynamicBitmap @ 0x14081CA74
 * Callers:
 *     MiBuildDynamicRegion @ 0x1403763AC (MiBuildDynamicRegion.c)
 *     MiCreatePfnBitMaps @ 0x14081C56C (MiCreatePfnBitMaps.c)
 *     MiInitializeSystemPtes @ 0x140B4420C (MiInitializeSystemPtes.c)
 *     MiInitializeMirroring @ 0x140B45F30 (MiInitializeMirroring.c)
 *     MiInitializePteInfo @ 0x140B46558 (MiInitializePteInfo.c)
 *     MiCreateRetpolineBitmap @ 0x140B99900 (MiCreateRetpolineBitmap.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14020B280 (MiMakeZeroedPageTables.c)
 *     MiPartitionIdToPointer @ 0x14020B9C4 (MiPartitionIdToPointer.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x1402DF32C (MiSetPfnLink.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiReturnPfnList @ 0x140376524 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x1403765EC (MiReturnSplitPageCharges.c)
 *     MiUnlockPageTable @ 0x140376678 (MiUnlockPageTable.c)
 *     MiLockPageTable @ 0x140376690 (MiLockPageTable.c)
 *     MiTransformValidPteInPlace @ 0x1403C335C (MiTransformValidPteInPlace.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 PteAddress; // r14
  unsigned __int64 v8; // r15
  int SystemRegionType; // eax
  int v10; // ecx
  __int64 v11; // rdx
  signed __int64 v12; // rsi
  char *AnyMultiplexedVm; // rbp
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 ValidPte; // rdi
  bool v17; // cl
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // eax
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // [rsp+20h] [rbp-78h]
  int v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h]
  __int64 v31; // [rsp+38h] [rbp-60h] BYREF
  __int64 v32; // [rsp+40h] [rbp-58h]
  unsigned __int8 v36; // [rsp+B8h] [rbp+20h]

  v31 = 0LL;
  PteAddress = MiGetPteAddress(a2);
  v8 = ((unsigned __int64)(v5 + 7) >> 15) + (((v6 & 0xFFF) + 4095 + (((unsigned __int64)(v5 + 7) >> 3) & 0xFFF)) >> 12);
  SystemRegionType = MiGetSystemRegionType(v6);
  v10 = 1;
  if ( SystemRegionType != 1 )
    v10 = 9;
  v29 = v10;
  if ( (a4 & 1) == 0 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, (int)PteAddress + 8 * ((int)v8 - 1), 1, v10) )
    return 0LL;
  v30 = 0LL;
  v32 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    v11 = qword_140C69710;
    v12 = qword_140C69780;
  }
  else
  {
    v11 = qword_140C696F8;
    v12 = qword_140C69790;
  }
  AnyMultiplexedVm = 0LL;
  v36 = 17;
  v14 = 0LL;
  v15 = 0LL;
  ValidPte = MiMakeValidPte(PteAddress, v11, 536870913LL);
  if ( !v8 )
    goto LABEL_17;
  v17 = (a4 & 4) != 0;
  v28 = v17;
  do
  {
    if ( (PteAddress & 0xFFF) == 0 && v17 && v8 - v15 >= 0x200 )
    {
      v22 = MiGetPteAddress(PteAddress);
      if ( !(_DWORD)InitializationPhase )
      {
LABEL_22:
        v31 = MI_READ_PTE_LOCK_FREE(v22);
        MiTransformValidPteInPlace((volatile signed __int64 *)v22, v22, v12, 1);
        v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31);
        MiSetPfnLink((_QWORD *)(48 * ((v23 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), v30);
        v30 = v24;
        v32 = MiPartitionIdToPointer((*(_QWORD *)(v24 + 40) >> 43) & 0x3FF);
        v15 += 511LL;
        PteAddress = (__int64)((v22 << 25) + 0x10000000) >> 16;
        goto LABEL_15;
      }
      if ( !AnyMultiplexedVm )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
        v36 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      }
      if ( v14 )
      {
        if ( (v22 & 0xFFF) != 0 )
          goto LABEL_22;
        MiUnlockPageTable((__int64)AnyMultiplexedVm, v14);
      }
      v14 = MiGetPteAddress(v22);
      MiLockPageTable((__int64)AnyMultiplexedVm, v14, v26, v27);
      goto LABEL_22;
    }
    v18 = ValidPte;
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( MiPteHasShadow() )
      {
        v20 = 1;
        if ( !HIBYTE(word_140C66CFC) && (ValidPte & 1) != 0 )
          v18 = ValidPte | 0x8000000000000000uLL;
        goto LABEL_12;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        v18 = ValidPte | 0x8000000000000000uLL;
      }
    }
    v20 = 0;
LABEL_12:
    *(_QWORD *)PteAddress = v18;
    if ( v20 )
      MiWritePteShadow(PteAddress, v18, v19);
    PteAddress += 8LL;
LABEL_15:
    v17 = v28;
    ++v15;
  }
  while ( v15 < v8 );
  if ( AnyMultiplexedVm )
  {
    if ( v14 )
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v14);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v36);
  }
LABEL_17:
  *a1 = a3;
  a1[1] = a2;
  if ( v30 )
  {
    v25 = MiReturnPfnList(v30);
    MiReturnSplitPageCharges(v32, v25, v29);
  }
  return 1LL;
}
