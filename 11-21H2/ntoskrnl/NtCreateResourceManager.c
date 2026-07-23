/*
 * XREFs of NtCreateResourceManager @ 0x1403DFA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCreateResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID RmGuid,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        PUNICODE_STRING Description)
{
  return NtCreateResourceManager_0(
           ResourceManagerHandle,
           DesiredAccess,
           TmHandle,
           RmGuid,
           ObjectAttributes,
           CreateOptions,
           Description);
}
