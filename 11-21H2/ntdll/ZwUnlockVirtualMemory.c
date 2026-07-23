/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A7B40
 * Callers:
 *     RtlLockMemoryZone @ 0x18007CBB0 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x18007CDB0 (RtlUnlockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x18007D000 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x180089CB0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180089D70 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180089E74 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 471;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
