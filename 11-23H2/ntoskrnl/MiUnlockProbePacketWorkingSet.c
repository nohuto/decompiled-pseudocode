/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x14034BBDC
 * Callers:
 *     MiProbeAndLockPacket @ 0x140236330 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x140236D20 (MiProbeLeafPteAccess.c)
 *     MiFaultInProbeAddress @ 0x14034BA6C (MiFaultInProbeAddress.c)
 *     MmProbeAndLockSelectedPages @ 0x1403D55A0 (MmProbeAndLockSelectedPages.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CFB4 (MiSplitReducedCommitClonePage.c)
 *     MmStoreProbeAndLockPages @ 0x14065D7EC (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 104), v1);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 104), *(_BYTE *)(a1 + 76));
}
