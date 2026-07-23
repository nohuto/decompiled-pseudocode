/*
 * XREFs of NtQueryInformationToken @ 0x18009F210
 * Callers:
 *     RtlDefaultNpAcl @ 0x1800019A0 (RtlDefaultNpAcl.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x18000AC00 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BE08 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x180018740 (RtlCheckTokenCapability.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AD30 (RtlFormatCurrentUserKeyPath.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005D0CC (EtwpWriteToPrivateBuffers.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180068BDC (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180068E18 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x180079E78 (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x180084CDC (RtlpValidOwnerSubjectContext.c)
 *     RtlRemovePrivileges @ 0x180087950 (RtlRemovePrivileges.c)
 *     RtlCheckSandboxedToken @ 0x180088C60 (RtlCheckSandboxedToken.c)
 *     RtlNewInstanceSecurityObject @ 0x1800E1C10 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800E1D40 (RtlNewSecurityGrantedAccess.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800E494C (AVrfpAppendCurrentUserSid.c)
 *     WerEscalationLazyInit @ 0x1800E84C8 (WerEscalationLazyInit.c)
 *     RtlpIsAppContainer @ 0x1800F3070 (RtlpIsAppContainer.c)
 *     RtlpValidLabelSubjectContext @ 0x1800F347C (RtlpValidLabelSubjectContext.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012D434 (OpenGlobalizationUserSettingsKey_ForMua.c)
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
