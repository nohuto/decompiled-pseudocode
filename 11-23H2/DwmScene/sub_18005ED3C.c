/*
 * XREFs of sub_18005ED3C @ 0x18005ED3C
 * Callers:
 *     sub_18005EA14 @ 0x18005EA14 (sub_18005EA14.c)
 *     sub_18005ED3C @ 0x18005ED3C (sub_18005ED3C.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_1800259F4 @ 0x1800259F4 (sub_1800259F4.c)
 *     sub_18005ED3C @ 0x18005ED3C (sub_18005ED3C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005ED3C(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rbp
  __int64 v9; // rsi
  char v10; // di
  __int64 v11; // r9
  __int64 v12; // r9
  _QWORD *v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v14 = a1;
    v9 = sub_18001090C(0x40uLL);
    sub_180017648((_QWORD *)(v9 + 32), a2 + 32);
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v9 + 8) = v8;
    *(_QWORD *)(v9 + 16) = v8;
    *(_WORD *)(v9 + 24) = 0;
    v15 = 0LL;
    sub_1800259F4((__int64)&v14);
    *(_QWORD *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(a2 + 24);
    v10 = *(_BYTE *)(v8 + 25);
    LOBYTE(v11) = a4;
    *(_QWORD *)v9 = sub_18005ED3C(a1, *(_QWORD *)a2, v9, v11, v14, v15);
    LOBYTE(v12) = a4;
    *(_QWORD *)(v9 + 16) = sub_18005ED3C(a1, *(_QWORD *)(a2 + 16), v9, v12, v14, v15);
    if ( !v10 )
      return v8;
    return v9;
  }
  return v8;
}
