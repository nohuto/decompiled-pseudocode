/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x140291A20
 * Callers:
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     KiInSwapProcesses @ 0x14034D08C (KiInSwapProcesses.c)
 *     MmStealTopLevelPage @ 0x1403D740C (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x140705E50 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
