/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x14041AEC0
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x1405ECAF0 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     RtlAcquirePrivilege @ 0x1407D310C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1407DF4E0 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x14080870C (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(TokenHandle);
}
