/*
 * XREFs of sub_1406A74E4 @ 0x1406A74E4
 * Callers:
 *     sub_1406A7498 @ 0x1406A7498 (sub_1406A7498.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     sub_1406A31E0 @ 0x1406A31E0 (sub_1406A31E0.c)
 *     sub_1406A53A0 @ 0x1406A53A0 (sub_1406A53A0.c)
 *     sub_1406A5460 @ 0x1406A5460 (sub_1406A5460.c)
 *     sub_1406A6FA0 @ 0x1406A6FA0 (sub_1406A6FA0.c)
 *     sub_1406A7060 @ 0x1406A7060 (sub_1406A7060.c)
 *     sub_1406A70E0 @ 0x1406A70E0 (sub_1406A70E0.c)
 *     sub_1406A76C0 @ 0x1406A76C0 (sub_1406A76C0.c)
 *     sub_1406A7740 @ 0x1406A7740 (sub_1406A7740.c)
 *     sub_1406A7B80 @ 0x1406A7B80 (sub_1406A7B80.c)
 *     sub_1406A8A50 @ 0x1406A8A50 (sub_1406A8A50.c)
 *     sub_1406A95F0 @ 0x1406A95F0 (sub_1406A95F0.c)
 *     sub_1406A96A0 @ 0x1406A96A0 (sub_1406A96A0.c)
 *     sub_1406A9740 @ 0x1406A9740 (sub_1406A9740.c)
 *     sub_1406ACAB0 @ 0x1406ACAB0 (sub_1406ACAB0.c)
 *     sub_1406ACDB0 @ 0x1406ACDB0 (sub_1406ACDB0.c)
 *     sub_1406AD150 @ 0x1406AD150 (sub_1406AD150.c)
 *     sub_1406AD280 @ 0x1406AD280 (sub_1406AD280.c)
 *     sub_1406AD320 @ 0x1406AD320 (sub_1406AD320.c)
 *     sub_1406AD3C0 @ 0x1406AD3C0 (sub_1406AD3C0.c)
 *     sub_1406B4680 @ 0x1406B4680 (sub_1406B4680.c)
 *     sub_1406B4740 @ 0x1406B4740 (sub_1406B4740.c)
 *     sub_1406B4DF0 @ 0x1406B4DF0 (sub_1406B4DF0.c)
 *     sub_1406B5F50 @ 0x1406B5F50 (sub_1406B5F50.c)
 *     sub_1406B8790 @ 0x1406B8790 (sub_1406B8790.c)
 *     sub_1406B8D60 @ 0x1406B8D60 (sub_1406B8D60.c)
 *     sub_1406D20B0 @ 0x1406D20B0 (sub_1406D20B0.c)
 *     sub_1406D4F40 @ 0x1406D4F40 (sub_1406D4F40.c)
 *     sub_1406D7520 @ 0x1406D7520 (sub_1406D7520.c)
 *     sub_1406E0840 @ 0x1406E0840 (sub_1406E0840.c)
 *     sub_140884100 @ 0x140884100 (sub_140884100.c)
 */

__int64 __fastcall sub_1406A74E4(__int64 *a1)
{
  unsigned __int8 *v1; // r14
  unsigned __int8 *v2; // rsi
  int v3; // edi
  __int64 v4; // r15
  __int64 v5; // r12
  int v6; // edi
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // edi
  int v14; // ebx
  __int64 result; // rax
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_140D3BDAE;
  v2 = (unsigned __int8 *)&unk_140D3BD8E;
  v3 = (unsigned __int8)*a1;
  v18 = *a1;
  v4 = 30LL;
  v5 = 16LL;
  v6 = BYTE3(v18) | ((BYTE2(v18) | ((BYTE1(v18) | (v3 << 8)) << 8)) << 8);
  v17 = qword_140D3B2B0;
  v7 = HIBYTE(v18) | ((BYTE6(v18) | ((BYTE5(v18) | (BYTE4(v18) << 8)) << 8)) << 8);
  do
  {
    v8 = v1[1];
    if ( (unsigned __int8)v8 < 0x1Fu )
      v7 ^= funcs_1406A763D[v8](v4 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
    v9 = *v1;
    if ( (unsigned __int8)v9 < 0x1Fu )
      v6 ^= funcs_1406A763D[v9](v4, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v17, v7);
    v4 -= 2LL;
    v1 -= 2;
    v2 -= 8;
    --v5;
  }
  while ( v5 );
  v10 = ~v7;
  BYTE3(v18) = v6;
  v11 = __ROR4__(v6, 8);
  HIBYTE(v18) = v10;
  v12 = __ROR4__(v10, 8);
  BYTE2(v18) = v11;
  v13 = __ROR4__(v11, 8);
  BYTE6(v18) = v12;
  v14 = __ROR4__(v12, 8);
  BYTE1(v18) = v13;
  BYTE5(v18) = v14;
  BYTE4(v18) = __ROR4__(v14, 8);
  LOBYTE(v18) = __ROR4__(v13, 8);
  result = v18;
  *a1 = v18;
  return result;
}
