/*
 * XREFs of ZwDuplicateObject @ 0x14041B870
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x140371308 (SepReferenceCachedTokenHandles.c)
 *     DifZwDuplicateObjectWrapper @ 0x1405F00B0 (DifZwDuplicateObjectWrapper.c)
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1407DCB58 (SeAuditHandleCreation.c)
 *     _SysCtxOpenMachine @ 0x1408552F0 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x1409D8C24 (SmKmFileInfoDuplicate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SourceProcessHandle);
}
