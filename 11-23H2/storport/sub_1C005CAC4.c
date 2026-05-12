/*
 * XREFs of sub_1C005CAC4 @ 0x1C005CAC4
 * Callers:
 *     sub_1C0062A44 @ 0x1C0062A44 (sub_1C0062A44.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C005CAC4(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v11 = 1LL;
  v8 = &v14;
  v13 = 1LL;
  v10 = &a5;
  v9 = 4LL;
  v12 = &a6;
  return sub_1C001579C(a1, &stru_1C0083250, 0LL, 4u, &v7);
}
