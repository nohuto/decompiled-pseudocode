/*
 * XREFs of SeCheckPrivilegedObject @ 0x1407E0064
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     PspSetProcessPriorityClass @ 0x1407E3860 (PspSetProcessPriorityClass.c)
 *     PspAssignPrimaryToken @ 0x140840128 (PspAssignPrimaryToken.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1406C3310 (SePrivilegeObjectAuditAlarm.c)
 *     SePrivilegeCheck @ 0x14072F2B0 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737C70 (SeCaptureSubjectContext.c)
 */

BOOLEAN __fastcall SeCheckPrivilegedObject(LUID a1, int a2, int a3, KPROCESSOR_MODE a4)
{
  BOOLEAN v7; // al
  BOOLEAN v8; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-40h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-20h] BYREF

  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.Privilege[0].Luid = a1;
  RequiredPrivileges.PrivilegeCount = 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  RequiredPrivileges.Control = 1;
  SeCaptureSubjectContext(&SubjectContext);
  v7 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, a4);
  v8 = v7;
  if ( a4 )
    SePrivilegeObjectAuditAlarm(a2, (__int64 *)&SubjectContext, a3, (__int64)&RequiredPrivileges, v7, a4);
  SeReleaseSubjectContext(&SubjectContext);
  return v8;
}
