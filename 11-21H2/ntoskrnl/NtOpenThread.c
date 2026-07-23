/*
 * XREFs of NtOpenThread @ 0x140663470
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406634A0 @ 0x1406634A0 (sub_1406634A0.c)
 */

NTSTATUS __cdecl NtOpenThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  char PreviousMode; // [rsp+20h] [rbp-18h]

  PreviousMode = *((_BYTE *)KeGetCurrentThread() + 562);
  return sub_1406634A0(
           (int)ThreadHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)ClientId,
           PreviousMode,
           PreviousMode);
}
