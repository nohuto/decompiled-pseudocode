/*
 * XREFs of ObpVerifyCreatorAccessCheck @ 0x1407C9098
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1407C8E30 (NtCreatePrivateNamespace.c)
 *     NtDeletePrivateNamespace @ 0x140886460 (NtDeletePrivateNamespace.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402979B0 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     SeUnlockSubjectContext @ 0x1406C31E0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406C3220 (SeLockSubjectContext.c)
 *     SeQueryInformationToken @ 0x140719710 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContextEx @ 0x1407380F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     RtlInitializeSid @ 0x140782560 (RtlInitializeSid.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1407C9578 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpVerifyCreatorAccessCheck(__int64 a1)
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
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( PrimaryToken[48] == 2 && (int)PrimaryToken[49] < 2 )
    goto LABEL_14;
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
    v5 = RtlEnumerateBoundaryDescriptorEntries(a1, ObpVerifyAccessToBoundaryEntry, &SubjectContext);
    SeUnlockSubjectContext(&SubjectContext);
    v6 = v12;
    if ( (int)v12 >= 0 )
    {
      if ( v5 < 0 )
        v6 = v5;
      LODWORD(v12) = v6;
      if ( v6 >= 0 && P[0] && (v12 & 0x100000000LL) == 0 )
LABEL_14:
        LODWORD(v12) = -1073741790;
    }
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v12;
}
