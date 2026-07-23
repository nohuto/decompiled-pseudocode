/*
 * XREFs of sub_140796798 @ 0x140796798
 * Callers:
 *     sub_1406D2394 @ 0x1406D2394 (sub_1406D2394.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_140796040 @ 0x140796040 (sub_140796040.c)
 * Callees:
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_140792A4C @ 0x140792A4C (sub_140792A4C.c)
 *     sub_1407968D0 @ 0x1407968D0 (sub_1407968D0.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall sub_140796798(__int64 a1, _DWORD *a2, __int64 a3, char a4, __int64 **a5)
{
  int v6; // esi
  unsigned int v9; // ebx
  __int64 *v10; // rdi
  void *v11; // rbx
  ACCESS_MASK v12; // r9d
  __int64 result; // rax
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-48h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-44h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-40h] BYREF

  v6 = a3;
  v9 = 0;
  v10 = (__int64 *)sub_1407968D0(a1, a2, a3);
  if ( v10 || (v10 = sub_140792A4C(a1, a2, v6)) != 0LL )
  {
    if ( a4 )
    {
      v11 = (void *)v10[9];
      AccessStatus = 0;
      GrantedAccess = 0;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContext(&SubjectContext);
      v12 = 2048;
      if ( v6 == 2 )
        v12 = 4096;
      SeAccessCheck(
        v11,
        &SubjectContext,
        0,
        v12,
        0,
        0LL,
        (PGENERIC_MAPPING)&stru_140010DA8,
        1,
        &GrantedAccess,
        &AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      v9 = AccessStatus;
      if ( AccessStatus < 0 )
      {
        sub_140796B04(v10);
        v10 = 0LL;
      }
    }
  }
  else
  {
    v9 = -1073741801;
  }
  result = v9;
  *a5 = v10;
  return result;
}
