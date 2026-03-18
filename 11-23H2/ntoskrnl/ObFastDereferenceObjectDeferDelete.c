/*
 * XREFs of ObFastDereferenceObjectDeferDelete @ 0x1402A2500
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140267860 (MiMakeSystemCacheRangeValid.c)
 *     MiFlushSectionInternal @ 0x140275750 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140287490 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x140297D24 (MiGatherMappedPages.c)
 *     CcUnmapAndPurge @ 0x140299F38 (CcUnmapAndPurge.c)
 *     CcDeleteSharedCacheMap @ 0x140299FC0 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindPostProcess @ 0x14029B038 (CcWriteBehindPostProcess.c)
 *     MiDereferenceControlAreaFile @ 0x1402A24E0 (MiDereferenceControlAreaFile.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E2E50 (MiCompleteRestrictedImageFault.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F12D4 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x1402F42A8 (CcIsFatalWriteError.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     CcGetDirtyPagesHelper @ 0x140338840 (CcGetDirtyPagesHelper.c)
 *     MiMakeSystemCachePteValid @ 0x140345DCC (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x14035F7A0 (MiCreateSystemSection.c)
 *     CcUnpinRepinnedBcb @ 0x140394190 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushSection @ 0x140394304 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x1403943EC (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140395554 (CcPerfLogWorkItemEnqueue.c)
 *     MiDeprioritizeVad @ 0x1403C6E3C (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x140623B48 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1406288FC (MiSetPagesModified.c)
 *     CcUnmapVacb @ 0x140721E10 (CcUnmapVacb.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8CE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
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
