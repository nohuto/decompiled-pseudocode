/*
 * XREFs of sub_1408504EC @ 0x1408504EC
 * Callers:
 *     sub_1408504A0 @ 0x1408504A0 (sub_1408504A0.c)
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

__int64 __fastcall sub_1408504EC(__int64 *a1)
{
  unsigned __int8 *v1; // r14
  unsigned __int8 *v2; // rsi
  int v3; // edi
  __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edi
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  __int64 result; // rax
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_140D53D60;
  v2 = (unsigned __int8 *)&unk_140D53CE2;
  v16 = *a1;
  v15 = qword_140D532E0;
  v3 = BYTE3(v16) | ((BYTE2(v16) | ((BYTE1(v16) | ((unsigned __int8)v16 << 8)) << 8)) << 8);
  v4 = 0LL;
  v5 = ~(HIBYTE(v16) | ((BYTE6(v16) | ((BYTE5(v16) | (BYTE4(v16) << 8)) << 8)) << 8));
  v6 = 16LL;
  do
  {
    v7 = *v1;
    if ( (unsigned __int8)v7 < 0x1Fu )
      v3 ^= funcs_1406EFADD[v7](v4, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v15, v5);
    v8 = v1[1];
    if ( (unsigned __int8)v8 < 0x1Fu )
      v5 ^= funcs_1406EFADD[v8](v4 + 1, v2[2], v2[3], v2[4], v2[5], (__int64)&v15, v3);
    v4 += 2LL;
    v1 += 2;
    v2 += 8;
    --v6;
  }
  while ( v6 );
  BYTE3(v16) = v3;
  v9 = __ROR4__(v3, 8);
  HIBYTE(v16) = v5;
  BYTE2(v16) = v9;
  v10 = __ROR4__(v5, 8);
  v11 = __ROR4__(v9, 8);
  BYTE6(v16) = v10;
  BYTE1(v16) = v11;
  v12 = __ROR4__(v10, 8);
  BYTE5(v16) = v12;
  BYTE4(v16) = __ROR4__(v12, 8);
  LOBYTE(v16) = __ROR4__(v11, 8);
  result = v16;
  *a1 = v16;
  return result;
}
