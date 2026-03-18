/*
 * XREFs of RtlAvlInsertNodeEx @ 0x1402880C0
 * Callers:
 *     MiSessionInsertImage @ 0x14020AE64 (MiSessionInsertImage.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF30 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertVad @ 0x140287C90 (MiInsertVad.c)
 *     MiProcessLoaderEntry @ 0x1402909C8 (MiProcessLoaderEntry.c)
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiInsertSubsectionNode @ 0x1402E3E28 (MiInsertSubsectionNode.c)
 *     MiBeginPageAccessor @ 0x1402E8034 (MiBeginPageAccessor.c)
 *     MiActivateCombineBlock @ 0x1402ED230 (MiActivateCombineBlock.c)
 *     MiReferenceIoPages @ 0x140336500 (MiReferenceIoPages.c)
 *     MiUpdatePerSessionProto @ 0x14033EB08 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x140369BD8 (MiFlowThroughInsertNode.c)
 *     MiInsertSessionWorkingSet @ 0x14036E3CC (MiInsertSessionWorkingSet.c)
 *     MiCombiningInProgress @ 0x14036F23C (MiCombiningInProgress.c)
 *     MmManageFaultRange @ 0x140389A28 (MmManageFaultRange.c)
 *     MiUpdatePageFileList @ 0x140395E00 (MiUpdatePageFileList.c)
 *     MiInsertMappingNode @ 0x1403C2774 (MiInsertMappingNode.c)
 *     IopMcAddMdlPagesToTable @ 0x14055EB30 (IopMcAddMdlPagesToTable.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405A6680 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405A6A50 (PsLoadVsmEnclaveData.c)
 *     MiAddMdlTracker @ 0x14061C4EC (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14061D3E8 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x1406200D4 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140621618 (MiMarkHugePfnBad.c)
 *     MiAddPendingBadPageNode @ 0x1406296E8 (MiAddPendingBadPageNode.c)
 *     MiCheckLostBadPageNode @ 0x1406298A4 (MiCheckLostBadPageNode.c)
 *     MiCreateKernelStackNode @ 0x14062CBC8 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x14062E45C (MiMakeIoRangePermanent.c)
 *     MiInsertExtentList @ 0x14063DEC8 (MiInsertExtentList.c)
 *     MiActOnPartitionNodePages @ 0x140658080 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x140658B1C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x140659488 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x140659E98 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14065A480 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x14065AF10 (MiMergePageNodes.c)
 *     MiInsertClone @ 0x14066510C (MiInsertClone.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140669D48 (MiReplaceSystemProtoPtesNode.c)
 *     MiProcessCrcList @ 0x1406B02D0 (MiProcessCrcList.c)
 *     ExpWnfCreateNameInstance @ 0x1407117F4 (ExpWnfCreateNameInstance.c)
 *     MiInsertSharedCommitNode @ 0x140722020 (MiInsertSharedCommitNode.c)
 *     MiFinishCreateSection @ 0x140722D30 (MiFinishCreateSection.c)
 *     PsCallEnclave @ 0x1409B6800 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409C255C (RtlAddDynamicEHContinuationTarget.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1409C2608 (RtlAddDynamicEnforcedAddressRange.c)
 *     MiInsertHotPatchRecord @ 0x140A37B40 (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140A37CD0 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140A37DE4 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140A382F8 (MiLoadHotPatchForUserSid.c)
 *     MiAweViewInserter @ 0x140A412BC (MiAweViewInserter.c)
 *     MiFindLargePageMemory @ 0x140A49768 (MiFindLargePageMemory.c)
 *     MiCreateEnclaveRegions @ 0x140B45444 (MiCreateEnclaveRegions.c)
 *     MiInitializeDriverPtes @ 0x140B5DF50 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14024FF40 (RtlpTreeDoubleRotateNodes.c)
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
