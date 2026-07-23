/*
 * XREFs of RtlLengthRequiredSid @ 0x1407D1940
 * Callers:
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1403C4750 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x1405FBD78 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140604948 (EtwpApplyPayloadFilterInternal.c)
 *     PopCreateTimebrokerServiceSid @ 0x140B4EE5C (PopCreateTimebrokerServiceSid.c)
 *     PopNetInitialize @ 0x140B51D9C (PopNetInitialize.c)
 *     SepVariableInitialization @ 0x140B62268 (SepVariableInitialization.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6B05C (PspInitializeCpuPartitionsDefaultSd.c)
 *     IopCreateUmdfDirectory @ 0x140B6CB68 (IopCreateUmdfDirectory.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140B726F4 (CmpInitializeTrustedInstallerSid.c)
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
