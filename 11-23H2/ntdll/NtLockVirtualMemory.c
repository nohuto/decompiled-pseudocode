/*
 * XREFs of NtLockVirtualMemory @ 0x1800A3140
 * Callers:
 *     RtlLockMemoryZone @ 0x180052250 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x1800872F0 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x180087880 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x180087938 (RtlpLockStack.c)
 *     RtlExtendMemoryZone @ 0x1800F6FE0 (RtlExtendMemoryZone.c)
 * Callees:
 *     <none>
 */

__int64 NtLockVirtualMemory()
{
  __int64 result; // rax

  result = 277LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
