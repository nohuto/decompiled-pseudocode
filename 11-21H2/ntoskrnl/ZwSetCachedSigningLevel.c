/*
 * XREFs of ZwSetCachedSigningLevel @ 0x14041E9C0
 * Callers:
 *     sub_14065EA54 @ 0x14065EA54 (sub_14065EA54.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&Flags, InputSigningLevel);
}
