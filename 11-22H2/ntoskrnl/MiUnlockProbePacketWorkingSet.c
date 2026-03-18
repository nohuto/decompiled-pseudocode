/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x14034B43C
 * Callers:
 *     MiProbeAndLockPacket @ 0x140236240 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x140236C30 (MiProbeLeafPteAccess.c)
 *     MiFaultInProbeAddress @ 0x14034B2CC (MiFaultInProbeAddress.c)
 *     MmProbeAndLockSelectedPages @ 0x1403D4D60 (MmProbeAndLockSelectedPages.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CAD4 (MiSplitReducedCommitClonePage.c)
 *     MmStoreProbeAndLockPages @ 0x14065D30C (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
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
