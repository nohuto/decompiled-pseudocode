/*
 * XREFs of sub_1407AED14 @ 0x1407AED14
 * Callers:
 *     sub_1407AECC8 @ 0x1407AECC8 (sub_1407AECC8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     sub_1407ABF60 @ 0x1407ABF60 (sub_1407ABF60.c)
 *     sub_1407AC160 @ 0x1407AC160 (sub_1407AC160.c)
 *     sub_1407AD660 @ 0x1407AD660 (sub_1407AD660.c)
 *     sub_1407AE980 @ 0x1407AE980 (sub_1407AE980.c)
 *     sub_1407AEEC0 @ 0x1407AEEC0 (sub_1407AEEC0.c)
 *     sub_1407AF010 @ 0x1407AF010 (sub_1407AF010.c)
 *     sub_1407AF080 @ 0x1407AF080 (sub_1407AF080.c)
 *     sub_1407AF100 @ 0x1407AF100 (sub_1407AF100.c)
 *     sub_1407AF630 @ 0x1407AF630 (sub_1407AF630.c)
 *     sub_1407AF6B0 @ 0x1407AF6B0 (sub_1407AF6B0.c)
 *     sub_1407B50E0 @ 0x1407B50E0 (sub_1407B50E0.c)
 *     sub_1407B5D70 @ 0x1407B5D70 (sub_1407B5D70.c)
 *     sub_1407B5DA0 @ 0x1407B5DA0 (sub_1407B5DA0.c)
 *     sub_1407B5E40 @ 0x1407B5E40 (sub_1407B5E40.c)
 *     sub_1407B5E70 @ 0x1407B5E70 (sub_1407B5E70.c)
 *     sub_1407B6380 @ 0x1407B6380 (sub_1407B6380.c)
 *     sub_1407B6790 @ 0x1407B6790 (sub_1407B6790.c)
 *     sub_1407B7200 @ 0x1407B7200 (sub_1407B7200.c)
 *     sub_1407B9550 @ 0x1407B9550 (sub_1407B9550.c)
 *     sub_1407B9AA0 @ 0x1407B9AA0 (sub_1407B9AA0.c)
 *     sub_1407BA9A0 @ 0x1407BA9A0 (sub_1407BA9A0.c)
 *     sub_1407BC970 @ 0x1407BC970 (sub_1407BC970.c)
 *     sub_1407BDBB0 @ 0x1407BDBB0 (sub_1407BDBB0.c)
 *     sub_1407BDF40 @ 0x1407BDF40 (sub_1407BDF40.c)
 *     sub_1407BE5C0 @ 0x1407BE5C0 (sub_1407BE5C0.c)
 *     sub_1407BE660 @ 0x1407BE660 (sub_1407BE660.c)
 *     sub_1407C1960 @ 0x1407C1960 (sub_1407C1960.c)
 *     sub_1407C32A0 @ 0x1407C32A0 (sub_1407C32A0.c)
 *     sub_1407C5260 @ 0x1407C5260 (sub_1407C5260.c)
 *     sub_1407C6AD0 @ 0x1407C6AD0 (sub_1407C6AD0.c)
 */

__int64 __fastcall sub_1407AED14(__int64 *a1)
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

  v1 = (unsigned __int8 *)&unk_140D53D7E;
  v2 = (unsigned __int8 *)&unk_140D53D5E;
  v3 = (unsigned __int8)*a1;
  v18 = *a1;
  v4 = 30LL;
  v5 = 16LL;
  v6 = BYTE3(v18) | ((BYTE2(v18) | ((BYTE1(v18) | (v3 << 8)) << 8)) << 8);
  v17 = qword_140D532E0;
  v7 = HIBYTE(v18) | ((BYTE6(v18) | ((BYTE5(v18) | (BYTE4(v18) << 8)) << 8)) << 8);
  do
  {
    v8 = v1[1];
    if ( (unsigned __int8)v8 < 0x1Fu )
      v7 ^= funcs_1406EFB0D[v8](v4 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
    v9 = *v1;
    if ( (unsigned __int8)v9 < 0x1Fu )
      v6 ^= funcs_1406EFB0D[v9](v4, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v17, v7);
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
