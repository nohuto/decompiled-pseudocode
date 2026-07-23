/*
 * XREFs of ZwQueryDirectoryObject @ 0x14041E0A0
 * Callers:
 *     sub_140624100 @ 0x140624100 (sub_140624100.c)
 *     sub_14069CEC8 @ 0x14069CEC8 (sub_14069CEC8.c)
 *     sub_140799218 @ 0x140799218 (sub_140799218.c)
 *     sub_140802BE0 @ 0x140802BE0 (sub_140802BE0.c)
 *     sub_1408276AC @ 0x1408276AC (sub_1408276AC.c)
 *     sub_1409FC2D0 @ 0x1409FC2D0 (sub_1409FC2D0.c)
 *     sub_140A21C40 @ 0x140A21C40 (sub_140A21C40.c)
 *     sub_140B12C84 @ 0x140B12C84 (sub_140B12C84.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(DirectoryHandle, Buffer);
}
