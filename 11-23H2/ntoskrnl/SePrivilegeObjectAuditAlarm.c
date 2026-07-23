/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x1406C3340
 * Callers:
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     PspCreateObjectHandle @ 0x14073F9A0 (PspCreateObjectHandle.c)
 *     SeCheckPrivilegedObject @ 0x1407E0334 (SeCheckPrivilegedObject.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C339C (SepAdtPrivilegeObjectAuditAlarm.c)
 */

__int64 __fastcall SePrivilegeObjectAuditAlarm(int a1, __int64 *a2, int a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax

  if ( a6 )
    return SepAdtPrivilegeObjectAuditAlarm((unsigned int)&SeSubsystemName, 0, 0, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
