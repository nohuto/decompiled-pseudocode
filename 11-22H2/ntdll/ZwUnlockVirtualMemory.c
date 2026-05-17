/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A2940
 * Callers:
 *     RtlUnlockModuleSection @ 0x180052050 (RtlUnlockModuleSection.c)
 *     RtlLockMemoryZone @ 0x1800523B0 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180052550 (RtlUnlockMemoryZone.c)
 *     RtlLockCurrentThread @ 0x180087080 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x1800871B0 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180087240 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

__int64 ZwUnlockVirtualMemory()
{
  __int64 result; // rax

  result = 475LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
