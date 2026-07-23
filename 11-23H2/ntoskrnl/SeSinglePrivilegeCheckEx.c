/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x14070FE3C
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x1402977BC (SepCheckForCriticalAceRemoval.c)
 *     SepValidOwnerSubjectContext @ 0x1406C7964 (SepValidOwnerSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x14072BF70 (RtlpSetSecurityObject.c)
 *     CmpSetAccessStateForBackupRestore @ 0x140880888 (CmpSetAccessStateForBackupRestore.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1406C384C (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x14072F4B0 (SePrivilegeCheck.c)
 */

BOOLEAN __fastcall SeSinglePrivilegeCheckEx(LUID a1, struct _SECURITY_SUBJECT_CONTEXT *a2, KPROCESSOR_MODE a3)
{
  BOOLEAN v5; // al
  BOOLEAN v6; // di
  struct _PRIVILEGE_SET v8; // [rsp+20h] [rbp-28h] BYREF

  v8.PrivilegeCount = 1;
  v8.Control = 1;
  v8.Privilege[0].Luid = a1;
  v8.Privilege[0].Attributes = 0;
  v5 = SePrivilegeCheck(&v8, a2, a3);
  v6 = v5;
  if ( a3 )
    SePrivilegedServiceAuditAlarm(0, (__int64 *)a2, (__int64)&v8, v5);
  return v6;
}
