/*
 * XREFs of sub_140723F80 @ 0x140723F80
 * Callers:
 *     sub_1406C5CA0 @ 0x1406C5CA0 (sub_1406C5CA0.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_1409C8548 @ 0x1409C8548 (sub_1409C8548.c)
 *     sub_1409C8774 @ 0x1409C8774 (sub_1409C8774.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB230 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     sub_1407243A0 @ 0x1407243A0 (sub_1407243A0.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_140882966 @ 0x140882966 (sub_140882966.c)
 */

__int64 __fastcall sub_140723F80(
        __int64 a1,
        const UNICODE_STRING *a2,
        char a3,
        char a4,
        __int64 a5,
        char a6,
        unsigned __int16 *a7)
{
  unsigned int v11; // r10d
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 v17; // ax

  *a7 = 118;
  v11 = a3 != 0 ? 3 : 0;
  v12 = v11 | 0x30;
  if ( !a4 )
    v12 = v11;
  result = sub_1407243A0(2LL, v12, a5);
  if ( (_BYTE)result )
  {
    if ( a1 || a6 )
    {
      LOBYTE(v16) = a4;
      LOBYTE(v15) = a3;
      v17 = sub_140882966(a1, a2, v15, v16);
    }
    else if ( a2 && RtlPrefixUnicodeString(&stru_140007018, a2, 0) )
    {
      v17 = 119;
    }
    else
    {
      v17 = 120;
    }
    LOBYTE(v15) = a4;
    *a7 = v17;
    LOBYTE(v14) = a3;
    return sub_140724320(v17, v14, v15, a5);
  }
  return result;
}
