/*
 * XREFs of sub_1800DDA48 @ 0x1800DDA48
 * Callers:
 *     sub_1800DC224 @ 0x1800DC224 (sub_1800DC224.c)
 *     sub_1800DC4E4 @ 0x1800DC4E4 (sub_1800DC4E4.c)
 *     sub_1800DC7E0 @ 0x1800DC7E0 (sub_1800DC7E0.c)
 *     sub_1800DCB44 @ 0x1800DCB44 (sub_1800DCB44.c)
 *     sub_1800DE600 @ 0x1800DE600 (sub_1800DE600.c)
 * Callees:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18003F4EC @ 0x18003F4EC (sub_18003F4EC.c)
 *     sub_18003F614 @ 0x18003F614 (sub_18003F614.c)
 *     sub_1800DDF54 @ 0x1800DDF54 (sub_1800DDF54.c)
 *     sub_1800DE248 @ 0x1800DE248 (sub_1800DE248.c)
 *     sub_1800DF1CC @ 0x1800DF1CC (sub_1800DF1CC.c)
 *     sub_1800DF954 @ 0x1800DF954 (sub_1800DF954.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800DDA48(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  char v12[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]

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
    v9 = v13 + 32;
    sub_180012440((_QWORD *)(v13 + 32), (__int64)a3);
    sub_1800DF954(v9 + 32);
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
