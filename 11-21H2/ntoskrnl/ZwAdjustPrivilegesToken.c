/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x14041BF80
 * Callers:
 *     sub_14061CA40 @ 0x14061CA40 (sub_14061CA40.c)
 *     sub_1406CB6DC @ 0x1406CB6DC (sub_1406CB6DC.c)
 *     sub_1406DAE08 @ 0x1406DAE08 (sub_1406DAE08.c)
 *     sub_140813C34 @ 0x140813C34 (sub_140813C34.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(TokenHandle, DisableAllPrivileges);
}
