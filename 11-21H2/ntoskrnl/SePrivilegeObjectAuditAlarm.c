/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x140724160
 * Callers:
 *     sub_1406E856C @ 0x1406E856C (sub_1406E856C.c)
 *     sub_140701A98 @ 0x140701A98 (sub_140701A98.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 * Callees:
 *     sub_1407241BC @ 0x1407241BC (sub_1407241BC.c)
 */

__int64 __fastcall SePrivilegeObjectAuditAlarm(int a1, __int64 *a2, int a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax

  if ( a6 )
    return sub_1407241BC((unsigned int)&qword_140001B08, 0, 0, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
