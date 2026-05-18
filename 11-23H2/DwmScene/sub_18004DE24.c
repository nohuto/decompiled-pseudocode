/*
 * XREFs of sub_18004DE24 @ 0x18004DE24
 * Callers:
 *     sub_18004F360 @ 0x18004F360 (sub_18004F360.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 *     sub_18001D32C @ 0x18001D32C (sub_18001D32C.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004DE24(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]

  sub_18001CAA0(a1, (__int64)&v12, a3);
  v6 = v13;
  if ( sub_18001CB40(v7, v13, a3) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001DDFC();
    v8 = *a1;
    *(_QWORD *)&v11 = a1;
    v9 = sub_18001C190();
    sub_180017648((_QWORD *)(v9 + 32), (__int64)a3);
    *(_WORD *)(v9 + 64) = 0;
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v9 + 8) = v8;
    *(_QWORD *)(v9 + 16) = v8;
    *(_WORD *)(v9 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_18001D32C((__int64)&v11);
    v11 = v12;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v11, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
