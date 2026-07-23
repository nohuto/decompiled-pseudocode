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
