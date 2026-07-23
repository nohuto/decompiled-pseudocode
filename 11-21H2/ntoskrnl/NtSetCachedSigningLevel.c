/*
 * XREFs of NtSetCachedSigningLevel @ 0x1406E8870
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406E88A0 @ 0x1406E88A0 (sub_1406E88A0.c)
 */

NTSTATUS __cdecl NtSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  return sub_1406E88A0(Flags, InputSigningLevel, (_DWORD)SourceFiles, SourceFileCount, (__int64)TargetFile, 0LL);
}
