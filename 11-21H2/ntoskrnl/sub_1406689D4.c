/*
 * XREFs of sub_1406689D4 @ 0x1406689D4
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     sub_140668AEC @ 0x140668AEC (sub_140668AEC.c)
 *     sub_1406B52CC @ 0x1406B52CC (sub_1406B52CC.c)
 *     sub_140721BF0 @ 0x140721BF0 (sub_140721BF0.c)
 */

char __fastcall sub_1406689D4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *a11)
{
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rsi
  char v17; // bl
  __int64 v18; // rcx

  v13 = sub_140721BF0(a2, a8, 0LL);
  v16 = v13;
  v17 = 1;
  if ( a7 && (LOBYTE(v14) = a5, LOBYTE(v15) = 1, (int)sub_1406B52CC(a4, v14, v13 + 32, v15) < 0)
    || (v18 = a6 | *(_DWORD *)(a4 + 24) | 4u, ((unsigned int)v18 & *(_DWORD *)(a3 + 96)) != (_DWORD)v18) )
  {
    v17 = 0;
    *a11 = -1073741790;
  }
  else if ( !a7 || *(_DWORD *)(a4 + 16) )
  {
    LOBYTE(v15) = a5;
    return sub_140668AEC(v18, v16 + 32, a4, v15, a6, a8, a9, a10, a11);
  }
  else
  {
    *a11 = 0;
  }
  return v17;
}
