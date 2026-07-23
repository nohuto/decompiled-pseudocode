/*
 * XREFs of sub_1409CAC10 @ 0x1409CAC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140723E0C @ 0x140723E0C (sub_140723E0C.c)
 *     sub_140724008 @ 0x140724008 (sub_140724008.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409C8774 @ 0x1409C8774 (sub_1409C8774.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409CAC10(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  char v5; // bl
  int v7; // ebx
  __int64 v8; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !a3 )
    return 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SubjectContext.PrimaryToken )
  {
    if ( sub_140724008((__int64)&SubjectContext, v5) )
    {
      v7 = sub_140723E0C(a1, (__int64)&P);
      if ( v7 >= 0 )
        sub_1409C8774((const UNICODE_STRING *)P, a2, (__int64 *)&SubjectContext, 0LL, 0LL, 0);
    }
    else
    {
      v7 = -1073741727;
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( P )
      ExFreePoolWithTag(P, 0);
    v8 = 3221225626LL;
    if ( v7 != -1073741670 )
      return (unsigned int)v7;
  }
  else
  {
    v7 = -1073741700;
    v8 = 3221225596LL;
  }
  sub_1409CF1A0(v8);
  return (unsigned int)v7;
}
