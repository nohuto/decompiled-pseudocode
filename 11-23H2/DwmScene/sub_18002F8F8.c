/*
 * XREFs of sub_18002F8F8 @ 0x18002F8F8
 * Callers:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_180028034 @ 0x180028034 (sub_180028034.c)
 *     sub_18002F04C @ 0x18002F04C (sub_18002F04C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F8F8(__int64 *a1, __int64 a2, int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  sub_18002F04C(a1, (__int64)&v10, a3);
  if ( *(_BYTE *)(v11 + 25) || *a3 < *(_DWORD *)(v11 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001DDFC();
    v6 = *a1;
    v9 = (unsigned __int64)a1;
    v7 = sub_18001090C(0x38uLL);
    *(_DWORD *)(v7 + 32) = *a3;
    *(_QWORD *)(v7 + 48) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 48) = 0LL;
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v9 + 1) = 0LL;
    sub_180028034((__int64)&v9);
    v9 = v10;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v9, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
