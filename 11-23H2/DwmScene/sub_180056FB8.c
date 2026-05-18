/*
 * XREFs of sub_180056FB8 @ 0x180056FB8
 * Callers:
 *     sub_1800574F0 @ 0x1800574F0 (sub_1800574F0.c)
 * Callees:
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_18002F09C @ 0x18002F09C (sub_18002F09C.c)
 *     sub_180056BD8 @ 0x180056BD8 (sub_180056BD8.c)
 *     sub_1800572E0 @ 0x1800572E0 (sub_1800572E0.c)
 */

__int64 __fastcall sub_180056FB8(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  _QWORD *v14; // [rsp+88h] [rbp+20h] BYREF

  sub_18002F09C(a1, (__int64)&v12, a3);
  if ( *(_BYTE *)(v13 + 25) || v6[1] < *(_QWORD *)(v13 + 40) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001DDFC();
    v7 = *a1;
    v14 = v6;
    v8 = sub_180056BD8(v11, (__int64)a1, v7, v5, &v14);
    v9 = v8[1];
    v8[1] = 0LL;
    sub_1800572E0(v11);
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v12, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
