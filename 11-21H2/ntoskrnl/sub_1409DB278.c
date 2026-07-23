/*
 * XREFs of sub_1409DB278 @ 0x1409DB278
 * Callers:
 *     sub_1409DAEE4 @ 0x1409DAEE4 (sub_1409DAEE4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14081549C @ 0x14081549C (sub_14081549C.c)
 */

NTSTATUS __fastcall sub_1409DB278(ULONGLONG a1, __int16 a2, const GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  __int16 *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int16 v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  if ( !a1 || !a3 )
    return -1073741811;
  v4.Reserved = 0;
  v7 = 0;
  v5 = &v8;
  v4.Ptr = a1;
  v4.Size = 16;
  v6 = 2;
  return sub_14081549C(a1, &stru_140038B20, a3, 2u, &v4);
}
