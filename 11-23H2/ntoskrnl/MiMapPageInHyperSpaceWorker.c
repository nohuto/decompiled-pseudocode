/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x14021ACA0
 * Callers:
 *     MiInitializeImageHeaderPage @ 0x14020DCA0 (MiInitializeImageHeaderPage.c)
 *     MiConfirmPageIsZero @ 0x140219CB0 (MiConfirmPageIsZero.c)
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     MiFlushCacheForAttributeChange @ 0x14021AB84 (MiFlushCacheForAttributeChange.c)
 *     MiBuildMappedCluster @ 0x14021C0D0 (MiBuildMappedCluster.c)
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiCompletePrivateZeroFault @ 0x14026A980 (MiCompletePrivateZeroFault.c)
 *     MiWsleFlush @ 0x140280E10 (MiWsleFlush.c)
 *     MiClearContainingMapping @ 0x140292B58 (MiClearContainingMapping.c)
 *     MiWaitForInPageComplete @ 0x1402A17A0 (MiWaitForInPageComplete.c)
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     MiCopySinglePage @ 0x1402EE8BC (MiCopySinglePage.c)
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     MiRestoreTransitionPte @ 0x1403351BC (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346C04 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140348168 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmOutSwapProcess @ 0x14034CFF8 (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x14034D08C (KiInSwapProcesses.c)
 *     MiWriteRepurposedTransitionPte @ 0x14035A658 (MiWriteRepurposedTransitionPte.c)
 *     MiReplicatePteChangeToProcess @ 0x1403684E4 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F6A4 (MiDemoteValidLargePageOneLevel.c)
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1403C06B0 (MiReadWriteAnyLevelShadowPte.c)
 *     MmStealTopLevelPage @ 0x1403D740C (MmStealTopLevelPage.c)
 *     MiComputePageHash @ 0x14046F13C (MiComputePageHash.c)
 *     MiUpdateSystemPdes @ 0x140619530 (MiUpdateSystemPdes.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140627288 (MiMirrorOmitPagesFromCopy.c)
 *     MiReplaceImportEntry @ 0x14062C6B0 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062CF80 (MiJumpStackTarget.c)
 *     MiPersistPage @ 0x14063E9FC (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x14063F264 (MiSplitDirectMapPage.c)
 *     MmUpdateUserShadowStackValue @ 0x140646780 (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x140646A10 (MiAddPagesToEnclave.c)
 *     MiArePageContentsZero @ 0x14064D420 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x1406644FC (MiFinishLastForkPageTable.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1408253A8 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402D1A10 (MiGetUltraMapping.c)
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
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
