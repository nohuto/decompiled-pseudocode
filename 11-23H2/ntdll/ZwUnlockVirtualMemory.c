/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A4A00
 * Callers:
 *     RtlUnlockModuleSection @ 0x180051EF0 (RtlUnlockModuleSection.c)
 *     RtlLockMemoryZone @ 0x180052250 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x1800523F0 (RtlUnlockMemoryZone.c)
 *     RtlLockCurrentThread @ 0x180087880 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x1800879B0 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180087A40 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 475;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
