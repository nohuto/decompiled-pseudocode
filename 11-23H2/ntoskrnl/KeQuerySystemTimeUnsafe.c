/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x1402BFAAC
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
