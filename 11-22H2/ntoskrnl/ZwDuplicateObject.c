/*
 * XREFs of ZwDuplicateObject @ 0x14041AE20
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x140370B18 (SepReferenceCachedTokenHandles.c)
 *     DifZwDuplicateObjectWrapper @ 0x1405EFBD0 (DifZwDuplicateObjectWrapper.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1407DCE08 (SeAuditHandleCreation.c)
 *     _SysCtxOpenMachine @ 0x140855F00 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x1409D8AD4 (SmKmFileInfoDuplicate.c)
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
