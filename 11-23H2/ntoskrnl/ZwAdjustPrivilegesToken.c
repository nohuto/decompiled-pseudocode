/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x14041B910
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x1405ECFD0 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     RtlAcquirePrivilege @ 0x1407D2E5C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1407DF230 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x14080645C (BiAdjustPrivilege.c)
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
