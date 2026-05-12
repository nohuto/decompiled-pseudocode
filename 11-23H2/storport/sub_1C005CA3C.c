/*
 * XREFs of sub_1C005CA3C @ 0x1C005CA3C
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C0009BC0 @ 0x1C0009BC0 (sub_1C0009BC0.c)
 *     sub_1C0017C68 @ 0x1C0017C68 (sub_1C0017C68.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C005CA3C(__int64 a1, __int64 a2, const GUID *a3, __int64 a4, char a5)
{
  int v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  char *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  int *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  v6 = 3;
  v7 = 0;
  v9 = &v6;
  v12 = 1LL;
  v11 = &a5;
  v10 = 4LL;
  v13 = &v7;
  v14 = 4LL;
  return sub_1C001579C(0LL, &stru_1C0083260, a3, 4u, &v8);
}
