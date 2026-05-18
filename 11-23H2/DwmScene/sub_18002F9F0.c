/*
 * XREFs of sub_18002F9F0 @ 0x18002F9F0
 * Callers:
 *     sub_18002DC3C @ 0x18002DC3C (sub_18002DC3C.c)
 *     sub_180061DF8 @ 0x180061DF8 (sub_180061DF8.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_180028034 @ 0x180028034 (sub_180028034.c)
 *     sub_18002F0F0 @ 0x18002F0F0 (sub_18002F0F0.c)
 *     sub_18002F68C @ 0x18002F68C (sub_18002F68C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F9F0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  sub_18002F0F0(a1, (__int64)&v12, a3);
  v6 = v13;
  if ( sub_18002F68C(v7, v13, a3) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001DDFC();
    v8 = *a1;
    v11 = (unsigned __int64)a1;
    v9 = sub_18001090C(0x38uLL);
    *(_QWORD *)(v9 + 32) = *a3;
    *(_QWORD *)(v9 + 48) = 0LL;
    *(_QWORD *)(v9 + 40) = 0LL;
    *(_QWORD *)(v9 + 48) = 0LL;
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v9 + 8) = v8;
    *(_QWORD *)(v9 + 16) = v8;
    *(_WORD *)(v9 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_180028034((__int64)&v11);
    v11 = v12;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v11, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
