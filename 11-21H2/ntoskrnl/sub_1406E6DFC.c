/*
 * XREFs of sub_1406E6DFC @ 0x1406E6DFC
 * Callers:
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409B9218 @ 0x1409B9218 (sub_1409B9218.c)
 */

__int64 __fastcall sub_1406E6DFC(PSID a1)
{
  int v2; // ebx
  char v3; // di
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v3 = 1;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  if ( SubjectContext.ClientToken )
  {
    if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
    {
      v3 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    ClientToken = SubjectContext.PrimaryToken;
  }
  v2 = *((_DWORD *)ClientToken + 50) & 0x2000;
LABEL_4:
  if ( !v2 && v3 && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
    v2 = (unsigned __int8)sub_1409B9218(*((PSID *)ClientToken + 98), a1);
  SeReleaseSubjectContext(&SubjectContext);
  return v2 == 0 ? 0xC0000022 : 0;
}
