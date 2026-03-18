/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14021AE84
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
 *     MiMakeProtoTransition @ 0x1402D8D90 (MiMakeProtoTransition.c)
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
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = a2;
  result = ZeroPte;
  *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
  *(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
  if ( a2 != 17 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (a2 + 1));
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
  return result;
}
