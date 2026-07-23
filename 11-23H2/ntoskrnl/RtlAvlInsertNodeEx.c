/*
 * XREFs of RtlAvlInsertNodeEx @ 0x140288350
 * Callers:
 *     MiSessionInsertImage @ 0x14020AE64 (MiSessionInsertImage.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF30 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertVad @ 0x140287F20 (MiInsertVad.c)
 *     MiProcessLoaderEntry @ 0x140290C58 (MiProcessLoaderEntry.c)
 *     MiZeroLocalPages @ 0x1402CF7D0 (MiZeroLocalPages.c)
 *     MiInsertSubsectionNode @ 0x1402E40B8 (MiInsertSubsectionNode.c)
 *     MiBeginPageAccessor @ 0x1402E82C4 (MiBeginPageAccessor.c)
 *     MiActivateCombineBlock @ 0x1402ED4C0 (MiActivateCombineBlock.c)
 *     MiReferenceIoPages @ 0x140336790 (MiReferenceIoPages.c)
 *     MiUpdatePerSessionProto @ 0x14033ED98 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x140369D78 (MiFlowThroughInsertNode.c)
 *     MiInsertSessionWorkingSet @ 0x14036E56C (MiInsertSessionWorkingSet.c)
 *     MiCombiningInProgress @ 0x14036F3DC (MiCombiningInProgress.c)
 *     MmManageFaultRange @ 0x140389C08 (MmManageFaultRange.c)
 *     MiUpdatePageFileList @ 0x140395FE0 (MiUpdatePageFileList.c)
 *     MiInsertMappingNode @ 0x1403C2954 (MiInsertMappingNode.c)
 *     IopMcAddMdlPagesToTable @ 0x14055F1F0 (IopMcAddMdlPagesToTable.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405A6BF0 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405A6FC0 (PsLoadVsmEnclaveData.c)
 *     MiAddMdlTracker @ 0x14061CA3C (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14061D938 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x140620624 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140621B68 (MiMarkHugePfnBad.c)
 *     MiAddPendingBadPageNode @ 0x140629C38 (MiAddPendingBadPageNode.c)
 *     MiCheckLostBadPageNode @ 0x140629DF4 (MiCheckLostBadPageNode.c)
 *     MiCreateKernelStackNode @ 0x14062D118 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x14062E9AC (MiMakeIoRangePermanent.c)
 *     MiInsertExtentList @ 0x14063E418 (MiInsertExtentList.c)
 *     MiActOnPartitionNodePages @ 0x1406585D0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14065906C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1406599D8 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14065A3E8 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14065A9D0 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x14065B460 (MiMergePageNodes.c)
 *     MiInsertClone @ 0x14066565C (MiInsertClone.c)
 *     MiReplaceSystemProtoPtesNode @ 0x14066A298 (MiReplaceSystemProtoPtesNode.c)
 *     MiProcessCrcList @ 0x1406B0300 (MiProcessCrcList.c)
 *     ExpWnfCreateNameInstance @ 0x140711A04 (ExpWnfCreateNameInstance.c)
 *     MiInsertSharedCommitNode @ 0x140722220 (MiInsertSharedCommitNode.c)
 *     MiFinishCreateSection @ 0x140722F30 (MiFinishCreateSection.c)
 *     PsCallEnclave @ 0x1409B6A00 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409C275C (RtlAddDynamicEHContinuationTarget.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1409C2808 (RtlAddDynamicEnforcedAddressRange.c)
 *     MiInsertHotPatchRecord @ 0x140A37DF0 (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140A37F80 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140A38094 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140A385A8 (MiLoadHotPatchForUserSid.c)
 *     MiAweViewInserter @ 0x140A4156C (MiAweViewInserter.c)
 *     MiFindLargePageMemory @ 0x140A49A18 (MiFindLargePageMemory.c)
 *     MiCreateEnclaveRegions @ 0x140B45444 (MiCreateEnclaveRegions.c)
 *     MiInitializeDriverPtes @ 0x140B5DF50 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x140250010 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  __int64 v5; // rax
  bool v6; // r9
  char v8; // r8
  char v9; // bl
  unsigned int v10; // r9d
  __int64 v11; // r10
  _QWORD *v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // r9
  __int64 v17; // rcx

  LOBYTE(v5) = 0;
  v6 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = a2;
  if ( !a2 )
  {
    *a1 = a4;
    return v5;
  }
  LOBYTE(v5) = 2 * a3;
  *(_QWORD *)(a2 + 8LL * a3) = a4;
  v8 = (-1 - 2 * a3) & 3;
  v9 = *(_BYTE *)(a2 + 16) & 3;
  if ( v9 )
  {
LABEL_5:
    if ( v9 != v8 )
    {
      *(_BYTE *)(a2 + 16) &= 0xFCu;
      return v5;
    }
    if ( (*(_BYTE *)(a4 + 16) & 3) != v9 )
    {
      v5 = RtlpTreeDoubleRotateNodes(a1, a2, a4, v6);
      *(_BYTE *)(v15 + 16) &= 0xFCu;
      v16 = *(_BYTE *)(a4 + 16) & 0xFC;
      *(_BYTE *)(a4 + 16) = v16;
      if ( v9 == (*(_BYTE *)(v5 + 16) & 3) )
      {
        *(_BYTE *)(v15 + 16) ^= (*(_BYTE *)(v15 + 16) ^ v9 ^ 0xFE) & 3;
        *(_BYTE *)(v5 + 16) &= 0xFCu;
      }
      else
      {
        if ( v9 == ((*(_BYTE *)(v5 + 16) ^ 0xFE) & 3) )
          *(_BYTE *)(a4 + 16) = v9 | v16;
        *(_BYTE *)(v5 + 16) &= 0xFCu;
      }
      return v5;
    }
    v10 = !v6;
    if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v11 = v10;
      v12 = (_QWORD *)(a2 + 8 * (v10 ^ 1LL));
      if ( *v12 == a4 )
      {
        v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v13 )
        {
          if ( *(_QWORD *)(v13 + 8) == a2 )
          {
            *(_QWORD *)(v13 + 8) = a4;
          }
          else
          {
            if ( *(_QWORD *)v13 != a2 )
              goto LABEL_28;
            *(_QWORD *)v13 = a4;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_28;
          *a1 = a4;
        }
        *(_QWORD *)(a4 + 16) = v13 | *(_DWORD *)(a4 + 16) & 3;
        v14 = *(_QWORD *)(a4 + 8 * v11);
        if ( !v14 )
        {
LABEL_13:
          *v12 = v14;
          *(_QWORD *)(a4 + 8 * v11) = a2;
          v5 = a4 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v5;
          *(_BYTE *)(a4 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
          return v5;
        }
        v17 = *(_QWORD *)(v14 + 16);
        if ( (v17 & 0xFFFFFFFFFFFFFFFCuLL) == a4 )
        {
          *(_QWORD *)(v14 + 16) = a2 | v17 & 3;
          goto LABEL_13;
        }
      }
    }
LABEL_28:
    __fastfail(0x1Du);
  }
  while ( 1 )
  {
    a4 = a2;
    LOBYTE(v5) = v8 | *(_BYTE *)(a2 + 16) & 0xFC;
    *(_BYTE *)(a2 + 16) = v5;
    a2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return v5;
    v6 = *(_QWORD *)a2 != a4;
    LOBYTE(v5) = 2 * v6;
    v8 = (-1 - 2 * v6) & 3;
    v9 = *(_BYTE *)(a2 + 16) & 3;
    if ( v9 )
      goto LABEL_5;
  }
}
