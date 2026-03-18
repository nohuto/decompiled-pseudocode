/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x1402235C0
 * Callers:
 *     MiWorkingSetManager @ 0x14021D610 (MiWorkingSetManager.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
