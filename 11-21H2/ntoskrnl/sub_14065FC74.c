/*
 * XREFs of sub_14065FC74 @ 0x14065FC74
 * Callers:
 *     sub_14065F3BC @ 0x14065F3BC (sub_14065F3BC.c)
 *     sub_14065F7D4 @ 0x14065F7D4 (sub_14065F7D4.c)
 *     sub_14095618C @ 0x14095618C (sub_14095618C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

BOOLEAN __fastcall sub_14065FC74(unsigned int a1)
{
  KPROCESSOR_MODE v1; // bl
  BOOLEAN v2; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-50h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-30h] BYREF

  RequiredPrivileges.Privilege[0].Attributes = 0;
  v1 = *((_BYTE *)KeGetCurrentThread() + 562);
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Luid = (LUID)a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, v1);
  SeReleaseSubjectContext(&SubjectContext);
  return v2;
}
