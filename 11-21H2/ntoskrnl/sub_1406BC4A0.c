/*
 * XREFs of sub_1406BC4A0 @ 0x1406BC4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140723E0C @ 0x140723E0C (sub_140723E0C.c)
 *     sub_140724008 @ 0x140724008 (sub_140724008.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409C8548 @ 0x1409C8548 (sub_1409C8548.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406BC4A0(__int64 a1, int a2, char a3)
{
  char v5; // si
  __int64 v7; // rdx
  int v8; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !a3 )
    return 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v7) = v5;
  if ( (unsigned __int8)sub_140724008(&SubjectContext, v7) )
  {
    v8 = sub_140723E0C(a1, &P);
    if ( v8 >= 0 )
      sub_1409C8548((_DWORD)P, a2, (unsigned int)&SubjectContext, 0, 0);
  }
  else
  {
    v8 = -1073741727;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v8 == -1073741670 )
    sub_1409CF1A0(3221225626LL);
  return (unsigned int)v8;
}
