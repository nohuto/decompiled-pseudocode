/*
 * XREFs of RtlLengthRequiredSid @ 0x1407D1BF0
 * Callers:
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1403C3F10 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x1405FB898 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140604468 (EtwpApplyPayloadFilterInternal.c)
 *     PopNetInitialize @ 0x140B51D10 (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x140B57F18 (SepVariableInitialization.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6BFAC (PspInitializeCpuPartitionsDefaultSd.c)
 *     IopCreateUmdfDirectory @ 0x140B6DFD4 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140B73154 (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140B7373C (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
