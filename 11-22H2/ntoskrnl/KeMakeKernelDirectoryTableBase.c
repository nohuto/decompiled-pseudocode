/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x140291900
 * Callers:
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     KiInSwapProcesses @ 0x14034CA8C (KiInSwapProcesses.c)
 *     MmStealTopLevelPage @ 0x1403D6DAC (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x140705F00 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
