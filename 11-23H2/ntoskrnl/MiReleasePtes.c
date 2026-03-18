/*
 * XREFs of MiReleasePtes @ 0x1402CB8E0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MmCreateKernelStack @ 0x1402716A0 (MmCreateKernelStack.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027CF60 (MmMapLockedPagesSpecifyCache.c)
 *     MiDeleteKernelStack @ 0x140283990 (MiDeleteKernelStack.c)
 *     MiReturnPteMappingSet @ 0x140284188 (MiReturnPteMappingSet.c)
 *     MiDeleteProcessShadow @ 0x14029172C (MiDeleteProcessShadow.c)
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x1402EDB50 (MmCopyMemory.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140325150 (MiUpdateImagePfnImportRelocations.c)
 *     MiMapContiguousMemory @ 0x1403359F8 (MiMapContiguousMemory.c)
 *     MmUnmapIoSpace @ 0x140335CD0 (MmUnmapIoSpace.c)
 *     MmDeleteProcessor @ 0x140617BCC (MmDeleteProcessor.c)
 *     MmMapMdl @ 0x14062F0A0 (MmMapMdl.c)
 *     MiBuildReservationCluster @ 0x1406382E4 (MiBuildReservationCluster.c)
 *     MiExtendPagingFileMaximum @ 0x140638FD4 (MiExtendPagingFileMaximum.c)
 *     MiTransferFileExtent @ 0x14063F86C (MiTransferFileExtent.c)
 *     MiDeleteKernelShadowStack @ 0x1406443C4 (MiDeleteKernelShadowStack.c)
 *     MmCreateKernelShadowStack @ 0x14064512C (MmCreateKernelShadowStack.c)
 *     MiCopyMemoryPagefileData @ 0x14065FB28 (MiCopyMemoryPagefileData.c)
 *     MiReleasePteCopyList @ 0x14066100C (MiReleasePteCopyList.c)
 *     MiFreeForkMaps @ 0x140664790 (MiFreeForkMaps.c)
 *     MiReleasePageHash @ 0x140666C3C (MiReleasePageHash.c)
 *     MiRelocateImageAgain @ 0x1406AA700 (MiRelocateImageAgain.c)
 *     MiValidateImagePfn @ 0x1406B0FF8 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x140705E50 (MmCreateProcessAddressSpace.c)
 *     MiRelocateImagePfn @ 0x1407442C0 (MiRelocateImagePfn.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14079D5E8 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiCreatePfnBitMaps @ 0x14081C29C (MiCreatePfnBitMaps.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C23C (MmAllocateIndependentPagesEx.c)
 *     MmFreeMappingAddress @ 0x14086D770 (MmFreeMappingAddress.c)
 *     MmFreeIndependentPages @ 0x14087FBB0 (MmFreeIndependentPages.c)
 *     MmFreeNonCachedMemory @ 0x140A2DB00 (MmFreeNonCachedMemory.c)
 *     MmReleaseDumpHibernateResources @ 0x140A30AB8 (MmReleaseDumpHibernateResources.c)
 *     MiUnlockEntireDriver @ 0x140A34540 (MiUnlockEntireDriver.c)
 *     MiReleaseHotPatchResources @ 0x140A3BCA0 (MiReleaseHotPatchResources.c)
 *     MmFreeIsrStack @ 0x140A3C778 (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x140A3CC88 (MiAllocateEnclaveVad.c)
 *     MiDeleteSparseRange @ 0x140A4311C (MiDeleteSparseRange.c)
 *     MiExpandPartitionIds @ 0x140A44920 (MiExpandPartitionIds.c)
 *     MiFillPerSessionProtos @ 0x140A49FAC (MiFillPerSessionProtos.c)
 *     MiDeleteEnclavePages @ 0x140AAD468 (MiDeleteEnclavePages.c)
 *     MiInitializeGapFrames @ 0x140B41EF8 (MiInitializeGapFrames.c)
 *     MiInitializePteInfo @ 0x140B46558 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140B5C1BC (MiInitializeTbFlush.c)
 *     MiCreateRetpolineBitmap @ 0x140B99900 (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B99C44 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiInitializeTbFlushStamps @ 0x140212A08 (MiInitializeTbFlushStamps.c)
 *     MiFlushTbList @ 0x140279880 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F570 (MiInsertTbFlushEntry.c)
 *     MiInsertCachedPte @ 0x1402CBB10 (MiInsertCachedPte.c)
 *     MiAttemptCoalesce @ 0x1403461E0 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x140346328 (MiReturnSystemPtes.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     memset @ 0x140435A00 (memset.c)
 *     MiCheckPteRelease @ 0x14065F2E4 (MiCheckPteRelease.c)
 */

unsigned __int64 __fastcall MiReleasePtes(__int64 a1, __int64 *a2, unsigned int a3)
{
  ULONG_PTR v3; // rbp
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v7; // rsi
  int v8; // r12d
  _QWORD *v9; // rcx
  ULONG_PTR v10; // rdx
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r10
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // r8
  bool v17; // zf
  __int64 v18; // rax
  ULONG_PTR v19; // rcx
  ULONG_PTR v20; // r10
  unsigned __int64 v21; // r8
  volatile signed __int32 *v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v25[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v24 = 0LL;
  memset(v25, 0, 0xB8uLL);
  if ( (__int64 *)a1 == &qword_140C69940 && (dword_140D1D1CC & 2) != 0 )
    MiCheckPteRelease(a2, v3);
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    BugCheckParameter4 >>= 4;
  v7 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 )
    v7 = v3;
  if ( (unsigned int)v3 < 0x200 || (__int64 *)a1 != &qword_140C69940 )
  {
    v8 = 0;
    if ( BugCheckParameter4 >= *(_QWORD *)a1 )
      goto LABEL_27;
    if ( v7 > 1 )
    {
      if ( *(_QWORD *)a1 - BugCheckParameter4 < v7 )
        goto LABEL_27;
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_QWORD *)(v12 + 8 * (BugCheckParameter4 >> 6));
      v14 = (_QWORD *)(v12 + 8 * (BugCheckParameter4 >> 6));
      v15 = (_QWORD *)(v12 + 8 * ((BugCheckParameter4 + v7 - 1) >> 6));
      if ( v14 == v15 )
      {
        v17 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4) & v13) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4;
      }
      else
      {
        if ( ((-1LL << BugCheckParameter4) & v13) != -1LL << BugCheckParameter4 )
          goto LABEL_27;
        v16 = v14 + 1;
        if ( v16 != v15 )
        {
          while ( *v16 == -1LL )
          {
            if ( ++v16 == v15 )
              goto LABEL_24;
          }
          goto LABEL_27;
        }
LABEL_24:
        v17 = (*v16 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1))) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1);
      }
      if ( v17 )
        goto LABEL_13;
    }
    else if ( v7 == 1
           && _bittest64(
                (const signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * (BugCheckParameter4 >> 6)),
                BugCheckParameter4 & 0x3F) )
    {
LABEL_13:
      if ( !(_DWORD)v3 )
        goto LABEL_16;
      goto LABEL_14;
    }
LABEL_27:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, v3, BugCheckParameter4);
  }
  v8 = 1;
LABEL_14:
  v9 = a2;
  v10 = v3;
  do
  {
    *v9++ = ZeroPte;
    --v10;
  }
  while ( v10 );
LABEL_16:
  result = MiInsertCachedPte(a1, a2, (unsigned int)v3);
  if ( !(_DWORD)result )
  {
    if ( v8 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v7);
      return MiReturnSystemPtes(a1, v8, BugCheckParameter4, (v3 + 511) & 0xFFFFFE00, 1);
    }
    else
    {
      v24 = 0LL;
      MiInitializeTbFlushStamps(&v24);
      v18 = v24;
      if ( (_DWORD)v3 )
      {
        v19 = v3;
        do
        {
          *a2++ = v18;
          --v19;
        }
        while ( v19 );
      }
      if ( qword_140C65B40 && (v18 & 0x10) == 0 )
        v18 &= ~qword_140C65B40;
      if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
      {
        v25[1] = 20LL;
        LODWORD(v25[0]) = 0;
        WORD2(v25[0]) = 0;
        v25[2] = 0LL;
        v25[3] = 0LL;
        MiInsertTbFlushEntry((__int64)v25, (__int64)((_QWORD)&a2[-v3] << 25) >> 16, v3, 0);
        MiFlushTbList((int *)v25);
      }
      v20 = BugCheckParameter4 & 0x1F;
      v21 = v7;
      v22 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
      if ( v7 + v20 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          _InterlockedAnd(v22, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v20));
          v21 = v7 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
          ++v22;
        }
        if ( v21 >= 0x20 )
        {
          v23 = v21 >> 5;
          v21 += -32LL * (v21 >> 5);
          do
          {
            *v22++ = 0;
            --v23;
          }
          while ( v23 );
        }
        if ( v21 )
          _InterlockedAnd(v22, -1 << v21);
      }
      else if ( v7 == 32 )
      {
        *v22 = 0;
      }
      else
      {
        _InterlockedAnd(v22, ~(((1 << v7) - 1) << v20));
      }
      result = v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v7);
      if ( result > 0x40000 )
        return MiAttemptCoalesce(a1, BugCheckParameter4, v7);
    }
  }
  return result;
}
