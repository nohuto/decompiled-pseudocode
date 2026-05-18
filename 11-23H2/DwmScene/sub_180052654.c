/*
 * XREFs of sub_180052654 @ 0x180052654
 * Callers:
 *     sub_180053660 @ 0x180053660 (sub_180053660.c)
 *     sub_1800C6BF0 @ 0x1800C6BF0 (sub_1800C6BF0.c)
 * Callees:
 *     sub_180010AF8 @ 0x180010AF8 (sub_180010AF8.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_180052818 @ 0x180052818 (sub_180052818.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180052654(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  sub_180010AF8(a1, (__int64)&v10, a3);
  if ( *(_BYTE *)(v11 + 25) || *a3 < *(_QWORD *)(v11 + 32) )
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001DDFC();
    v6 = *a1;
    *(_QWORD *)&v9 = a1;
    v7 = sub_18001C190();
    *(_QWORD *)(v7 + 32) = *a3;
    *(_QWORD *)(v7 + 96) = 0LL;
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v9 + 1) = 0LL;
    sub_180052818(&v9);
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
