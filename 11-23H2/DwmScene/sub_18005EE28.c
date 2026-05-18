/*
 * XREFs of sub_18005EE28 @ 0x18005EE28
 * Callers:
 *     sub_18005EAD0 @ 0x18005EAD0 (sub_18005EAD0.c)
 *     sub_18005EE28 @ 0x18005EE28 (sub_18005EE28.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18002B418 @ 0x18002B418 (sub_18002B418.c)
 *     sub_18002F250 @ 0x18002F250 (sub_18002F250.c)
 *     sub_180031794 @ 0x180031794 (sub_180031794.c)
 *     sub_18005EE28 @ 0x18005EE28 (sub_18005EE28.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005EE28(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  char v11; // di
  __int64 v12; // r9
  __int64 v13; // r9
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v15[0] = a1;
    v9 = sub_18002F250(1uLL);
    v10 = sub_18001090C(v9);
    sub_18002B418((_QWORD *)(v10 + 32), (_QWORD *)(a2 + 32));
    *(_QWORD *)v10 = v8;
    *(_QWORD *)(v10 + 8) = v8;
    *(_QWORD *)(v10 + 16) = v8;
    *(_WORD *)(v10 + 24) = 0;
    v15[1] = 0LL;
    sub_180031794((__int64)v15);
    *(_QWORD *)(v10 + 8) = a3;
    *(_BYTE *)(v10 + 24) = *(_BYTE *)(a2 + 24);
    v11 = *(_BYTE *)(v8 + 25);
    LOBYTE(v12) = a4;
    *(_QWORD *)v10 = sub_18005EE28(a1, *(_QWORD *)a2, v10, v12);
    LOBYTE(v13) = a4;
    *(_QWORD *)(v10 + 16) = sub_18005EE28(a1, *(_QWORD *)(a2 + 16), v10, v13);
    if ( !v11 )
      return v8;
    return v10;
  }
  return v8;
}
