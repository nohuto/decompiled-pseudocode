/*
 * XREFs of ZwDuplicateObject @ 0x14041BEE0
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x14021FA0C (SepReferenceCachedTokenHandles.c)
 *     DifZwDuplicateObjectWrapper @ 0x14061FC20 (DifZwDuplicateObjectWrapper.c)
 *     SeAuditHandleCreation @ 0x1406CE5F8 (SeAuditHandleCreation.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     _SysCtxOpenMachine @ 0x140827BDC (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x1409D5860 (SmKmFileInfoDuplicate.c)
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
