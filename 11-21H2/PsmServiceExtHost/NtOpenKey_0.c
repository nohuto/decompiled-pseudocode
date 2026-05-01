/*
 * XREFs of NtOpenKey_0 @ 0x18004F23C
 * Callers:
 *     RtlpTestHookInitialize @ 0x18004D140 (RtlpTestHookInitialize.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtOpenKey_0(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return NtOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
