/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x1409B91D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409B9B50 @ 0x1409B9B50 (sub_1409B9B50.c)
 */

NTSTATUS __cdecl RtlGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, PUNICODE_STRING ObjectPath)
{
  return sub_1409B9B50(TokenHandle, 0LL);
}
