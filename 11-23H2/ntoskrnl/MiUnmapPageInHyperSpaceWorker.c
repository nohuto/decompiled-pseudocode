/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14021AE84
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
 *     MiMakeProtoTransition @ 0x1402D9020 (MiMakeProtoTransition.c)
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
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
