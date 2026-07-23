/*
 * XREFs of sub_1409E24C0 @ 0x1409E24C0
 * Callers:
 *     sub_1409ABCF4 @ 0x1409ABCF4 (sub_1409ABCF4.c)
 *     sub_1409B1DA0 @ 0x1409B1DA0 (sub_1409B1DA0.c)
 *     sub_1409B1E4C @ 0x1409B1E4C (sub_1409B1E4C.c)
 *     sub_1409B1F54 @ 0x1409B1F54 (sub_1409B1F54.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_1409E24C0(__int64 a1, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6; // [rsp+40h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-28h]
  int *v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+88h] [rbp+18h] BYREF

  v10 = a2;
  v2 = qword_140C15FF8;
  result = EtwEventEnabled(qword_140C15FF8, &stru_140039A00);
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 16LL;
    UserData.Ptr = a1 + 1432;
    v7 = 4LL;
    v6 = a1 + 1428;
    v9 = 4LL;
    v8 = &v10;
    return EtwWrite(v2, &stru_140039A00, 0LL, 3u, &UserData);
  }
  return result;
}
