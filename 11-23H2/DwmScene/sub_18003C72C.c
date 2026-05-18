/*
 * XREFs of sub_18003C72C @ 0x18003C72C
 * Callers:
 *     sub_180012690 @ 0x180012690 (sub_180012690.c)
 *     sub_180014E10 @ 0x180014E10 (sub_180014E10.c)
 *     sub_18003C04C @ 0x18003C04C (sub_18003C04C.c)
 *     sub_18003C3B4 @ 0x18003C3B4 (sub_18003C3B4.c)
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_18003C858 @ 0x18003C858 (sub_18003C858.c)
 *     sub_18003DB00 @ 0x18003DB00 (sub_18003DB00.c)
 *     sub_18003DE74 @ 0x18003DE74 (sub_18003DE74.c)
 *     sub_18003DEE0 @ 0x18003DEE0 (sub_18003DEE0.c)
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 *     sub_18005DEF0 @ 0x18005DEF0 (sub_18005DEF0.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_18008E410 @ 0x18008E410 (sub_18008E410.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_180017E18 @ 0x180017E18 (sub_180017E18.c)
 *     sub_18003C334 @ 0x18003C334 (sub_18003C334.c)
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_18003C8C8 @ 0x18003C8C8 (sub_18003C8C8.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_18003C72C(__int64 a1, _OWORD *a2)
{
  unsigned __int64 v4; // r14
  _OWORD *v5; // rbx
  __int128 *v6; // rax
  _OWORD *v7; // rax
  _OWORD *v8; // rbx
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int64 v13; // [rsp+20h] [rbp-118h] BYREF
  __int64 v14; // [rsp+28h] [rbp-110h]
  _BYTE v15[64]; // [rsp+30h] [rbp-108h] BYREF
  _OWORD v16[4]; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v17[64]; // [rsp+B0h] [rbp-88h] BYREF
  _OWORD v18[4]; // [rsp+F0h] [rbp-48h] BYREF

  sub_18003E330(a1);
  v4 = sub_18003C8C8(a1);
  if ( v4 > *(_QWORD *)(a1 + 360) )
  {
    sub_180012624(a1, &v13);
    if ( v13 )
    {
      v5 = (_OWORD *)sub_18003C72C(v13, v15);
      v6 = sub_18003C334(a1, v16);
      v7 = sub_180017E18((__int64)v17, v6, v5);
      v8 = (_OWORD *)(a1 + 288);
    }
    else
    {
      v8 = (_OWORD *)(a1 + 288);
      v7 = sub_18003C334(a1, v18);
    }
    v9 = v7[3];
    v10 = v7[2];
    v11 = v7[1];
    *v8 = *v7;
    *(_OWORD *)(a1 + 304) = v11;
    *(_OWORD *)(a1 + 320) = v10;
    *(_OWORD *)(a1 + 336) = v9;
    *(_QWORD *)(a1 + 360) = v4;
    if ( v14 )
      sub_180010530(v14);
  }
  *a2 = *(_OWORD *)(a1 + 288);
  a2[1] = *(_OWORD *)(a1 + 304);
  a2[2] = *(_OWORD *)(a1 + 320);
  a2[3] = *(_OWORD *)(a1 + 336);
  return a2;
}
