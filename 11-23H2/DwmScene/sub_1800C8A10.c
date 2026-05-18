/*
 * XREFs of sub_1800C8A10 @ 0x1800C8A10
 * Callers:
 *     sub_1800CA238 @ 0x1800CA238 (sub_1800CA238.c)
 *     sub_1800CA57C @ 0x1800CA57C (sub_1800CA57C.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001D2A8 @ 0x18001D2A8 (sub_18001D2A8.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_1800C88CC @ 0x1800C88CC (sub_1800C88CC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C8A10(__int64 *a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  sub_1800C88CC(a1, (__int64)&v10, a3);
  if ( *(_BYTE *)(v11 + 25) || *a3 < *(_DWORD *)(v11 + 32) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001DDFC();
    v6 = *a1;
    *(_QWORD *)&v9 = a1;
    v7 = sub_18001C190();
    *(_DWORD *)(v7 + 32) = *a3;
    *(_OWORD *)(v7 + 40) = 0LL;
    *(_OWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v9 + 1) = 0LL;
    sub_18001D2A8((__int64)&v9);
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
