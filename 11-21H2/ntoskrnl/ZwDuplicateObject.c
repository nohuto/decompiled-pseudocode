/*
 * XREFs of ZwDuplicateObject @ 0x14041BEE0
 * Callers:
 *     sub_14021FA0C @ 0x14021FA0C (sub_14021FA0C.c)
 *     sub_14061FC20 @ 0x14061FC20 (sub_14061FC20.c)
 *     sub_1406CE5F8 @ 0x1406CE5F8 (sub_1406CE5F8.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_140827BDC @ 0x140827BDC (sub_140827BDC.c)
 *     sub_1409D5860 @ 0x1409D5860 (sub_1409D5860.c)
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
  return sub_140433F80(SourceProcessHandle, SourceHandle);
}
