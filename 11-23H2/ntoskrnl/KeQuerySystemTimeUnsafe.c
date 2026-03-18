/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x1402BF81C
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
