/*
 * XREFs of ZwProtectVirtualMemory @ 0x14041C160
 * Callers:
 *     sub_14020B57C @ 0x14020B57C (sub_14020B57C.c)
 *     sub_14057B748 @ 0x14057B748 (sub_14057B748.c)
 *     sub_140623670 @ 0x140623670 (sub_140623670.c)
 *     sub_1406B42F4 @ 0x1406B42F4 (sub_1406B42F4.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, BaseAddress);
}
