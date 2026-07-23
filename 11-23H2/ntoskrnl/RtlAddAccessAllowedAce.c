/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1407EF700
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14031D480 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14037060C (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenCapability @ 0x1403707D0 (RtlCheckTokenCapability.c)
 *     SepInitProcessAuditSd @ 0x14038866C (SepInitProcessAuditSd.c)
 *     WdipAccessCheck @ 0x1405FBD78 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x140608F50 (ExpPlRunOnceInit.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140AC2A48 (ViInitializeLocalSystemDescriptor.c)
 *     WmipInitializeSecurity @ 0x140B39160 (WmipInitializeSecurity.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B53620 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B538B0 (SeMakeAnonymousLogonToken.c)
 *     SeMakeSystemToken @ 0x140B53B60 (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x140B64194 (SepInitSystemDacls.c)
 *     SshpAlpcInitialize @ 0x140B66D04 (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6B05C (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140B6B5DC (PspInitializeSystemPartitionPhase0.c)
 *     IopCreateUmdfDirectory @ 0x140B6CB68 (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x140B6D860 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140B6FC1C (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140B93EE0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140735460 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 0);
}
