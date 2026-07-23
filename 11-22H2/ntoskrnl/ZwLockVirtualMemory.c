/*
 * XREFs of ZwLockVirtualMemory @ 0x14041C940
 * Callers:
 *     CmSiLockViewOfSection @ 0x140207D4C (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1405CC134 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
