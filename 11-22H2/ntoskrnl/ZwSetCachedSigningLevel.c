/*
 * XREFs of ZwSetCachedSigningLevel @ 0x14041D960
 * Callers:
 *     SPCallServerHandleFileIntegrityUpdate @ 0x1407FEDE4 (SPCallServerHandleFileIntegrityUpdate.c)
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
  return KiServiceInternal(*(_QWORD *)&Flags);
}
