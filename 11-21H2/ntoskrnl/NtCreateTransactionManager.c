/*
 * XREFs of NtCreateTransactionManager @ 0x1403DFAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCreateTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        ULONG CreateOptions,
        ULONG CommitStrength)
{
  return NtCreateTransactionManager_0(
           TmHandle,
           DesiredAccess,
           ObjectAttributes,
           LogFileName,
           CreateOptions,
           CommitStrength);
}
