/*
 * XREFs of SeCloseObjectAuditAlarmForNonObObject @ 0x1409CAD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409C8548 @ 0x1409C8548 (sub_1409C8548.c)
 */

void __fastcall SeCloseObjectAuditAlarmForNonObObject(
        const UNICODE_STRING *a1,
        unsigned __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        char a4)
{
  if ( a4 )
    sub_1409C8548(a1, a2, a3, 0LL, 1);
}
