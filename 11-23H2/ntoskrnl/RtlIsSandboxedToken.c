/*
 * XREFs of RtlIsSandboxedToken @ 0x1407F3A60
 * Callers:
 *     IopCheckInitiatorHint @ 0x1402118B0 (IopCheckInitiatorHint.c)
 *     NtSetInformationFile @ 0x1402A6E80 (NtSetInformationFile.c)
 *     CmpCheckCreateAccess @ 0x1406C0878 (CmpCheckCreateAccess.c)
 *     ObpParseSymbolicLinkEx @ 0x1406C70F0 (ObpParseSymbolicLinkEx.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     NtDuplicateToken @ 0x1407355B0 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     ObpGetShadowDirectory @ 0x1407B4C9C (ObpGetShadowDirectory.c)
 *     ObpCreateDirectoryObject @ 0x1407F18E0 (ObpCreateDirectoryObject.c)
 *     SepFilterToken @ 0x1407F1ED0 (SepFilterToken.c)
 *     ObCreateSymbolicLink @ 0x1407F3638 (ObCreateSymbolicLink.c)
 * Callees:
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 */

bool __fastcall RtlIsSandboxedToken(PSECURITY_SUBJECT_CONTEXT SubjectContext, char a2)
{
  bool v2; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // rdi
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  LOBYTE(TokenInformation) = 0;
  p_SubjectContexta = SubjectContext;
  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  if ( !a2 )
    return 0;
  if ( !SubjectContext )
  {
    p_SubjectContexta = &SubjectContexta;
    SeCaptureSubjectContext(&SubjectContexta);
  }
  ClientToken = p_SubjectContexta->ClientToken;
  if ( !p_SubjectContexta->ClientToken )
    ClientToken = p_SubjectContexta->PrimaryToken;
  if ( SeQueryInformationToken(ClientToken, TokenIsSandboxed, &TokenInformation) >= 0 )
    v2 = (_BYTE)TokenInformation == 0;
  if ( p_SubjectContexta == &SubjectContexta )
    SeReleaseSubjectContext(p_SubjectContexta);
  return !v2;
}
