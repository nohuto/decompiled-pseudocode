/*
 * XREFs of sub_1407AEB24 @ 0x1407AEB24
 * Callers:
 *     sub_1407AEAD8 @ 0x1407AEAD8 (sub_1407AEAD8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     sub_1407ABD70 @ 0x1407ABD70 (sub_1407ABD70.c)
 *     sub_1407ABF70 @ 0x1407ABF70 (sub_1407ABF70.c)
 *     sub_1407AD470 @ 0x1407AD470 (sub_1407AD470.c)
 *     sub_1407AE790 @ 0x1407AE790 (sub_1407AE790.c)
 *     sub_1407AECD0 @ 0x1407AECD0 (sub_1407AECD0.c)
 *     sub_1407AEE20 @ 0x1407AEE20 (sub_1407AEE20.c)
 *     sub_1407AEE90 @ 0x1407AEE90 (sub_1407AEE90.c)
 *     sub_1407AEF10 @ 0x1407AEF10 (sub_1407AEF10.c)
 *     sub_1407AF440 @ 0x1407AF440 (sub_1407AF440.c)
 *     sub_1407AF4C0 @ 0x1407AF4C0 (sub_1407AF4C0.c)
 *     sub_1407B4E00 @ 0x1407B4E00 (sub_1407B4E00.c)
 *     sub_1407B5A90 @ 0x1407B5A90 (sub_1407B5A90.c)
 *     sub_1407B5AC0 @ 0x1407B5AC0 (sub_1407B5AC0.c)
 *     sub_1407B5B60 @ 0x1407B5B60 (sub_1407B5B60.c)
 *     sub_1407B5B90 @ 0x1407B5B90 (sub_1407B5B90.c)
 *     sub_1407B60A0 @ 0x1407B60A0 (sub_1407B60A0.c)
 *     sub_1407B64B0 @ 0x1407B64B0 (sub_1407B64B0.c)
 *     sub_1407B6F20 @ 0x1407B6F20 (sub_1407B6F20.c)
 *     sub_1407B9270 @ 0x1407B9270 (sub_1407B9270.c)
 *     sub_1407B97C0 @ 0x1407B97C0 (sub_1407B97C0.c)
 *     sub_1407BA6C0 @ 0x1407BA6C0 (sub_1407BA6C0.c)
 *     sub_1407BC6A0 @ 0x1407BC6A0 (sub_1407BC6A0.c)
 *     sub_1407BD8E0 @ 0x1407BD8E0 (sub_1407BD8E0.c)
 *     sub_1407BDC70 @ 0x1407BDC70 (sub_1407BDC70.c)
 *     sub_1407BE2F0 @ 0x1407BE2F0 (sub_1407BE2F0.c)
 *     sub_1407BE390 @ 0x1407BE390 (sub_1407BE390.c)
 *     sub_1407C1690 @ 0x1407C1690 (sub_1407C1690.c)
 *     sub_1407C2FD0 @ 0x1407C2FD0 (sub_1407C2FD0.c)
 *     sub_1407C4F90 @ 0x1407C4F90 (sub_1407C4F90.c)
 *     sub_1407C6800 @ 0x1407C6800 (sub_1407C6800.c)
 */

__int64 __fastcall sub_1407AEB24(__int64 *a1)
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
      v7 ^= funcs_1406EFADD[v8](v4 + 1, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v17, v6);
    v9 = *v1;
    if ( (unsigned __int8)v9 < 0x1Fu )
      v6 ^= funcs_1406EFADD[v9](v4, *(v2 - 6), *(v2 - 5), *(v2 - 4), *(v2 - 3), (__int64)&v17, v7);
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
