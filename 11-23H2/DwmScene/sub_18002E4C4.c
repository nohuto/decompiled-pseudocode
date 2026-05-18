/*
 * XREFs of sub_18002E4C4 @ 0x18002E4C4
 * Callers:
 *     sub_180030E58 @ 0x180030E58 (sub_180030E58.c)
 * Callees:
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18002EE38 @ 0x18002EE38 (sub_18002EE38.c)
 *     sub_180030B40 @ 0x180030B40 (sub_180030B40.c)
 *     sub_180030F34 @ 0x180030F34 (sub_180030F34.c)
 *     sub_18003194C @ 0x18003194C (sub_18003194C.c)
 *     sub_180038040 @ 0x180038040 (sub_180038040.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002E4C4(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int128 v6; // xmm6
  __int64 v8; // rbx
  __int64 v9; // rbx
  _BYTE v10[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h]
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h]

  v5 = sub_18002EE38(a1, v10, a2, a3);
  v6 = *(_OWORD *)v5;
  v12 = *(_OWORD *)v5;
  v13 = *(_QWORD *)(v5 + 16);
  if ( (_BYTE)v13 )
    return v12;
  sub_180038040(a1);
  v8 = *a1;
  sub_180030B40(v10, a1);
  sub_180030F34(v11 + 32, a3);
  *(_QWORD *)v11 = v8;
  *(_QWORD *)(v11 + 8) = v8;
  *(_QWORD *)(v11 + 16) = v8;
  *(_BYTE *)(v11 + 24) = 0;
  *(_BYTE *)(v11 + 25) = 0;
  v9 = v11;
  v11 = 0LL;
  sub_18003194C(v10);
  v12 = v6;
  return sub_18001DBFC((__int64)a1, (__int64)&v12, v9);
}
