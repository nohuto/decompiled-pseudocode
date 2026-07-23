/*
 * XREFs of RtlAvlRemoveNode @ 0x14028B1E0
 * Callers:
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     MiFreeCombineBlock @ 0x1402194C8 (MiFreeCombineBlock.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF30 (MiUpdateSystemProtoPtesTree.c)
 *     MiRemoveVad @ 0x14028A700 (MiRemoveVad.c)
 *     MiProcessLoaderEntry @ 0x140290C58 (MiProcessLoaderEntry.c)
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 *     MiAllocateLargeZeroPages @ 0x1402E7A70 (MiAllocateLargeZeroPages.c)
 *     MiUpdatePerSessionProto @ 0x14033ED98 (MiUpdatePerSessionProto.c)
 *     MiCombiningInProgress @ 0x14036F3DC (MiCombiningInProgress.c)
 *     MmManageFaultRange @ 0x140389C08 (MmManageFaultRange.c)
 *     MiUpdatePageFileList @ 0x140395FE0 (MiUpdatePageFileList.c)
 *     MiRemoveMappingNode @ 0x1403C3698 (MiRemoveMappingNode.c)
 *     MiRemoveFaultNode @ 0x1403D6CA8 (MiRemoveFaultNode.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x14055F8E0 (IopMcRemoveMdlPagesFromTable.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405A6BF0 (PsAdjustBasicEnclaveThreadList.c)
 *     MiFreeMdlTracker @ 0x14061CD7C (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14061D938 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x140620624 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x140621A64 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnGood @ 0x140622344 (MiMarkHugePfnGood.c)
 *     MiRemovePendingBadPageNode @ 0x14062AE58 (MiRemovePendingBadPageNode.c)
 *     MiDeleteKernelStackNode @ 0x14062D23C (MiDeleteKernelStackNode.c)
 *     MiDeleteStaleCacheMaps @ 0x14062DF20 (MiDeleteStaleCacheMaps.c)
 *     MiUnlinkSessionList @ 0x140637BEC (MiUnlinkSessionList.c)
 *     MiInsertCopyExtents @ 0x14063E36C (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14063E91C (MiMergeCopyExtents.c)
 *     MiActOnPartitionNodePages @ 0x1406585D0 (MiActOnPartitionNodePages.c)
 *     MiClearRangeInPartitionTree @ 0x14065976C (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x140659944 (MiDeletePartitionPageNodes.c)
 *     MiDeletePartitionResources @ 0x1406599D8 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14065A3E8 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14065A9D0 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x14065B460 (MiMergePageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x14065B6DC (MiPartitionDeleteMemoryNode.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14066445C (MiDeleteDeferredCloneDescriptors.c)
 *     MiReplaceSystemProtoPtesNode @ 0x14066A298 (MiReplaceSystemProtoPtesNode.c)
 *     MiProcessCrcList @ 0x1406B0300 (MiProcessCrcList.c)
 *     MiSectionDelete @ 0x140721DC0 (MiSectionDelete.c)
 *     MiRemoveSharedCommitNode @ 0x1407225A0 (MiRemoveSharedCommitNode.c)
 *     ExpWnfDeleteNameInstance @ 0x1407C9910 (ExpWnfDeleteNameInstance.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409AEF1C (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x1409B6A00 (PsCallEnclave.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x1409C2984 (RtlRemoveDynamicEnforcedAddressRange.c)
 *     MiDeleteFileExtentList @ 0x140A340C0 (MiDeleteFileExtentList.c)
 *     MiDeleteHotPatchRecord @ 0x140A36B14 (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x140A37DF0 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140A38094 (MiInsertSecureImageActivePatch.c)
 *     MiUnloadHotPatch @ 0x140A3C1E4 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x140A3C330 (MiUnloadHotPatchForUserSid.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140A42328 (MiRemoveUserPhysicalPagesView.c)
 *     MiHotAddPartitionMemory @ 0x140A44F50 (MiHotAddPartitionMemory.c)
 *     MiInitializeDriverPtes @ 0x140B5DF50 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x140250010 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r10
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // r8
  char v10; // al
  _BYTE *v11; // rdi
  unsigned __int8 v12; // bl
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  bool v15; // zf
  _QWORD *v16; // r10
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // r10
  __int64 v20; // rbx
  __int64 v21; // r8
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rbp
  char v24; // r10
  __int64 v25; // r11
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rbx
  char v33; // r9
  unsigned __int8 v34; // cl

  v2 = *a2;
  v4 = a2[1];
  v5 = v4;
  if ( *a2 )
    v5 = *a2;
  v7 = 0LL;
  if ( v2 )
    v7 = a2[1];
  if ( !v7 )
  {
    v8 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v5 )
    {
      if ( *(unsigned __int64 **)(v5 + 16) != a2 )
        goto LABEL_77;
      *(_QWORD *)(v5 + 16) = v8;
    }
    if ( v8 )
    {
      if ( *(unsigned __int64 **)(v8 + 8) == a2 )
      {
        v9 = 3;
        *(_QWORD *)(v8 + 8) = v5;
        goto LABEL_11;
      }
      if ( *(unsigned __int64 **)v8 == a2 )
      {
        v9 = 1;
        *(_QWORD *)v8 = v5;
        goto LABEL_11;
      }
    }
    else if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v5;
      return v7;
    }
LABEL_77:
    __fastfail(0x1Du);
  }
  if ( (a2[2] & 3) == 3 )
  {
    v31 = *(_QWORD **)(v2 + 8);
    v17 = *a2;
    v8 = *a2;
    v18 = 0;
    if ( v31 )
    {
      v18 = 1;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v31;
        v31 = (_QWORD *)v31[1];
      }
      while ( v31 );
    }
    v19 = *(_QWORD *)v17;
  }
  else
  {
    v16 = *(_QWORD **)v4;
    v17 = a2[1];
    v8 = v17;
    v18 = 1;
    if ( *(_QWORD *)v4 )
    {
      v18 = 0;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v16;
        v16 = (_QWORD *)*v16;
      }
      while ( v16 );
    }
    v19 = *(_QWORD *)(v17 + 8);
  }
  *(_QWORD *)v17 = v2;
  *(_QWORD *)(v17 + 8) = v4;
  v20 = *(_QWORD *)(v2 + 16);
  if ( (unsigned __int64 *)(v20 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v2 + 16) = v17 | v20 & 3;
  v21 = *(_QWORD *)(v4 + 16);
  if ( (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v4 + 16) = v17 | v21 & 3;
  if ( (*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_77;
  *(_QWORD *)(v8 + 8LL * v18) = v19;
  if ( v19 )
  {
    if ( *(_QWORD *)(v19 + 16) != v17 )
      goto LABEL_77;
    *(_QWORD *)(v19 + 16) = v8;
  }
  *(_QWORD *)(v17 + 16) = a2[2];
  v9 = 3;
  if ( !v18 )
    v9 = 1;
  v22 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v22 )
  {
    if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v17;
      goto LABEL_11;
    }
    goto LABEL_77;
  }
  v30 = 0LL;
  if ( *(unsigned __int64 **)(v22 + 8) == a2 )
    v30 = 8LL;
  if ( *(unsigned __int64 **)(v30 + v22) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v30 + v22) = v17;
  while ( 1 )
  {
LABEL_11:
    v10 = *(_BYTE *)(v8 + 16);
    v11 = (_BYTE *)(v8 + 16);
    v12 = v10 & 3;
    if ( (v10 & 3) == ((unsigned __int8)v9 ^ 2) )
    {
      LOBYTE(v7) = v10 & 0xFC;
      *v11 = v7;
      v13 = *(_QWORD *)v11;
      goto LABEL_16;
    }
    if ( !v12 )
    {
      LOBYTE(v7) = v9 | v10 & 0xFC;
      *v11 = v7;
      return v7;
    }
    v13 = *(_QWORD *)v11;
    v23 = *(_QWORD *)v8;
    if ( v9 == 1 )
      v23 = *(_QWORD *)(v8 + 8);
    v24 = *(_BYTE *)(v23 + 16) & 3;
    if ( v24 != ((unsigned __int8)v9 ^ 2) )
      break;
    v7 = RtlpTreeDoubleRotateNodes(a1, v8, v23, v9 == 1);
    *v11 &= 0xFCu;
    v8 = v7;
    v33 = *(_BYTE *)(v23 + 16) & 0xFC;
    *(_BYTE *)(v23 + 16) = v33;
    v34 = *(_BYTE *)(v7 + 16);
    LODWORD(v7) = v34 & 3;
    if ( v12 == (_DWORD)v7 )
    {
      *v11 ^= (*v11 ^ v12 ^ 0xFE) & 3;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
    else
    {
      if ( v12 == ((v34 ^ 0xFE) & 3) )
        *(_BYTE *)(v23 + 16) = v12 | v33;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
LABEL_16:
    v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v14 )
      return v7;
    v15 = *(_QWORD *)(v14 + 8) == v8;
    v9 = 3;
    v8 = v14;
    if ( !v15 )
      v9 = 1;
  }
  if ( (*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_77;
  v25 = 8LL;
  if ( v9 != 1 )
    v25 = 0LL;
  if ( *(_QWORD *)(v25 + v8) != v23 )
    goto LABEL_77;
  v26 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v26 )
  {
    if ( *(_QWORD *)(v26 + 8) == v8 )
    {
      *(_QWORD *)(v26 + 8) = v23;
    }
    else
    {
      if ( *(_QWORD *)v26 != v8 )
        goto LABEL_77;
      *(_QWORD *)v26 = v23;
    }
  }
  else
  {
    if ( *a1 != v8 )
      goto LABEL_77;
    *a1 = v23;
  }
  v27 = v26 | *(_DWORD *)(v23 + 16) & 3;
  v28 = 0LL;
  *(_QWORD *)(v23 + 16) = v27;
  if ( v9 != 1 )
    v28 = 8LL;
  v29 = *(_QWORD *)(v28 + v23);
  if ( v29 )
  {
    v32 = *(_QWORD *)(v29 + 16);
    if ( (v32 & 0xFFFFFFFFFFFFFFFCuLL) != v23 )
      goto LABEL_77;
    *(_QWORD *)(v29 + 16) = v8 | v32 & 3;
  }
  *(_QWORD *)(v25 + v8) = v29;
  *(_QWORD *)(v28 + v23) = v8;
  *(_QWORD *)v11 = v23 | *(_DWORD *)v11 & 3;
  LOBYTE(v7) = *(_BYTE *)(v23 + 16) & 0xFC;
  if ( v24 )
  {
    *(_BYTE *)(v23 + 16) = v7;
    v8 = v23;
    *v11 &= 0xFCu;
    goto LABEL_16;
  }
  *(_BYTE *)(v23 + 16) = v7 | (v9 ^ 0xFE) & 3;
  return v7;
}
