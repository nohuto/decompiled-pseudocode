/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x14021ACA0
 * Callers:
 *     MiInitializeImageHeaderPage @ 0x14020DCA0 (MiInitializeImageHeaderPage.c)
 *     MiConfirmPageIsZero @ 0x140219CB0 (MiConfirmPageIsZero.c)
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     MiFlushCacheForAttributeChange @ 0x14021AB84 (MiFlushCacheForAttributeChange.c)
 *     MiBuildMappedCluster @ 0x14021C0D0 (MiBuildMappedCluster.c)
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiCompletePrivateZeroFault @ 0x14026AC10 (MiCompletePrivateZeroFault.c)
 *     MiWsleFlush @ 0x1402810A0 (MiWsleFlush.c)
 *     MiClearContainingMapping @ 0x140292DE8 (MiClearContainingMapping.c)
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 *     MiInitializeSystemPageTable @ 0x1402E4838 (MiInitializeSystemPageTable.c)
 *     MiCopySinglePage @ 0x1402EEB4C (MiCopySinglePage.c)
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     MiRestoreTransitionPte @ 0x14033544C (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346E94 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403483F8 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmOutSwapProcess @ 0x14034D198 (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x14034D22C (KiInSwapProcesses.c)
 *     MiWriteRepurposedTransitionPte @ 0x14035A7F8 (MiWriteRepurposedTransitionPte.c)
 *     MiReplicatePteChangeToProcess @ 0x140368684 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F884 (MiDemoteValidLargePageOneLevel.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1403C0890 (MiReadWriteAnyLevelShadowPte.c)
 *     MmStealTopLevelPage @ 0x1403D75EC (MmStealTopLevelPage.c)
 *     MiComputePageHash @ 0x14046F53C (MiComputePageHash.c)
 *     MiUpdateSystemPdes @ 0x140619A80 (MiUpdateSystemPdes.c)
 *     MiMirrorOmitPagesFromCopy @ 0x1406277D8 (MiMirrorOmitPagesFromCopy.c)
 *     MiReplaceImportEntry @ 0x14062CC00 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062D4D0 (MiJumpStackTarget.c)
 *     MiPersistPage @ 0x14063EF4C (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x14063F7B4 (MiSplitDirectMapPage.c)
 *     MmUpdateUserShadowStackValue @ 0x140646CD0 (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x140646F60 (MiAddPagesToEnclave.c)
 *     MiArePageContentsZero @ 0x14064D970 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x140664A4C (MiFinishLastForkPageTable.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1408256A8 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402D1CA0 (MiGetUltraMapping.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  __int64 v4; // rbp
  int v5; // r8d
  int v7; // eax
  __int64 ValidPte; // rbx
  _QWORD *MmInternal; // rdi
  unsigned __int64 result; // rax
  __int64 *v11; // rcx
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r9

  LODWORD(v4) = 4;
  v5 = 4;
  if ( (a3 & 0x20000000) != 0 )
    v5 = 1;
  if ( (a3 & 0x40000000) != 0 )
  {
    v7 = a3 & 3;
    if ( v7 == 2 )
    {
      v5 |= 0x2000000u;
LABEL_14:
      v5 |= 0x18u;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(48 * a1 - 0x220000000000LL + 34) >> 6;
  }
  if ( v7 && v7 != 3 )
  {
    if ( v7 != 2 )
      goto LABEL_8;
    goto LABEL_14;
  }
  v5 |= 8u;
LABEL_8:
  ValidPte = MiMakeValidPte(0LL, a1, v5 | 0xA0000000);
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql != 2 )
        v4 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v4;
    }
    *a2 = CurrentIrql;
  }
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  result = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL);
  v11 = (__int64 *)(((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MmInternal[1543] = v11;
  *v11 = ValidPte;
  return result;
}
