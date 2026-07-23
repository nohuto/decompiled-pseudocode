/*
 * XREFs of sub_140882966 @ 0x140882966
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_1406CE5F8 @ 0x1406CE5F8 (sub_1406CE5F8.c)
 *     sub_140723F80 @ 0x140723F80 (sub_140723F80.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_1409C820C @ 0x1409C820C (sub_1409C820C.c)
 * Callees:
 *     sub_1402A4700 @ 0x1402A4700 (sub_1402A4700.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     sub_1409CE5F8 @ 0x1409CE5F8 (sub_1409CE5F8.c)
 */

__int64 __fastcall sub_140882966(__int64 a1, const UNICODE_STRING *a2, char a3, char a4)
{
  POBJECT_TYPE *v5; // rax
  __int64 v6; // r11
  unsigned __int16 v7; // r9
  __int64 v8; // r11

  if ( !a1 )
  {
    if ( !a2 )
      return 118LL;
    if ( !RtlCompareUnicodeString(a2, &stru_14000A968, 0) )
      return 116LL;
    if ( RtlCompareUnicodeString(a2, &stru_14000A978, 0) )
      return 118LL;
    return 117LL;
  }
  v5 = (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( v5 == CmKeyObjectType )
    return 117LL;
  if ( v5 == IoFileObjectType )
  {
    if ( sub_1402A4700(128, a3, a4) && (unsigned __int8)sub_1409CE5F8(*(_QWORD *)(v6 + 8)) == 1 )
      return v7;
    return 116LL;
  }
  if ( v5 == (POBJECT_TYPE *)IoDeviceObjectType && sub_1402A4700(128, a3, a4) && (unsigned __int8)sub_1409CE5F8(v8) == 1 )
    return v7;
  return 118LL;
}
