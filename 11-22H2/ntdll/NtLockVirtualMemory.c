/*
 * XREFs of NtLockVirtualMemory @ 0x1800A1080
 * Callers:
 *     RtlLockMemoryZone @ 0x1800523B0 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x180086AF0 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x180087080 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x180087138 (RtlpLockStack.c)
 *     RtlExtendMemoryZone @ 0x1800F5BD0 (RtlExtendMemoryZone.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 277;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
