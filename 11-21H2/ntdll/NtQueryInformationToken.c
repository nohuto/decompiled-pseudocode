/*
 * XREFs of NtQueryInformationToken @ 0x1800A4490
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001CB0 (RtlDefaultNpAcl.c)
 *     EtwpWriteToPrivateBuffers @ 0x1800051BC (EtwpWriteToPrivateBuffers.c)
 *     RtlpValidOwnerSubjectContext @ 0x18000E418 (RtlpValidOwnerSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x18000E648 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800114D8 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180011714 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180047DC0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCheckTokenCapability @ 0x18004A710 (RtlCheckTokenCapability.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180076A50 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180076B98 (RtlpGetTokenNamedObjectPath.c)
 *     RtlRemovePrivileges @ 0x18008CC60 (RtlRemovePrivileges.c)
 *     RtlCheckSandboxedToken @ 0x18008DE10 (RtlCheckSandboxedToken.c)
 *     RtlNewInstanceSecurityObject @ 0x1800E2FA0 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800E30D0 (RtlNewSecurityGrantedAccess.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800E5ABC (AVrfpAppendCurrentUserSid.c)
 *     WerEscalationLazyInit @ 0x1800E95C4 (WerEscalationLazyInit.c)
 *     RtlpIsAppContainer @ 0x1800F3608 (RtlpIsAppContainer.c)
 *     RtlpValidLabelSubjectContext @ 0x1800F3758 (RtlpValidLabelSubjectContext.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1801287D8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationToken(
        HANDLE TokenHandle,
        ULONG TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 33;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
