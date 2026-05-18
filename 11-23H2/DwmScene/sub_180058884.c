/*
 * XREFs of sub_180058884 @ 0x180058884
 * Callers:
 *     sub_180058884 @ 0x180058884 (sub_180058884.c)
 *     sub_18005E7CC @ 0x18005E7CC (sub_18005E7CC.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18002B83C @ 0x18002B83C (sub_18002B83C.c)
 *     sub_180058884 @ 0x180058884 (sub_180058884.c)
 *     sub_180059360 @ 0x180059360 (sub_180059360.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180058884(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rbp
  __int64 v9; // r14
  char v10; // di
  __int64 v11; // r9
  __int64 v12; // r9
  _QWORD *v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v14 = a1;
    v9 = sub_18001090C(0x58uLL);
    v15 = v9;
    sub_180059360(v9 + 32, a2 + 32);
    *(_OWORD *)(v9 + 72) = *(_OWORD *)(a2 + 72);
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v9 + 8) = v8;
    *(_QWORD *)(v9 + 16) = v8;
    *(_WORD *)(v9 + 24) = 0;
    v15 = 0LL;
    sub_18002B83C((__int64)&v14);
    *(_QWORD *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(a2 + 24);
    v10 = *(_BYTE *)(v8 + 25);
    LOBYTE(v11) = a4;
    *(_QWORD *)v9 = sub_180058884(a1, *(_QWORD *)a2, v9, v11, v14);
    LOBYTE(v12) = a4;
    *(_QWORD *)(v9 + 16) = sub_180058884(a1, *(_QWORD *)(a2 + 16), v9, v12, v14);
    if ( !v10 )
      return v8;
    return v9;
  }
  return v8;
}
