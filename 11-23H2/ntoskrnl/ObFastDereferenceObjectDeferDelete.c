/*
 * XREFs of ObFastDereferenceObjectDeferDelete @ 0x1402A2790
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140267AF0 (MiMakeSystemCacheRangeValid.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140287720 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x140297FB4 (MiGatherMappedPages.c)
 *     CcUnmapAndPurge @ 0x14029A1C8 (CcUnmapAndPurge.c)
 *     CcDeleteSharedCacheMap @ 0x14029A250 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindPostProcess @ 0x14029B2C8 (CcWriteBehindPostProcess.c)
 *     MiDereferenceControlAreaFile @ 0x1402A2770 (MiDereferenceControlAreaFile.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E30E0 (MiCompleteRestrictedImageFault.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F1564 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x1402F4538 (CcIsFatalWriteError.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     CcGetDirtyPagesHelper @ 0x140338AD0 (CcGetDirtyPagesHelper.c)
 *     MiMakeSystemCachePteValid @ 0x14034605C (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x14035F940 (MiCreateSystemSection.c)
 *     CcUnpinRepinnedBcb @ 0x140394370 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushSection @ 0x1403944E4 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x1403945CC (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140395734 (CcPerfLogWorkItemEnqueue.c)
 *     MiDeprioritizeVad @ 0x1403C701C (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x140624098 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     CcUnmapVacb @ 0x140722010 (CcUnmapVacb.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 */

void __fastcall ObFastDereferenceObjectDeferDelete(signed __int64 *a1, unsigned __int64 a2, ULONG a3)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  _m_prefetchw(a1);
  v3 = *a1;
  if ( (a2 ^ *a1) >= 0xF )
  {
LABEL_5:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, a3);
  }
  else
  {
    while ( 1 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange64(a1, v3 + 1, v3);
      if ( v4 == v3 )
        break;
      if ( (a2 ^ v3) >= 0xF )
        goto LABEL_5;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo(a2 - 48);
  }
}
