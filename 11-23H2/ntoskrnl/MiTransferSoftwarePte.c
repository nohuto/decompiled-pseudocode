/*
 * XREFs of MiTransferSoftwarePte @ 0x140285A60
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140215660 (MiOutSwapWorkingSetPte.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiFindFreePageFileSpace @ 0x140294964 (MiFindFreePageFileSpace.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 *     MiDetermineModifiedPageListHead @ 0x1402D9480 (MiDetermineModifiedPageListHead.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     MiRestoreTransitionPte @ 0x14033544C (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346E94 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403483F8 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140396894 (MiMoveModifiedPagesToCompressList.c)
 *     MiStoreWriteModifiedPages @ 0x14046DEAA (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x14063A694 (MiGatherPagefilePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063BC40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiTransferSoftwarePte(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r10
  unsigned __int64 result; // rax
  __int64 updated; // rax
  char v8; // r9
  __int16 v9; // r10

  v4 = -9LL;
  if ( (a1 & 0x400) != 0 )
    v4 = -2049LL;
  v5 = a1 & v4;
  result = v5;
  if ( (a1 & 0x400) == 0 && (a4 & 4) == 0 )
    result = v5 & 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( result )
      updated = MiUpdatePageFileHighInPte(result, a3);
    else
      updated = MiSwizzleInvalidPte((unsigned __int64)a3 << 32);
    result = (unsigned __int16)(updated ^ (v9 << 12)) & 0xF000 ^ (unsigned __int64)updated;
    if ( (v8 & 1) != 0 )
      result |= 4uLL;
    if ( (v8 & 2) != 0 )
      result |= 2uLL;
  }
  return result;
}
