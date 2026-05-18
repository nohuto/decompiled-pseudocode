/*
 * XREFs of sub_18002CB50 @ 0x18002CB50
 * Callers:
 *     sub_18002CAB8 @ 0x18002CAB8 (sub_18002CAB8.c)
 *     sub_18002CB50 @ 0x18002CB50 (sub_18002CB50.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18002CB50 @ 0x18002CB50 (sub_18002CB50.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002CB50(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rbp
  __int64 v9; // r14
  char v10; // di
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v14 = *a1;
    v9 = sub_180011088(0x58uLL);
    sub_18001875C((__int64 *)(v9 + 32), a2 + 32);
    *(_OWORD *)(v9 + 64) = *(_OWORD *)(a2 + 64);
    *(_QWORD *)(v9 + 80) = *(_QWORD *)(a2 + 80);
    sub_18001DE7C((__int64 *)v9, &v14);
    sub_18001DE7C((__int64 *)(v9 + 8), &v14);
    sub_18001DE7C((__int64 *)(v9 + 16), &v14);
    *(_WORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(a2 + 24);
    v10 = *(_BYTE *)(v8 + 25);
    LOBYTE(v11) = a4;
    *(_QWORD *)v9 = sub_18002CB50(a1, *(_QWORD *)a2, v9, v11);
    LOBYTE(v12) = a4;
    *(_QWORD *)(v9 + 16) = sub_18002CB50(a1, *(_QWORD *)(a2 + 16), v9, v12);
    if ( !v10 )
      return v8;
    return v9;
  }
  return v8;
}
