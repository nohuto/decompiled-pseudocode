/*
 * XREFs of sub_18003A2BC @ 0x18003A2BC
 * Callers:
 *     sub_18003A2BC @ 0x18003A2BC (sub_18003A2BC.c)
 *     sub_18003EE84 @ 0x18003EE84 (sub_18003EE84.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180030F34 @ 0x180030F34 (sub_180030F34.c)
 *     sub_180031770 @ 0x180031770 (sub_180031770.c)
 *     sub_18003A2BC @ 0x18003A2BC (sub_18003A2BC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003A2BC(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rbp
  __int64 v9; // rsi
  char v10; // di
  __int64 v11; // r9
  __int64 v12; // r9
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v14[0] = a1;
    v9 = sub_18001C190();
    sub_180030F34((_QWORD *)(v9 + 32), a2 + 32);
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v9 + 8) = v8;
    *(_QWORD *)(v9 + 16) = v8;
    *(_WORD *)(v9 + 24) = 0;
    v14[1] = 0LL;
    sub_180031770((__int64)v14);
    *(_QWORD *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(a2 + 24);
    v10 = *(_BYTE *)(v8 + 25);
    LOBYTE(v11) = a4;
    *(_QWORD *)v9 = sub_18003A2BC(a1, *(_QWORD *)a2, v9, v11, v14[0]);
    LOBYTE(v12) = a4;
    *(_QWORD *)(v9 + 16) = sub_18003A2BC(a1, *(_QWORD *)(a2 + 16), v9, v12, v14[0]);
    if ( !v10 )
      return v8;
    return v9;
  }
  return v8;
}
