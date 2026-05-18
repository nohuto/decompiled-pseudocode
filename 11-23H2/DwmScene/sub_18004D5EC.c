/*
 * XREFs of sub_18004D5EC @ 0x18004D5EC
 * Callers:
 *     sub_18004DF24 @ 0x18004DF24 (sub_18004DF24.c)
 * Callees:
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_1800275E4 @ 0x1800275E4 (sub_1800275E4.c)
 *     sub_18004CF7C @ 0x18004CF7C (sub_18004CF7C.c)
 *     sub_18004EA98 @ 0x18004EA98 (sub_18004EA98.c)
 */

__int64 __fastcall sub_18004D5EC(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm6
  __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD v13[4]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]

  v6 = sub_18001CAA0(a1, (__int64)v13, a3);
  v7 = *(_OWORD *)v6;
  v15 = *(_QWORD *)(v6 + 16);
  v8 = v15;
  if ( sub_18001CB40(v9, v15, a3) )
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800275E4((__int64)a1);
    v10 = sub_18004CF7C(v13, (__int64)a1, *a1, (__int64)a3);
    v11 = v10[1];
    v10[1] = 0LL;
    sub_18004EA98(v13);
    v14 = v7;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v14, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
