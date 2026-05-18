/*
 * XREFs of sub_18001C8BC @ 0x18001C8BC
 * Callers:
 *     sub_18001C834 @ 0x18001C834 (sub_18001C834.c)
 *     sub_18001C8BC @ 0x18001C8BC (sub_18001C8BC.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001C8BC @ 0x18001C8BC (sub_18001C8BC.c)
 *     sub_18001D168 @ 0x18001D168 (sub_18001D168.c)
 *     sub_18001D284 @ 0x18001D284 (sub_18001D284.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001C8BC(__int64 *a1, __int64 a2, __int64 a3, char a4)
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
    sub_18001D168(v9 + 32, a2 + 32);
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v9 + 8) = v8;
    *(_QWORD *)(v9 + 16) = v8;
    *(_WORD *)(v9 + 24) = 0;
    v14[1] = 0LL;
    sub_18001D284(v14);
    *(_QWORD *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(a2 + 24);
    v10 = *(_BYTE *)(v8 + 25);
    LOBYTE(v11) = a4;
    *(_QWORD *)v9 = sub_18001C8BC(a1, *(_QWORD *)a2, v9, v11);
    LOBYTE(v12) = a4;
    *(_QWORD *)(v9 + 16) = sub_18001C8BC(a1, *(_QWORD *)(a2 + 16), v9, v12);
    if ( !v10 )
      return v8;
    return v9;
  }
  return v8;
}
