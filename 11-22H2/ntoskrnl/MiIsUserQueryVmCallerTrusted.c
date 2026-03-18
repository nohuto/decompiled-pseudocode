/*
 * XREFs of MiIsUserQueryVmCallerTrusted @ 0x1407D08DC
 * Callers:
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     Feature_Servicing_SePrivilegeCheck__private_IsEnabledDeviceUsage @ 0x140419ACC (Feature_Servicing_SePrivilegeCheck__private_IsEnabledDeviceUsage.c)
 *     PsReferenceEffectiveToken @ 0x14071D75C (PsReferenceEffectiveToken.c)
 *     SePrivilegeCheck @ 0x14072F320 (SePrivilegeCheck.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x1407380F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     SeTokenIsAdmin @ 0x1407D0A20 (SeTokenIsAdmin.c)
 */

_BOOL8 __fastcall MiIsUserQueryVmCallerTrusted(PETHREAD Thread)
{
  void *v2; // rdi
  struct _KPROCESS *Process; // rdx
  BOOL v4; // esi
  _BYTE v6[4]; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+34h] [rbp-4Ch] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-40h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+60h] [rbp-20h] BYREF

  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v2 = (void *)PsReferenceEffectiveToken((__int64)Thread, 0x74726853u, &v7, v6, (__int64)v8, 0LL);
  if ( (unsigned int)Feature_Servicing_SePrivilegeCheck__private_IsEnabledDeviceUsage() )
  {
    if ( !SeTokenIsAdmin(v2) )
    {
      Process = Thread->ApcState.Process;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      RequiredPrivileges.Privilege[0].Luid = SeProfileSingleProcessPrivilege;
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      SeCaptureSubjectContextEx(Thread, Process, &SubjectContext);
      v4 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, 1) != 0;
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v4 = 0;
  if ( SeTokenIsAdmin(v2) || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, 1) )
LABEL_6:
    v4 = 1;
LABEL_7:
  if ( v7 == 1 )
  {
    ObFastDereferenceObject(
      (signed __int64 *)&Thread->Process[1].Affinity.StaticBitmap[5],
      (unsigned __int64)v2,
      0x74726853u);
  }
  else if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x74726853u);
  }
  return v4;
}
