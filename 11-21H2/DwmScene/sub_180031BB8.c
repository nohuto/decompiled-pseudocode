/*
 * XREFs of sub_180031BB8 @ 0x180031BB8
 * Callers:
 *     sub_18003A0F4 @ 0x18003A0F4 (sub_18003A0F4.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180031024 @ 0x180031024 (sub_180031024.c)
 *     sub_180032998 @ 0x180032998 (sub_180032998.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180031BB8(__int64 a1, __m128i *a2)
{
  __int64 v4; // r15
  __int64 v5; // rcx
  _QWORD *v6; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int128 v9; // xmm6
  __int64 v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+28h] [rbp-58h]
  _OWORD v14[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h]
  __int64 *v16; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+50h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = sub_180011088(0x60uLL);
  v16 = (__int64 *)v4;
  sub_18001DE8C((__int64 *)v4, (__int64 *)&v16);
  sub_18001DE8C((__int64 *)(v5 + 8), (__int64 *)&v16);
  sub_18001DE8C((__int64 *)(v4 + 16), (__int64 *)&v16);
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)a1 = v4;
  v6 = (_QWORD *)a2->m128i_i64[0];
  v7 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  while ( v6 != (_QWORD *)v7 )
  {
    v8 = sub_180031024((__int64 **)a1, (__int64)v14, (__int64 *)v4, v6);
    v9 = *(_OWORD *)v8;
    v15 = *(_QWORD *)(v8 + 16);
    if ( !(_BYTE)v15 )
    {
      if ( *(_QWORD *)(a1 + 8) == 0x2AAAAAAAAAAAAAALL )
        sub_18001F56C();
      v16 = *(__int64 **)a1;
      v12 = a1;
      v13 = 0LL;
      v10 = sub_180011088(0x60uLL);
      v13 = v10;
      v17 = v10 + 32;
      sub_18001875C((__int64 *)(v10 + 32), (__int64)v6);
      sub_18001875C((__int64 *)(v10 + 64), (__int64)(v6 + 4));
      sub_18001DE7C((__int64 *)v10, (__int64 *)&v16);
      sub_18001DE7C((__int64 *)(v10 + 8), (__int64 *)&v16);
      sub_18001DE7C((__int64 *)(v10 + 16), (__int64 *)&v16);
      *(_WORD *)(v10 + 24) = 0;
      v13 = 0LL;
      sub_180032998(&v12);
      v14[0] = v9;
      sub_18001F31C((_QWORD *)a1, (__int64)v14, v10);
    }
    v6 += 8;
  }
  return a1;
}
