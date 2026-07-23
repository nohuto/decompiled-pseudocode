/*
 * XREFs of ZwUnlockVirtualMemory @ 0x14041F240
 * Callers:
 *     sub_14020B600 @ 0x14020B600 (sub_14020B600.c)
 *     sub_14037DAEC @ 0x14037DAEC (sub_14037DAEC.c)
 *     sub_1405F7B94 @ 0x1405F7B94 (sub_1405F7B94.c)
 *     sub_140628D00 @ 0x140628D00 (sub_140628D00.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, BaseAddress);
}
