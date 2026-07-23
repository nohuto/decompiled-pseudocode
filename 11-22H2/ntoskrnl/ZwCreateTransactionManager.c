/*
 * XREFs of ZwCreateTransactionManager @ 0x14041C060
 * Callers:
 *     DifZwCreateTransactionManagerWrapper @ 0x1405EF1D0 (DifZwCreateTransactionManagerWrapper.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        ULONG CreateOptions,
        ULONG CommitStrength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle);
}
