/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14021AEA4
 * Callers:
 *     MiInitializeImageHeaderPage @ 0x14020DCC0 (MiInitializeImageHeaderPage.c)
 *     MiConfirmPageIsZero @ 0x140219CD0 (MiConfirmPageIsZero.c)
 *     MiInitializeImageProtos @ 0x14021A220 (MiInitializeImageProtos.c)
 *     MiFlushCacheForAttributeChange @ 0x14021ABA4 (MiFlushCacheForAttributeChange.c)
 *     MiBuildMappedCluster @ 0x14021C0F0 (MiBuildMappedCluster.c)
 *     MiCopyToUserVa @ 0x14021CBFC (MiCopyToUserVa.c)
 *     MiCompletePrivateZeroFault @ 0x14026A860 (MiCompletePrivateZeroFault.c)
 *     MiWsleFlush @ 0x140280CF0 (MiWsleFlush.c)
 *     MiClearContainingMapping @ 0x140292A38 (MiClearContainingMapping.c)
 *     MiWaitForInPageComplete @ 0x1402A1680 (MiWaitForInPageComplete.c)
 *     MiMakeProtoTransition @ 0x1402D8D90 (MiMakeProtoTransition.c)
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     MiCopySinglePage @ 0x1402EE8BC (MiCopySinglePage.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346714 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140347C78 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmOutSwapProcess @ 0x14034C9F8 (MmOutSwapProcess.c)
 *     KiInSwapProcesses @ 0x14034CA8C (KiInSwapProcesses.c)
 *     MiWriteRepurposedTransitionPte @ 0x14035A058 (MiWriteRepurposedTransitionPte.c)
 *     MiReplicatePteChangeToProcess @ 0x140367E94 (MiReplicatePteChangeToProcess.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038DB24 (MiDemoteValidLargePageOneLevel.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1403C0050 (MiReadWriteAnyLevelShadowPte.c)
 *     MmStealTopLevelPage @ 0x1403D6DAC (MmStealTopLevelPage.c)
 *     MiComputePageHash @ 0x14046EADC (MiComputePageHash.c)
 *     MiUpdateSystemPdes @ 0x1406195A0 (MiUpdateSystemPdes.c)
 *     MiMirrorOmitPagesFromCopy @ 0x1406272F8 (MiMirrorOmitPagesFromCopy.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062CFF0 (MiJumpStackTarget.c)
 *     MiPersistPage @ 0x14063EA6C (MiPersistPage.c)
 *     MiSplitDirectMapPage @ 0x14063F2D4 (MiSplitDirectMapPage.c)
 *     MmUpdateUserShadowStackValue @ 0x1406467F0 (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x140646A80 (MiAddPagesToEnclave.c)
 *     MiArePageContentsZero @ 0x14064D490 (MiArePageContentsZero.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 *     MiFinishLastForkPageTable @ 0x14066456C (MiFinishLastForkPageTable.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140825F04 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
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
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
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
