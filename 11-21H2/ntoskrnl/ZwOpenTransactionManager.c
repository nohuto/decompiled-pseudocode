/*
 * XREFs of ZwOpenTransactionManager @ 0x14041DE60
 * Callers:
 *     sub_140622ED0 @ 0x140622ED0 (sub_140622ED0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return sub_140433F80(TmHandle, *(_QWORD *)&DesiredAccess);
}
