/*
 * XREFs of IoCreateFile @ 0x1407D0950
 * Callers:
 *     DifIoCreateFileWrapper @ 0x1405DEAE0 (DifIoCreateFileWrapper.c)
 *     NtCreateNamedPipeFile @ 0x1407D07F0 (NtCreateNamedPipeFile.c)
 *     PopCreateHiberFile @ 0x1408007B0 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x1408333DC (MiCreatePagingFile.c)
 *     NtCreateMailslotFile @ 0x14094AD50 (NtCreateMailslotFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D9D78 (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x140B5D550 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x14073C880 (IopCreateFile.c)
 */

NTSTATUS __stdcall IoCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options)
{
  return IopCreateFile(
           FileHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           (int *)&IoStatusBlock->0,
           (HANDLE *)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           (unsigned __int64)EaBuffer,
           EaLength,
           CreateFileType,
           (_SLIST_ENTRY *)InternalParameters,
           Options,
           0,
           0LL);
}
