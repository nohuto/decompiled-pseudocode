/*
 * XREFs of NtOpenThreadToken @ 0x14071DF50
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenThreadTokenEx @ 0x14071DF70 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}
