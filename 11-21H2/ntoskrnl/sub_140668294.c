/*
 * XREFs of sub_140668294 @ 0x140668294
 * Callers:
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 *     RtlMapGenericMask @ 0x140728CB0 (RtlMapGenericMask.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall sub_140668294(signed __int64 *Process, KPROCESSOR_MODE a2, void *a3, void *a4)
{
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  void *v11; // rbx
  int InformationToken; // eax
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-69h] BYREF
  ACCESS_MASK AccessMask[2]; // [rsp+58h] [rbp-61h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-59h] BYREF
  _BYTE Sid2[80]; // [rsp+80h] [rbp-39h] BYREF

  AccessStatus = 0;
  if ( a3 )
  {
    *(_QWORD *)AccessMask = 0LL;
    memset(Sid2, 0, 0x44uLL);
    v11 = (void *)sub_140347920((__int64)Process, 0x746C6644u);
    InformationToken = SeQueryInformationToken(v11, TokenIsAppContainer, (PVOID *)AccessMask);
    AccessStatus = InformationToken;
    if ( InformationToken >= 0 )
    {
      if ( *(_QWORD *)AccessMask )
        InformationToken = -1073741152;
      AccessStatus = InformationToken;
      if ( InformationToken >= 0 )
        sub_14066A374(v11, Sid2, 68LL);
    }
    sub_1402F89B0(Process + 151, (unsigned __int64)v11, 0x746C6644u);
    v9 = AccessStatus;
    if ( AccessStatus < 0 )
      return v9;
    if ( !RtlEqualSid(a3, Sid2) )
      v9 = -1073741152;
    AccessStatus = v9;
    if ( (v9 & 0x80000000) != 0 )
      return v9;
  }
  if ( !a4 )
    return 0LL;
  AccessMask[0] = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContextEx(0LL, (PEPROCESS)Process, &SubjectContext);
  SeAccessCheck(
    a4,
    &SubjectContext,
    0,
    0x2000000u,
    0,
    0LL,
    (PGENERIC_MAPPING)((char *)qword_140D069D8 + 76),
    a2,
    AccessMask,
    &AccessStatus);
  RtlMapGenericMask(AccessMask, (PGENERIC_MAPPING)((char *)qword_140D069D8 + 76));
  v8 = AccessStatus;
  if ( (AccessMask[0] & 1) == 0 )
    v8 = -1073741152;
  AccessStatus = v8;
  SeReleaseSubjectContext(&SubjectContext);
  v9 = AccessStatus;
  if ( AccessStatus < 0 )
    return v9;
  else
    return 0LL;
}
