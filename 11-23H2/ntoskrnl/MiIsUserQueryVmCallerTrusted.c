/*
 * XREFs of MiIsUserQueryVmCallerTrusted @ 0x1407D064C
 * Callers:
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x140297F10 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PsReferenceEffectiveToken @ 0x14071D8EC (PsReferenceEffectiveToken.c)
 *     SePrivilegeCheck @ 0x14072F4B0 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140737E90 (SeCaptureSubjectContextEx.c)
 *     SeTokenIsAdmin @ 0x1407D0770 (SeTokenIsAdmin.c)
 */

_BOOL8 __fastcall MiIsUserQueryVmCallerTrusted(PETHREAD Thread)
{
  void *v2; // rdi
  BOOL v3; // esi
  struct _KPROCESS *Process; // rdx
  _BYTE v6[4]; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+34h] [rbp-4Ch] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-40h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+60h] [rbp-20h] BYREF

  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v2 = (void *)PsReferenceEffectiveToken((__int64)Thread, 0x74726853u, &v7, v6, (__int64)v8, 0LL);
  if ( SeTokenIsAdmin(v2) )
  {
    v3 = 1;
  }
  else
  {
    Process = Thread->ApcState.Process;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    RequiredPrivileges.Privilege[0].Luid = SeProfileSingleProcessPrivilege;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    SeCaptureSubjectContextEx(Thread, Process, &SubjectContext);
    v3 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, 1) != 0;
    SeReleaseSubjectContext(&SubjectContext);
  }
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
  return v3;
}
