/*
 * XREFs of RtlIsSandboxedToken @ 0x1407F3790
 * Callers:
 *     IopCheckInitiatorHint @ 0x1402118B0 (IopCheckInitiatorHint.c)
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     CmpCheckCreateAccess @ 0x1406C0848 (CmpCheckCreateAccess.c)
 *     ObpParseSymbolicLinkEx @ 0x1406C70C0 (ObpParseSymbolicLinkEx.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     NtDuplicateToken @ 0x1407353C0 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     ObpGetShadowDirectory @ 0x1407B49BC (ObpGetShadowDirectory.c)
 *     ObpCreateDirectoryObject @ 0x1407F1610 (ObpCreateDirectoryObject.c)
 *     SepFilterToken @ 0x1407F1C00 (SepFilterToken.c)
 *     ObCreateSymbolicLink @ 0x1407F3368 (ObCreateSymbolicLink.c)
 * Callees:
 *     SeQueryInformationToken @ 0x1407196A0 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737C70 (SeCaptureSubjectContext.c)
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
  if ( SeQueryInformationToken(ClientToken, MaxTokenInfoClass, &TokenInformation) >= 0 )
    v2 = (_BYTE)TokenInformation == 0;
  if ( p_SubjectContexta == &SubjectContexta )
    SeReleaseSubjectContext(p_SubjectContexta);
  return !v2;
}
