/*
 * XREFs of MiGetProtoPteAddress @ 0x140319600
 * Callers:
 *     MiPteNeedsCommitCharge @ 0x1402336A8 (MiPteNeedsCommitCharge.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiIsCfgBitMapPageShared @ 0x1402810B0 (MiIsCfgBitMapPageShared.c)
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiZeroFault @ 0x1402AD610 (MiZeroFault.c)
 *     MiCountSharedPages @ 0x1402D0500 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiExpandSharedZeroCluster @ 0x1402E7400 (MiExpandSharedZeroCluster.c)
 *     MiResolveSharedZeroFault @ 0x140317AB0 (MiResolveSharedZeroFault.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x140319160 (MiGetPageProtection.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiSetReadOnlyOnSectionView @ 0x14033A030 (MiSetReadOnlyOnSectionView.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiCheckUserVirtualAddress @ 0x140353858 (MiCheckUserVirtualAddress.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiComputeImageVadCommitCharge @ 0x14057FF58 (MiComputeImageVadCommitCharge.c)
 *     MiUpControlAreaRefs @ 0x14058C330 (MiUpControlAreaRefs.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140593E88 (MiUpdatePrivateDemandZeroView.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 *     MiGetLargeVadMappingIndex @ 0x1405A73A0 (MiGetLargeVadMappingIndex.c)
 *     MiMakePerSessionProtoPte @ 0x1405BBA5C (MiMakePerSessionProtoPte.c)
 *     MiGetClusterPage @ 0x1405C37D0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 *     MiCommitPagefileBackedSection @ 0x1406A3E60 (MiCommitPagefileBackedSection.c)
 *     MiCfgMarkValidEntries @ 0x140753C58 (MiCfgMarkValidEntries.c)
 *     MiIsRangeFullyCommitted @ 0x1407BBF50 (MiIsRangeFullyCommitted.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     MmFlushVirtualMemory @ 0x1407F0478 (MmFlushVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x14096CB14 (MiFillMapFileInfo.c)
 *     MiCloneLargeFileOnlyVad @ 0x14096FEDC (MiCloneLargeFileOnlyVad.c)
 *     MiCapturePartialVadSubsections @ 0x14097EB90 (MiCapturePartialVadSubsections.c)
 *     MiDeletePartialCloneVads @ 0x140980B94 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetSharedProtos @ 0x140256DF8 (MiGetSharedProtos.c)
 *     MiLocateSubsectionNode @ 0x140287180 (MiLocateSubsectionNode.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  _QWORD *SubsectionNode; // rax
  unsigned int SessionId; // eax

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 || (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) & 0x8000000) == 0 )
  {
    v8 = a2 - v7;
    if ( (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3 >= v8 && (a3 & 4) == 0 )
    {
      *a4 = *(_QWORD *)(a1 + 72);
      return *(_QWORD *)(a1 + 80) + 8 * v8;
    }
  }
  v9 = 0;
  *a4 = 0LL;
  v10 = *(_QWORD *)(a1 + 72);
  v11 = *(_QWORD *)v10;
  v12 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(v10 + 8)) >> 3) - v7;
  if ( !*(_QWORD *)(*(_QWORD *)v10 + 64LL) )
  {
    if ( (*(_DWORD *)(v11 + 56) & 0x1000) != 0 || *(_DWORD *)(v10 + 48) >= 0x40000000u )
    {
      v19 = 0x100000LL;
      if ( *(_DWORD *)(v10 + 48) >= 0x40000000u )
        v19 = 0x200000LL;
      v20 = v19 >> 3;
      if ( v20 == 0x20000 )
      {
        v21 = v12 >> 17;
        v12 &= 0x1FFFFu;
      }
      else
      {
        v21 = v12 / v20;
        v12 %= v20;
      }
      v22 = (unsigned int)v21 + 1LL;
      if ( !v12 )
        v22 = (unsigned int)v21;
      if ( v22 > *(unsigned int *)(v11 + 96) )
        return 0LL;
      v10 += 88 * v21;
      if ( v12 >= *(unsigned int *)(v10 + 44) )
        return 0LL;
    }
    else if ( v12 >= *(unsigned int *)(v10 + 44) )
    {
      return 0LL;
    }
    if ( v10 )
    {
      *a4 = v10;
      v17 = *(_QWORD *)(v10 + 8);
      if ( !v17 )
        return 0LL;
      goto LABEL_13;
    }
    return 0LL;
  }
  v13 = *(unsigned int *)(v10 + 44);
  v14 = 0LL;
  v15 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(v10 + 8)) >> 3) - v7;
  v16 = *(_QWORD *)(a1 + 72);
  if ( v12 < v13 )
  {
LABEL_10:
    v12 = v15;
    v10 = v16;
  }
  else
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v16 + 16);
      v15 -= v13;
      if ( ++v14 == 3 && (*(_DWORD *)(v11 + 56) & 0x20) == 0 )
        break;
      if ( !v16 )
      {
        if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 )
          return 0LL;
        break;
      }
      v13 = *(unsigned int *)(v16 + 44);
      if ( v15 < v13 )
        goto LABEL_10;
    }
    v23 = ((*(unsigned int *)(v10 + 36) | ((unsigned __int64)(*(_WORD *)(v10 + 32) & 0xFFC0) << 26)) + v12) << 12;
    if ( (a3 & 1) != 0 )
      v9 = 1;
    SubsectionNode = MiLocateSubsectionNode(*(_QWORD *)v10, v23, v9);
    v10 = (__int64)SubsectionNode;
    if ( !SubsectionNode )
      return 0LL;
    v12 = (v23 >> 12)
        - (*((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26));
  }
  if ( v12 >= *(_DWORD *)(v10 + 44) - (*(_DWORD *)(v10 + 52) & 0x3FFFFFFFu) )
    return 0LL;
  v17 = *(_QWORD *)(v10 + 8);
  *a4 = v10;
LABEL_13:
  if ( (*(_BYTE *)(v10 + 34) & 2) != 0 && (*(_DWORD *)(v11 + 56) & 0x8000000) != 0 && (a3 & 2) == 0 )
  {
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v17 = *(_QWORD *)(MiGetSharedProtos(v11, SessionId, v10) + 72);
  }
  return v17 + 8 * v12;
}
