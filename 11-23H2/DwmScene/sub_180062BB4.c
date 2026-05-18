/*
 * XREFs of sub_180062BB4 @ 0x180062BB4
 * Callers:
 *     sub_180063D24 @ 0x180063D24 (sub_180063D24.c)
 * Callees:
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_1800275E4 @ 0x1800275E4 (sub_1800275E4.c)
 *     sub_18002EE38 @ 0x18002EE38 (sub_18002EE38.c)
 *     sub_18004CF7C @ 0x18004CF7C (sub_18004CF7C.c)
 *     sub_18004EA98 @ 0x18004EA98 (sub_18004EA98.c)
 */

__int64 __fastcall sub_180062BB4(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int128 v6; // xmm6
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD v10[4]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-28h]

  v5 = sub_18002EE38(a1, (__int64)v10, a2, a3);
  v6 = *(_OWORD *)v5;
  v12 = *(_QWORD *)(v5 + 16);
  v11 = v6;
  if ( (_BYTE)v12 )
    return v11;
  sub_1800275E4((__int64)a1);
  v8 = sub_18004CF7C(v10, (__int64)a1, *a1, (__int64)a3);
  v9 = v8[1];
  v8[1] = 0LL;
  sub_18004EA98((__int64)v10);
  v11 = v6;
  return sub_18001DBFC((__int64)a1, (__int64)&v11, v9);
}
