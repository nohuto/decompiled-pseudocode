/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x1403191A0
 * Callers:
 *     KiSwapThread @ 0x14023F3F0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249530 (KiDispatchInterrupt.c)
 *     KiAbProcessThreadLocks @ 0x1402BC350 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x140318E28 (KiAbSetMinimumThreadPriority.c)
 *     KiAbForceProcessLockEntry @ 0x1403CCA88 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1403192AC (KiAbOwnerComputeCpuPriorityKey.c)
 */

char __fastcall KiAbEntryGetCpuPriorityKey(unsigned __int8 *a1)
{
  char result; // al

  if ( (a1[19] & 1) == 0 )
    return a1[48];
  if ( !a1[17] )
    return KiAbOwnerComputeCpuPriorityKey(a1);
  result = a1[-96 * a1[16] - 1501];
  if ( result > 30 )
    return 30;
  return result;
}
