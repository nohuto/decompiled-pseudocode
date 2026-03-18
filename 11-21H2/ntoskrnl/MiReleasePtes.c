/*
 * XREFs of MiReleasePtes @ 0x1402BB6D0
 * Callers:
 *     MiMapContiguousMemory @ 0x14021538C (MiMapContiguousMemory.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiReleasePteCopyList @ 0x140250BDC (MiReleasePteCopyList.c)
 *     MiZeroLargePage @ 0x14026A28C (MiZeroLargePage.c)
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 *     MiUnmapSinglePage @ 0x14026C0E4 (MiUnmapSinglePage.c)
 *     MiZeroInParallelWorker @ 0x14026C240 (MiZeroInParallelWorker.c)
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiDeleteProcessShadow @ 0x14027D408 (MiDeleteProcessShadow.c)
 *     MiCopyToUserVa @ 0x14028DF40 (MiCopyToUserVa.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1402DAEB0 (MiUpdateImagePfnImportRelocations.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MmCreateKernelStack @ 0x1402F4B70 (MmCreateKernelStack.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiDeleteKernelStack @ 0x14033BC30 (MiDeleteKernelStack.c)
 *     MmDeleteProcessor @ 0x14057F9FC (MmDeleteProcessor.c)
 *     MmMapMdl @ 0x140592400 (MmMapMdl.c)
 *     MiCopyMemoryPagefileData @ 0x140599780 (MiCopyMemoryPagefileData.c)
 *     MiBuildReservationCluster @ 0x14059B62C (MiBuildReservationCluster.c)
 *     MiExtendPagingFileMaximum @ 0x14059BFB0 (MiExtendPagingFileMaximum.c)
 *     MiTransferFileExtent @ 0x1405A1128 (MiTransferFileExtent.c)
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 *     MmCreateKernelShadowStack @ 0x1405A5990 (MmCreateKernelShadowStack.c)
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MiScrubNodeLargePageList @ 0x1405AF6F0 (MiScrubNodeLargePageList.c)
 *     MiReturnPteMappingSet @ 0x1405B2504 (MiReturnPteMappingSet.c)
 *     MiReleasePageHash @ 0x1405BC988 (MiReleasePageHash.c)
 *     MiValidateImagePfn @ 0x1406F3408 (MiValidateImagePfn.c)
 *     MiRelocateImageAgain @ 0x1406FF49C (MiRelocateImageAgain.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407614BC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiRelocateImagePfn @ 0x1407BF070 (MiRelocateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 *     MmFreeMappingAddress @ 0x1407FA560 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x14080051C (MmReleaseDumpHibernateResources.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 *     MiCreatePfnBitMaps @ 0x14082ACF0 (MiCreatePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x14096A680 (MmFreeNonCachedMemory.c)
 *     MmFreeIndependentPages @ 0x14096ED20 (MmFreeIndependentPages.c)
 *     MiUnlockEntireDriver @ 0x140970D2C (MiUnlockEntireDriver.c)
 *     MiReleaseHotPatchResources @ 0x1409778EC (MiReleaseHotPatchResources.c)
 *     MmFreeIsrStack @ 0x1409783E8 (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x140978F40 (MiAllocateEnclaveVad.c)
 *     MiDeleteSparseRange @ 0x14097E850 (MiDeleteSparseRange.c)
 *     MiExpandPartitionIds @ 0x140981778 (MiExpandPartitionIds.c)
 *     MiDeleteEnclavePages @ 0x140A6A73C (MiDeleteEnclavePages.c)
 *     MiInitializeGapFrames @ 0x140AF6B44 (MiInitializeGapFrames.c)
 *     MiInitializePteInfo @ 0x140B04AE0 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140B09340 (MiInitializeTbFlush.c)
 *     MiCreateRetpolineBitmap @ 0x140B51F9C (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B5229C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiAttemptCoalesce @ 0x14026CB78 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x14026CE64 (MiReturnSystemPtes.c)
 *     MiInsertCachedPte @ 0x1402BBAD0 (MiInsertCachedPte.c)
 *     MiInitializeTbFlushStamps @ 0x1402CCC80 (MiInitializeTbFlushStamps.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCheckPteRelease @ 0x1405B536C (MiCheckPteRelease.c)
 */

char __fastcall MiReleasePtes(__int64 a1, _QWORD *a2, unsigned int a3)
{
  ULONG_PTR v3; // rbp
  ULONG_PTR v6; // r12
  unsigned __int64 BugCheckParameter4; // rsi
  unsigned __int64 v8; // r14
  int v9; // r13d
  __int64 v10; // rcx
  __int64 v11; // r10
  _QWORD *v12; // r8
  _QWORD *v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  _QWORD *v16; // r8
  ULONG_PTR v17; // rcx
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  ULONG_PTR v22; // rcx
  _QWORD *v23; // rbx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r9
  volatile signed __int32 *v26; // r8
  unsigned __int64 v27; // rax
  signed __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v31; // [rsp+38h] [rbp-110h] BYREF
  _QWORD v32[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v31 = 0LL;
  memset(v32, 0, 0xB8uLL);
  if ( (__int64 *)a1 == &qword_140C534C0 && (dword_140D051BC & 2) != 0 )
    MiCheckPteRelease(a2, (unsigned int)v3);
  v6 = v3;
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
    BugCheckParameter4 >>= 4;
  v8 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
    v8 = v3;
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_140C534C0 )
  {
    v9 = 1;
    goto LABEL_26;
  }
  if ( BugCheckParameter4 >= *(_QWORD *)a1 )
    goto LABEL_56;
  if ( v8 > 1 )
  {
    if ( *(_QWORD *)a1 - BugCheckParameter4 < v8 )
      goto LABEL_56;
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)(v10 + 8 * (BugCheckParameter4 >> 6));
    v12 = (_QWORD *)(v10 + 8 * (BugCheckParameter4 >> 6));
    v13 = (_QWORD *)(v10 + 8 * ((BugCheckParameter4 + v8 - 1) >> 6));
    if ( v12 == v13 )
    {
      v14 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4;
      v15 = v11 & v14;
    }
    else
    {
      if ( (v11 & (-1LL << BugCheckParameter4)) != -1LL << BugCheckParameter4 )
        goto LABEL_56;
      v16 = v12 + 1;
      if ( v16 != v13 )
      {
        while ( *v16 == -1LL )
        {
          if ( ++v16 == v13 )
            goto LABEL_23;
        }
        goto LABEL_56;
      }
LABEL_23:
      v14 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v8 - 1);
      v15 = *v16 & v14;
    }
    if ( v15 == v14 )
      goto LABEL_25;
LABEL_56:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, v3, BugCheckParameter4);
  }
  if ( v8 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_56;
LABEL_25:
  v9 = 0;
  if ( (_DWORD)v3 )
  {
LABEL_26:
    v17 = v3;
    do
    {
      *a2++ = ZeroPte;
      --v17;
    }
    while ( v17 );
  }
  v18 = 8 * v3;
  v19 = &a2[v18 / 0xFFFFFFFFFFFFFFF8uLL];
  if ( v9 )
    goto LABEL_54;
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
  {
    LODWORD(v20) = MiInsertCachedPte(a1, v19, (unsigned int)v6);
    if ( (_DWORD)v20 )
      return v20;
  }
  MiInitializeTbFlushStamps(&v31);
  v21 = v31;
  if ( (_DWORD)v6 )
  {
    v22 = v6;
    do
    {
      *v19++ = v21;
      --v22;
    }
    while ( v22 );
  }
  v23 = &v19[v18 / 0xFFFFFFFFFFFFFFF8uLL];
  if ( qword_140C50780 && (v21 & 0x10) == 0 )
    v21 &= ~qword_140C50780;
  if ( (v21 & 0xFFFFFFFF00000000uLL) == 0 )
  {
    LODWORD(v32[1]) = 20;
    v32[3] = 0LL;
    MiInsertTbFlushEntry(v32, (__int64)((_QWORD)v23 << 25) >> 16, v6, 0LL);
    MiFlushTbList(v32);
  }
  v24 = BugCheckParameter4 & 0x1F;
  v25 = v8;
  v26 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
  if ( v8 + v24 <= 0x20 )
  {
    v27 = v8;
    if ( v8 == 32 )
      *v26 = 0;
    else
      _InterlockedAnd(v26, ~(((1 << v8) - 1) << v24));
    goto LABEL_42;
  }
  if ( (BugCheckParameter4 & 0x1F) != 0 )
  {
    _InterlockedAnd(v26, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v24));
    v25 = v8 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
    ++v26;
  }
  if ( v25 >= 0x20 )
  {
    v29 = v25 >> 5;
    v25 += -32LL * (v25 >> 5);
    do
    {
      *v26++ = 0;
      --v29;
    }
    while ( v29 );
  }
  if ( !v25 )
  {
LABEL_54:
    v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v8);
    if ( v9 )
    {
      LOBYTE(v20) = MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v6 + 511) & 0xFFFFFE00, 1);
      return v20;
    }
    goto LABEL_43;
  }
  _InterlockedAnd(v26, -1 << v25);
  v27 = v8;
LABEL_42:
  v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v27);
LABEL_43:
  v20 = v8 + v28;
  if ( v20 > 0x40000 )
    LOBYTE(v20) = MiAttemptCoalesce(a1, BugCheckParameter4, v8);
  return v20;
}
