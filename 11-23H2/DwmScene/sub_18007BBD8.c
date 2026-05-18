/*
 * XREFs of sub_18007BBD8 @ 0x18007BBD8
 * Callers:
 *     sub_18007BAF0 @ 0x18007BAF0 (sub_18007BAF0.c)
 *     sub_18007BBD8 @ 0x18007BBD8 (sub_18007BBD8.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180031770 @ 0x180031770 (sub_180031770.c)
 *     sub_18007BBD8 @ 0x18007BBD8 (sub_18007BBD8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007BBD8(_QWORD *a1, __int64 a2, __int64 a3, char a4)
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
    v9 = sub_18001C190();
    v15 = v9;
    sub_180017648((_QWORD *)(v9 + 32), a2 + 32);
    *(_OWORD *)(v9 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(v9 + 80) = *(_OWORD *)(a2 + 80);
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v9 + 8) = v8;
    *(_QWORD *)(v9 + 16) = v8;
    *(_WORD *)(v9 + 24) = 0;
    v15 = 0LL;
    sub_180031770((__int64)&v14);
    *(_QWORD *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(a2 + 24);
    v10 = *(_BYTE *)(v8 + 25);
    LOBYTE(v11) = a4;
    *(_QWORD *)v9 = sub_18007BBD8(a1, *(_QWORD *)a2, v9, v11);
    LOBYTE(v12) = a4;
    *(_QWORD *)(v9 + 16) = sub_18007BBD8(a1, *(_QWORD *)(a2 + 16), v9, v12);
    if ( !v10 )
      return v8;
    return v9;
  }
  return v8;
}
