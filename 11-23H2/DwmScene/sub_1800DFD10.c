/*
 * XREFs of sub_1800DFD10 @ 0x1800DFD10
 * Callers:
 *     sub_1800E0400 @ 0x1800E0400 (sub_1800E0400.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_18002F04C @ 0x18002F04C (sub_18002F04C.c)
 *     sub_180052818 @ 0x180052818 (sub_180052818.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DFD10(__int64 *a1, __int64 a2, int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  sub_18002F04C(a1, (__int64)&v11, a3);
  if ( *(_BYTE *)(v12 + 25) || *a3 < *(_DWORD *)(v12 + 32) )
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001DDFC();
    v6 = *a1;
    *(_QWORD *)&v10 = a1;
    v7 = sub_18001C190();
    *(_DWORD *)(v7 + 32) = *a3;
    *(_QWORD *)(v7 + 96) = 0LL;
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v10 + 1) = 0LL;
    sub_180052818((__int64)&v10, v8);
    v10 = v11;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v10, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
