/*
 * XREFs of ZwLockVirtualMemory @ 0x14041D9E0
 * Callers:
 *     sub_14020B76C @ 0x14020B76C (sub_14020B76C.c)
 *     sub_1405FC1B0 @ 0x1405FC1B0 (sub_1405FC1B0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, BaseAddress);
}
