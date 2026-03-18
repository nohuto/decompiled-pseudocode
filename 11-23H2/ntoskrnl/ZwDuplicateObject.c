/*
 * XREFs of ZwDuplicateObject @ 0x14041B4E0
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x140371168 (SepReferenceCachedTokenHandles.c)
 *     DifZwDuplicateObjectWrapper @ 0x1405EFB40 (DifZwDuplicateObjectWrapper.c)
 *     ObpCreateHandle @ 0x1406E4510 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1407DC888 (SeAuditHandleCreation.c)
 *     _SysCtxOpenMachine @ 0x140854FF0 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x1409D8A24 (SmKmFileInfoDuplicate.c)
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
  return KiServiceInternal(SourceProcessHandle, SourceHandle);
}
