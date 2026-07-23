/*
 * XREFs of ZwCreateTransactionManager @ 0x14041D100
 * Callers:
 *     sub_14061F210 @ 0x14061F210 (sub_14061F210.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return sub_140433F80(TmHandle, *(_QWORD *)&DesiredAccess);
}
