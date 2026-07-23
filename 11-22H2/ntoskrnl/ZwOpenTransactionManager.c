/*
 * XREFs of ZwOpenTransactionManager @ 0x14041CDE0
 * Callers:
 *     DifZwOpenTransactionManagerWrapper @ 0x1405F2D50 (DifZwOpenTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        LPGUID TmIdentity,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle);
}
