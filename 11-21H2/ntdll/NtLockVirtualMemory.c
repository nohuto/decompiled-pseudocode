/*
 * XREFs of NtLockVirtualMemory @ 0x1800A62E0
 * Callers:
 *     RtlExtendMemoryZone @ 0x180002690 (RtlExtendMemoryZone.c)
 *     RtlLockMemoryZone @ 0x18007CBB0 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x180089420 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x180089CB0 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x180089E00 (RtlpLockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 276;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
