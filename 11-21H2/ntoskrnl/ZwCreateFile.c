/*
 * XREFs of ZwCreateFile @ 0x14041C200
 * Callers:
 *     sub_1402D8914 @ 0x1402D8914 (sub_1402D8914.c)
 *     sub_1403D79F4 @ 0x1403D79F4 (sub_1403D79F4.c)
 *     sub_14061E6A0 @ 0x14061E6A0 (sub_14061E6A0.c)
 *     sub_1406D4DF0 @ 0x1406D4DF0 (sub_1406D4DF0.c)
 *     sub_1406F0DC8 @ 0x1406F0DC8 (sub_1406F0DC8.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     sub_14085698C @ 0x14085698C (sub_14085698C.c)
 *     sub_140857634 @ 0x140857634 (sub_140857634.c)
 *     sub_140858E74 @ 0x140858E74 (sub_140858E74.c)
 *     sub_14085A75C @ 0x14085A75C (sub_14085A75C.c)
 *     sub_1408624E8 @ 0x1408624E8 (sub_1408624E8.c)
 *     sub_140917E18 @ 0x140917E18 (sub_140917E18.c)
 *     sub_140919908 @ 0x140919908 (sub_140919908.c)
 *     sub_140933C14 @ 0x140933C14 (sub_140933C14.c)
 *     sub_140943B34 @ 0x140943B34 (sub_140943B34.c)
 *     sub_1409D71F0 @ 0x1409D71F0 (sub_1409D71F0.c)
 *     sub_1409D8B9C @ 0x1409D8B9C (sub_1409D8B9C.c)
 *     sub_140A51F50 @ 0x140A51F50 (sub_140A51F50.c)
 *     sub_140A72AC0 @ 0x140A72AC0 (sub_140A72AC0.c)
 *     sub_140B0B630 @ 0x140B0B630 (sub_140B0B630.c)
 *     sub_140B1C49C @ 0x140B1C49C (sub_140B1C49C.c)
 *     sub_140B1C78C @ 0x140B1C78C (sub_140B1C78C.c)
 *     sub_140B286CC @ 0x140B286CC (sub_140B286CC.c)
 *     sub_140B54AE4 @ 0x140B54AE4 (sub_140B54AE4.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, *(_QWORD *)&DesiredAccess);
}
