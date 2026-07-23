/*
 * XREFs of sub_1406C5404 @ 0x1406C5404
 * Callers:
 *     sub_1406C505C @ 0x1406C505C (sub_1406C505C.c)
 *     sub_140784700 @ 0x140784700 (sub_140784700.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall sub_1406C5404(PSECURITY_SUBJECT_CONTEXT SubjectContext, char a2, PVOID *a3)
{
  NTSTATUS InformationToken; // esi
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // rbx
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+20h] [rbp-28h] BYREF

  InformationToken = 0;
  *(_DWORD *)a3 = 0;
  p_SubjectContexta = SubjectContext;
  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  if ( a2 )
  {
    if ( !SubjectContext )
    {
      p_SubjectContexta = &SubjectContexta;
      SeCaptureSubjectContext(&SubjectContexta);
    }
    ClientToken = p_SubjectContexta->ClientToken;
    if ( !p_SubjectContexta->ClientToken )
      ClientToken = p_SubjectContexta->PrimaryToken;
    InformationToken = SeQueryInformationToken(ClientToken, TokenIntegrityLevel, a3);
    if ( InformationToken < 0 )
      *(_DWORD *)a3 = 0;
    if ( p_SubjectContexta == &SubjectContexta )
      SeReleaseSubjectContext(p_SubjectContexta);
  }
  else
  {
    *(_DWORD *)a3 = 20480;
  }
  return (unsigned int)InformationToken;
}
