/*
 * XREFs of RtlAvlInsertNodeEx @ 0x14030EFD0
 * Callers:
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiUpdatePerSessionProto @ 0x140255870 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14025A2B4 (MiFlowThroughInsertNode.c)
 *     MiCombiningInProgress @ 0x14025B5E0 (MiCombiningInProgress.c)
 *     MiBeginPageAccessor @ 0x140268520 (MiBeginPageAccessor.c)
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026EA80 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertSubsectionNode @ 0x140281F60 (MiInsertSubsectionNode.c)
 *     MiZeroLargePages @ 0x1402C41D0 (MiZeroLargePages.c)
 *     MiProcessLoaderEntry @ 0x1402D8C20 (MiProcessLoaderEntry.c)
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     MiInsertVad @ 0x14030E390 (MiInsertVad.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiInsertSessionWorkingSet @ 0x14036DB5C (MiInsertSessionWorkingSet.c)
 *     MmManageFaultRange @ 0x140372224 (MmManageFaultRange.c)
 *     MiInsertMappingNode @ 0x140386294 (MiInsertMappingNode.c)
 *     MiUpdatePageFileList @ 0x1403CF758 (MiUpdatePageFileList.c)
 *     MiAddMdlTracker @ 0x140584030 (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14058503C (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x140586A44 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x1405879D8 (MiMarkHugePfnBad.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140588C48 (MiReleasePartitionHugeIoSpace.c)
 *     MiAddPendingBadPageNode @ 0x14058DFB8 (MiAddPendingBadPageNode.c)
 *     MiCheckLostBadPageNode @ 0x14058E174 (MiCheckLostBadPageNode.c)
 *     MiCreateKernelStackNode @ 0x140590B00 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140591814 (MiMakeIoRangePermanent.c)
 *     MiInsertExtentList @ 0x14059F7A0 (MiInsertExtentList.c)
 *     MiInsertClone @ 0x1405BB8B4 (MiInsertClone.c)
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1405BD66C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1405BE614 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x1405BF028 (MiMergePageNodes.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405C350C (MiReplaceSystemProtoPtesNode.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405E2E00 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405E33F8 (PsLoadVsmEnclaveData.c)
 *     ExpWnfCreateNameInstance @ 0x14066FED4 (ExpWnfCreateNameInstance.c)
 *     MiProcessCrcList @ 0x1406F2C30 (MiProcessCrcList.c)
 *     MiInsertSharedCommitNode @ 0x1406FC590 (MiInsertSharedCommitNode.c)
 *     MiFinishCreateSection @ 0x1406FD9F0 (MiFinishCreateSection.c)
 *     MiInsertHotPatchRecord @ 0x140973D6C (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140973EA4 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1409743A4 (MiLoadHotPatchForUserSid.c)
 *     MiAweViewInserter @ 0x14097C814 (MiAweViewInserter.c)
 *     MiFindLargePageMemory @ 0x140982F64 (MiFindLargePageMemory.c)
 *     PsCallEnclave @ 0x1409B35D0 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409BFCA0 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1409BFD4C (RtlAddDynamicEnforcedAddressRange.c)
 *     MiCreateEnclaveRegions @ 0x140B08E90 (MiCreateEnclaveRegions.c)
 *     MiInitializeDriverPtes @ 0x140B1A80C (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14034FD50 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  __int64 v4; // rax
  bool v5; // r10
  unsigned __int64 v6; // rbx
  _BYTE *v8; // r9
  char v9; // r8
  char v10; // cl
  char v11; // di
  _BOOL8 v12; // r9
  unsigned __int64 *v13; // r10
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rcx

  LOBYTE(v4) = 0;
  v5 = a3;
  *a4 = 0LL;
  v6 = (unsigned __int64)a4;
  a4[1] = 0LL;
  a4[2] = a2;
  if ( !a2 )
  {
    *a1 = (unsigned __int64)a4;
    return v4;
  }
  v8 = (_BYTE *)(a2 + 16);
  *(_QWORD *)(a2 + 8LL * a3) = v6;
  v9 = *(_BYTE *)(a2 + 16);
  LOBYTE(v4) = 2 * v5;
  v10 = (-1 - 2 * v5) & 3;
  v11 = v9 & 3;
  if ( (v9 & 3) != 0 )
  {
LABEL_5:
    if ( v11 != v10 )
    {
      *(_BYTE *)(a2 + 16) &= 0xFCu;
      return v4;
    }
    if ( (*(_BYTE *)(v6 + 16) & 3) != v11 )
    {
      v4 = RtlpTreeDoubleRotateNodes(a1, a2, v6, v5);
      *(_BYTE *)(v17 + 16) &= 0xFCu;
      v18 = v4;
      LOBYTE(v4) = *(_BYTE *)(v6 + 16) & 0xFC;
      *(_BYTE *)(v6 + 16) = v4;
      if ( v11 == (*(_BYTE *)(v18 + 16) & 3) )
      {
        LOBYTE(v4) = (v11 ^ *(_BYTE *)(v17 + 16) ^ 0xFE) & 3;
        *(_BYTE *)(v17 + 16) ^= v4;
        *(_BYTE *)(v18 + 16) &= 0xFCu;
      }
      else
      {
        if ( v11 == ((*(_BYTE *)(v18 + 16) ^ 0xFE) & 3) )
        {
          LOBYTE(v4) = v11 | v4;
          *(_BYTE *)(v6 + 16) = v4;
        }
        *(_BYTE *)(v18 + 16) &= 0xFCu;
      }
      return v4;
    }
    v12 = !v5;
    if ( (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v13 = (unsigned __int64 *)(a2 + 8LL * v5);
      if ( *v13 == v6 )
      {
        v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v14 )
        {
          if ( *(_QWORD *)(v14 + 8) == a2 )
          {
            *(_QWORD *)(v14 + 8) = v6;
          }
          else
          {
            if ( *(_QWORD *)v14 != a2 )
              goto LABEL_28;
            *(_QWORD *)v14 = v6;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_28;
          *a1 = v6;
        }
        v15 = (unsigned __int64 *)(v6 + 8 * v12);
        *(_QWORD *)(v6 + 16) = v14 | *(_DWORD *)(v6 + 16) & 3;
        v16 = *v15;
        if ( !*v15 )
        {
LABEL_13:
          *v13 = v16;
          *v15 = a2;
          v4 = v6 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v4;
          *(_BYTE *)(v6 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
          return v4;
        }
        v19 = *(_QWORD *)(v16 + 16);
        if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) == v6 )
        {
          *(_QWORD *)(v16 + 16) = a2 | v19 & 3;
          goto LABEL_13;
        }
      }
    }
LABEL_28:
    __fastfail(0x1Du);
  }
  while ( 1 )
  {
    v6 = a2;
    *v8 = v10 | v9 & 0xFC;
    a2 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return v4;
    v8 = (_BYTE *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 16);
    v5 = *(_QWORD *)a2 != v6;
    LOBYTE(v4) = 2 * v5;
    v10 = (-1 - 2 * v5) & 3;
    v11 = v9 & 3;
    if ( (v9 & 3) != 0 )
      goto LABEL_5;
  }
}
