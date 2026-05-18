/*
 * XREFs of sub_1800436E4 @ 0x1800436E4
 * Callers:
 *     sub_180044A1C @ 0x180044A1C (sub_180044A1C.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 *     sub_180029304 @ 0x180029304 (sub_180029304.c)
 *     sub_180043690 @ 0x180043690 (sub_180043690.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800436E4(__int64 *a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  sub_180043690(a1, (__int64)&v11, a3);
  if ( *(_BYTE *)(v12 + 25) || *a3 < *(_WORD *)(v12 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      sub_18001DDFC();
    v6 = *a1;
    v10 = (unsigned __int64)a1;
    v7 = sub_180029054(1uLL);
    v8 = sub_18001090C(v7);
    *(_WORD *)(v8 + 28) = *a3;
    *(_DWORD *)(v8 + 32) = 0;
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v8 + 8) = v6;
    *(_QWORD *)(v8 + 16) = v6;
    *(_WORD *)(v8 + 24) = 0;
    *((_QWORD *)&v10 + 1) = 0LL;
    sub_180029304((__int64)&v10);
    v10 = v11;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v10, v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
