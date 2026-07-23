/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x14041E3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(TokenHandle, Attributes);
}
