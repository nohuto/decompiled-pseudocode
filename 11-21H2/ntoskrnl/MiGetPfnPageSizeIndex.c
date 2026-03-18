/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x140235E10
 * Callers:
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x140235D34 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiZeroInParallelWorker @ 0x14026C240 (MiZeroInParallelWorker.c)
 *     MiZeroWithUltraSpace @ 0x14026C4CC (MiZeroWithUltraSpace.c)
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140278960 (MiActivePageClaimCandidate.c)
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403872A4 (MiTryUnlinkNodeLargePages.c)
 *     MiFindLargeNodePage @ 0x1403D6C20 (MiFindLargeNodePage.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140589B90 (MiInitializeLargeMdlLeafPfns.c)
 *     MiMirrorRemoveInactivePages @ 0x14058CF54 (MiMirrorRemoveInactivePages.c)
 *     MiUpdateLargePageSectionPfns @ 0x14058D990 (MiUpdateLargePageSectionPfns.c)
 *     MiGetPagesRemainingInResidentPage @ 0x1405AF1CC (MiGetPagesRemainingInResidentPage.c)
 *     MiZeroWithSystemPtes @ 0x1405B2A90 (MiZeroWithSystemPtes.c)
 *     MiTransferPartitionPageRun @ 0x1405BF718 (MiTransferPartitionPageRun.c)
 *     MiAllocateLargeZeroPages @ 0x1405C0D40 (MiAllocateLargeZeroPages.c)
 *     MiAssembleLargePagePfnList @ 0x1405C11C0 (MiAssembleLargePagePfnList.c)
 *     MiFreeLargePages @ 0x1405C1CE0 (MiFreeLargePages.c)
 *     MiGetFastLargePages @ 0x1405C2478 (MiGetFastLargePages.c)
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
