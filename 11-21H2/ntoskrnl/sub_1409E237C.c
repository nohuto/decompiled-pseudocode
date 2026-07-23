/*
 * XREFs of sub_1409E237C @ 0x1409E237C
 * Callers:
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409E237C(__int64 a1, int a2, int a3)
{
  int v3; // r9d
  __int64 v4; // rax
  _QWORD v5[2]; // [rsp+30h] [rbp-40h] BYREF
  int v6; // [rsp+40h] [rbp-30h]
  int v7; // [rsp+44h] [rbp-2Ch]
  int v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+4Ch] [rbp-24h]
  _QWORD v10[2]; // [rsp+50h] [rbp-20h] BYREF

  v5[0] = 0LL;
  v3 = 0;
  v5[1] = 0LL;
  if ( a1 && (v4 = *(_QWORD *)(a1 + 1296), v3 = *(_DWORD *)(a1 + 1088), v4) )
    v6 = *(_DWORD *)(v4 + 1428);
  else
    v6 = 0;
  v7 = v3;
  v8 = a2;
  v9 = a3;
  v10[0] = v5;
  v10[1] = 32LL;
  sub_14035EDE4((__int64)v10, 1u, 0x80000u, 0x724u, 0x501904u);
}
