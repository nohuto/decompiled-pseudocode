/*
 * XREFs of sub_140790C44 @ 0x140790C44
 * Callers:
 *     sub_140790B38 @ 0x140790B38 (sub_140790B38.c)
 * Callees:
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     sub_140790CA8 @ 0x140790CA8 (sub_140790CA8.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall sub_140790C44(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a3 || (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 0LL;
  SeCaptureSubjectContextEx(0LL, *(PEPROCESS *)(a1 + 80), &SubjectContext);
  v5 = sub_140790CA8(a2, 512LL, &SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return v5;
}
