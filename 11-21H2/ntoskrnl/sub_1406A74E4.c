/*
 * XREFs of sub_1406A74E4 @ 0x1406A74E4
 * Callers:
 *     sub_1406A7498 @ 0x1406A7498 (sub_1406A7498.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406A74E4(__int64 *a1)
{
  _BYTE *v1; // r14
  char *v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r12
  int v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // edi
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  __int64 result; // rax
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v1 = &unk_140D3BDAE;
  v2 = (char *)&unk_140D3BD8E;
  v14 = *a1;
  v3 = 30LL;
  v4 = 16LL;
  v5 = BYTE3(v14) | ((BYTE2(v14) | ((BYTE1(v14) | ((unsigned __int8)*a1 << 8)) << 8)) << 8);
  v6 = HIBYTE(v14) | ((BYTE6(v14) | ((BYTE5(v14) | (BYTE4(v14) << 8)) << 8)) << 8);
  do
  {
    if ( v1[1] < 0x1Fu )
      v6 ^= sub_14042A5E0(v3 + 1, (unsigned __int8)*(v2 - 2));
    if ( *v1 < 0x1Fu )
      v5 ^= sub_14042A5E0(v3, (unsigned __int8)*(v2 - 6));
    v3 -= 2LL;
    v1 -= 2;
    v2 -= 8;
    --v4;
  }
  while ( v4 );
  v7 = ~v6;
  BYTE3(v15) = v5;
  v8 = __ROR4__(v5, 8);
  HIBYTE(v15) = v7;
  v9 = __ROR4__(v7, 8);
  BYTE2(v15) = v8;
  v10 = __ROR4__(v8, 8);
  BYTE6(v15) = v9;
  v11 = __ROR4__(v9, 8);
  BYTE1(v15) = v10;
  BYTE5(v15) = v11;
  BYTE4(v15) = __ROR4__(v11, 8);
  LOBYTE(v15) = __ROR4__(v10, 8);
  result = v15;
  *a1 = v15;
  return result;
}
