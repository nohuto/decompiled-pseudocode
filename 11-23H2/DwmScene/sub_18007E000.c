/*
 * XREFs of sub_18007E000 @ 0x18007E000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180011F38 @ 0x180011F38 (sub_180011F38.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_18002A4FC @ 0x18002A4FC (sub_18002A4FC.c)
 *     sub_180060C80 @ 0x180060C80 (sub_180060C80.c)
 *     sub_18007C6AC @ 0x18007C6AC (sub_18007C6AC.c)
 *     sub_18007C73C @ 0x18007C73C (sub_18007C73C.c)
 *     sub_18007C854 @ 0x18007C854 (sub_18007C854.c)
 *     sub_18007E7A0 @ 0x18007E7A0 (sub_18007E7A0.c)
 *     sub_1800855A8 @ 0x1800855A8 (sub_1800855A8.c)
 *     sub_180085A64 @ 0x180085A64 (sub_180085A64.c)
 *     sub_180085AA8 @ 0x180085AA8 (sub_180085AA8.c)
 *     sub_1800A45C4 @ 0x1800A45C4 (sub_1800A45C4.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_18007E000(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __int64 result; // rax
  __int128 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h]
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h]
  __int128 v13; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v14[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v15[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v16[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v17[3]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v18[3]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v19[3]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v20[24]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v21[24]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v22[48]; // [rsp+130h] [rbp+30h] BYREF

  v13 = 0LL;
  sub_18000C8C8((__int64)v22, 16LL, 3LL);
  sub_180011C50(*a2 + 56LL, &v9);
  sub_18001265C(v9, &v11);
  if ( v10 )
    sub_180010530(v10);
  sub_180011F38(v11, (__int64)v21);
  sub_18007C854(v11, (__int64)v20);
  sub_1800A45C4((unsigned int)v21, (unsigned int)v20, a1 + 152, (unsigned int)&v13, (__int64)v22);
  sub_18001246C(&v8, (_QWORD *)(a1 + 56));
  sub_180060C80(v8, &v9, 9);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010530(*((__int64 *)&v8 + 1));
  if ( sub_180011DE0(&v9) )
  {
    v4 = v9;
    sub_180085A64(v9);
    sub_180085A64(v4);
    sub_180085A64(v4);
    v5 = (__m128i)_mm_sub_ps(*(__m128 *)(*(_QWORD *)(a1 + 216) + 240LL), *(__m128 *)(*(_QWORD *)(a1 + 216) + 272LL));
    *(_QWORD *)&v8 = v5.m128i_i64[0];
    *((_QWORD *)&v8 + 1) = _mm_srli_si128(v5, 8).m128i_u64[0];
    sub_180085A64(v4);
    v6 = (__m128i)_mm_sub_ps(*(__m128 *)(*(_QWORD *)(a1 + 216) + 256LL), *(__m128 *)(*(_QWORD *)(a1 + 216) + 272LL));
    *(_QWORD *)&v8 = v6.m128i_i64[0];
    *((_QWORD *)&v8 + 1) = _mm_srli_si128(v6, 8).m128i_u64[0];
    sub_180085A64(v4);
    sub_180085A64(v4);
    sub_180085A64(v4);
    sub_180085A64(v4);
    sub_180085A64(v4);
    v8 = *(_OWORD *)(*(_QWORD *)(a1 + 216) + 336LL);
    sub_180085A64(v4);
    sub_18007C73C(v19, (_OWORD *)(*(_QWORD *)(a1 + 216) + 496LL), (_OWORD *)(*(_QWORD *)(a1 + 216) + 544LL));
    sub_180085AA8(v4, &unk_1801D7188, v19);
    sub_18007C73C(v18, (_OWORD *)(*(_QWORD *)(a1 + 216) + 544LL), (_OWORD *)(*(_QWORD *)(a1 + 216) + 592LL));
    sub_180085AA8(v4, &unk_1801D71A8, v18);
    sub_18007C73C(v17, (_OWORD *)(*(_QWORD *)(a1 + 216) + 448LL), (_OWORD *)(*(_QWORD *)(a1 + 216) + 496LL));
    sub_180085AA8(v4, &unk_1801D7228, v17);
    sub_18007C73C(v16, (_OWORD *)(*(_QWORD *)(a1 + 216) + 400LL), (_OWORD *)(*(_QWORD *)(a1 + 216) + 448LL));
    sub_180085AA8(v4, &unk_1801D7208, v16);
    sub_18007C73C(v15, (_OWORD *)(*(_QWORD *)(a1 + 216) + 352LL), (_OWORD *)(*(_QWORD *)(a1 + 216) + 400LL));
    sub_180085AA8(v4, &unk_1801D71E8, v15);
    sub_18007C6AC(v14, *(_QWORD *)(a1 + 216), *(_QWORD *)(a1 + 216) + 192LL);
    sub_1800855A8(v4, &unk_1801D71C8, v14);
    sub_18007E7A0(v14);
    sub_18002A4FC((__int64)v15);
    sub_18002A4FC((__int64)v16);
    sub_18002A4FC((__int64)v17);
    sub_18002A4FC((__int64)v18);
    sub_18002A4FC((__int64)v19);
  }
  if ( v10 )
    sub_180010530(v10);
  sub_180013300((__int64)v20);
  sub_180013300((__int64)v21);
  if ( v12 )
    sub_180010530(v12);
  result = sub_18000B4B0((__int64)v22, 16LL, 3LL);
  if ( *((_QWORD *)&v13 + 1) )
    return sub_180010530(*((__int64 *)&v13 + 1));
  return result;
}
