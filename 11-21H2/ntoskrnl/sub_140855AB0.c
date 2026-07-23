/*
 * XREFs of sub_140855AB0 @ 0x140855AB0
 * Callers:
 *     sub_140855A64 @ 0x140855A64 (sub_140855A64.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140855AB0(__int64 *a1)
{
  _BYTE *v1; // r14
  char *v2; // rsi
  int v3; // edi
  __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // r12
  int v7; // edi
  int v8; // ebx
  int v9; // edi
  int v10; // ebx
  __int64 result; // rax
  __int64 v13; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+50h] [rbp-10h]

  v1 = &unk_140D3BD90;
  v2 = (char *)&unk_140D3BD12;
  v13 = *a1;
  v3 = BYTE3(v13) | ((BYTE2(v13) | ((BYTE1(v13) | ((unsigned __int8)v13 << 8)) << 8)) << 8);
  v4 = 0LL;
  v5 = ~(HIBYTE(v13) | ((BYTE6(v13) | ((BYTE5(v13) | (BYTE4(v13) << 8)) << 8)) << 8));
  v6 = 16LL;
  do
  {
    if ( *v1 < 0x1Fu )
      v3 ^= sub_14042A5E0(v4, (unsigned __int8)*(v2 - 2));
    if ( v1[1] < 0x1Fu )
      v5 ^= sub_14042A5E0(v4 + 1, (unsigned __int8)v2[2]);
    v4 += 2LL;
    v1 += 2;
    v2 += 8;
    --v6;
  }
  while ( v6 );
  BYTE3(v14) = v3;
  v7 = __ROR4__(v3, 8);
  HIBYTE(v14) = v5;
  BYTE2(v14) = v7;
  v8 = __ROR4__(v5, 8);
  v9 = __ROR4__(v7, 8);
  BYTE6(v14) = v8;
  BYTE1(v14) = v9;
  v10 = __ROR4__(v8, 8);
  BYTE5(v14) = v10;
  BYTE4(v14) = __ROR4__(v10, 8);
  LOBYTE(v14) = __ROR4__(v9, 8);
  result = v14;
  *a1 = v14;
  return result;
}
