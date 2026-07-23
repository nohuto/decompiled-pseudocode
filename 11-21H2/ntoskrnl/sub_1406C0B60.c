/*
 * XREFs of sub_1406C0B60 @ 0x1406C0B60
 * Callers:
 *     sub_1406C08F0 @ 0x1406C08F0 (sub_1406C08F0.c)
 *     sub_1407F8B60 @ 0x1407F8B60 (sub_1407F8B60.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C1068 @ 0x1406C1068 (sub_1406C1068.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406C0B60(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *PrimaryToken; // rbx
  PULONG v4; // rax
  int v5; // ebx
  int v6; // ecx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-59h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-51h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-49h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v12; // [rsp+60h] [rbp-19h]
  _BYTE Sid[80]; // [rsp+70h] [rbp-9h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 4096;
  memset(Sid, 0, 0x44uLL);
  TokenInformation = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v12 = 0LL;
  *(_OWORD *)P = 0LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, *((PEPROCESS *)CurrentThread + 23), &SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( PrimaryToken[48] == 2 && (int)PrimaryToken[49] < 2 )
    goto LABEL_17;
  SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
  if ( !(_DWORD)TokenInformation
    || (LODWORD(v12) = SeQueryInformationToken(PrimaryToken, TokenAppContainerSid, P), (int)v12 >= 0) )
  {
    SeQueryInformationToken(PrimaryToken, TokenIntegrityLevel, (PVOID *)((char *)&TokenInformation + 4));
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    v4 = RtlSubAuthoritySid(Sid, 0);
    *v4 = HIDWORD(TokenInformation);
    P[1] = Sid;
    SeLockSubjectContext(&SubjectContext);
    v5 = sub_1406C1068(a1, sub_1406CC960, &SubjectContext);
    SeUnlockSubjectContext(&SubjectContext);
    v6 = v12;
    if ( (int)v12 >= 0 )
    {
      if ( v5 < 0 )
        v6 = v5;
      LODWORD(v12) = v6;
      if ( v6 >= 0 && P[0] && (v12 & 0x100000000LL) == 0 )
LABEL_17:
        LODWORD(v12) = -1073741790;
    }
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v12;
}
