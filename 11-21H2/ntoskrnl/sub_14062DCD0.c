/*
 * XREFs of sub_14062DCD0 @ 0x14062DCD0
 * Callers:
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062DCD0(__int64 a1, __int64 a2, char a3, char a4, char a5, char a6)
{
  int v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+34h] [rbp-2Ch]
  char v8; // [rsp+38h] [rbp-28h]
  char v9; // [rsp+39h] [rbp-27h]
  char v10; // [rsp+3Ah] [rbp-26h]
  char v11; // [rsp+3Bh] [rbp-25h]
  int *v12; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+4Ch] [rbp-14h]

  v6 = *(_DWORD *)(a1 + 1232);
  if ( a2 )
    v7 = *(_DWORD *)(a2 + 1232);
  else
    v7 = -1;
  v14 = 0;
  v10 = a5;
  v11 = a6;
  v8 = a3;
  v9 = a4;
  v12 = &v6;
  v13 = 12;
  sub_14035EDE4((__int64)&v12, 1u, 0x20040000u, 0xF77u, 0x400A02u);
}
