/*
 * XREFs of sub_1C0041B20 @ 0x1C0041B20
 * Callers:
 *     sub_1C0043430 @ 0x1C0043430 (sub_1C0043430.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0041B20(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return sub_1C001579C(4LL, &stru_1C0088B00, 0LL, 3u, &v6);
}
