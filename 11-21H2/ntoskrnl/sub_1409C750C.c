/*
 * XREFs of sub_1409C750C @ 0x1409C750C
 * Callers:
 *     sub_14066B204 @ 0x14066B204 (sub_14066B204.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     sub_140983E50 @ 0x140983E50 (sub_140983E50.c)
 * Callees:
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

void __fastcall sub_1409C750C(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  bool v12; // al
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  bool v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  _QWORD SubjectContext[5]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  memset(&SubjectContext[1], 0, 32);
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
  v8 = SubjectContext[3];
  v9 = SubjectContext[3];
  if ( SubjectContext[1] )
    v9 = SubjectContext[1];
  v10 = **(_QWORD **)(v9 + 152);
  memset(Src, 0, 0x418uLL);
  v11 = *(unsigned __int8 *)(v10 + 1);
  LODWORD(Src[0]) = 3;
  if ( SubjectContext[1] )
    v8 = SubjectContext[1];
  LODWORD(Src[2]) = 524411;
  HIDWORD(Src[3]) = 4 * v11 + 8;
  HIDWORD(Src[0]) = 4690;
  Src[10] = &qword_140001B08;
  Src[12] = *(_QWORD *)(v8 + 24);
  LODWORD(Src[3]) = 4;
  Src[6] = v10;
  Src[7] = 0x2000000001LL;
  Src[11] = 0x800000005LL;
  Src[15] = 0x80000000BLL;
  v12 = sub_1402F3558(a1, 0);
  Src[19] = __PAIR64__(v13, v14);
  v16 = v15 ^ 0xFFFFFFFF80000000uLL;
  LODWORD(Src[23]) = v14;
  if ( !v12 )
    v16 = a1;
  Src[20] = *(_QWORD *)(a3 + 1088);
  HIDWORD(Src[23]) = v13;
  Src[16] = v16 & 0xFFFFFFFFFFFFFFFCuLL;
  v17 = sub_1402F3558(a2, 0);
  v20 = v19 ^ v18;
  Src[27] = __PAIR64__(v22, v21);
  if ( !v17 )
    v20 = a2;
  Src[28] = *(_QWORD *)(a4 + 1088);
  LODWORD(Src[1]) = 7;
  Src[24] = v20 & 0xFFFFFFFFFFFFFFFCuLL;
  sub_1403CD84C(Src);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
}
