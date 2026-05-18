/*
 * XREFs of sub_1800DDC64 @ 0x1800DDC64
 * Callers:
 *     sub_1800DE464 @ 0x1800DE464 (sub_1800DE464.c)
 * Callees:
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18003F4EC @ 0x18003F4EC (sub_18003F4EC.c)
 *     sub_18003F614 @ 0x18003F614 (sub_18003F614.c)
 *     sub_1800DBFE8 @ 0x1800DBFE8 (sub_1800DBFE8.c)
 *     sub_1800DDF54 @ 0x1800DDF54 (sub_1800DDF54.c)
 *     sub_1800DE248 @ 0x1800DE248 (sub_1800DE248.c)
 *     sub_1800DF1CC @ 0x1800DF1CC (sub_1800DF1CC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DDC64(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rbx
  _BYTE v12[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]
  _QWORD *v16; // [rsp+88h] [rbp+38h] BYREF

  sub_18003F4EC(a1, (__int64)&v14, a3);
  v6 = v15;
  if ( sub_18003F614(v7, v15, a3) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800DF1CC(a1);
    v8 = *a1;
    sub_1800DDF54(v12, a1);
    v16 = a3;
    sub_1800DBFE8((_QWORD *)(v13 + 32), v9, (__int64 *)&v16);
    *(_QWORD *)v13 = v8;
    *(_QWORD *)(v13 + 8) = v8;
    *(_QWORD *)(v13 + 16) = v8;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 25) = 0;
    v10 = v13;
    v13 = 0LL;
    sub_1800DE248(v12);
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
