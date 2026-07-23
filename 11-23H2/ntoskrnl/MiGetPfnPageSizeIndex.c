/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x1402E8B70
 * Callers:
 *     MiZeroInParallelWorker @ 0x1402D1590 (MiZeroInParallelWorker.c)
 *     MiGetFreeLargePage @ 0x1402D89B0 (MiGetFreeLargePage.c)
 *     MiGetFastLargePages @ 0x1402E898C (MiGetFastLargePages.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402E9330 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiProcessPageGroupInfo @ 0x14032F7A0 (MiProcessPageGroupInfo.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14038C0C0 (MiInitializeLargeMdlLeafPfns.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403A0D5C (MiTryUnlinkNodeLargePages.c)
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x1403BBDD8 (MiActivePageClaimCandidate.c)
 *     MiFindLargeNodePage @ 0x14061DBB8 (MiFindLargeNodePage.c)
 *     MiMirrorRemoveInactivePages @ 0x140628814 (MiMirrorRemoveInactivePages.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406294CC (MiUpdateLargePageSectionPfns.c)
 *     MiFreeContiguousLargePageRun @ 0x14064A308 (MiFreeContiguousLargePageRun.c)
 *     MiGetPagesRemainingInResidentPage @ 0x14064F794 (MiGetPagesRemainingInResidentPage.c)
 *     MiTransferPartitionPageRun @ 0x14065BB54 (MiTransferPartitionPageRun.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065DA3C (MiCoalesceActivePagesIntoFree.c)
 *     MiFreeLargePages @ 0x1406687A0 (MiFreeLargePages.c)
 *     MiScrubLargePageRegions @ 0x140A466C0 (MiScrubLargePageRegions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPageSizeIndex(__int64 a1)
{
  __int64 result; // rax

  if ( !_bittest64((const signed __int64 *)(a1 + 40), 0x28u) )
    return 0xFFFFFFFFLL;
  result = 3 - (*(_BYTE *)(a1 + 36) & 3u);
  if ( (_DWORD)result == 3 )
    return 0xFFFFFFFFLL;
  return result;
}
