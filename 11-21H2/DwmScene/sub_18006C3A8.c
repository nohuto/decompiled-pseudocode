/*
 * XREFs of sub_18006C3A8 @ 0x18006C3A8
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_18008918C @ 0x18008918C (sub_18008918C.c)
 *     sub_180089820 @ 0x180089820 (sub_180089820.c)
 *     sub_180089950 @ 0x180089950 (sub_180089950.c)
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 *     sub_18009CC54 @ 0x18009CC54 (sub_18009CC54.c)
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 *     sub_1800ABC50 @ 0x1800ABC50 (sub_1800ABC50.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180031024 @ 0x180031024 (sub_180031024.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006C3A8(__int64 a1, __m128i *a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  __int128 v9; // xmm6
  __int64 v10; // rbx
  _OWORD v12[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h]
  __int64 *v14; // [rsp+B8h] [rbp+38h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = sub_180011088(0x40uLL);
  v14 = (__int64 *)v4;
  sub_18001DE8C((__int64 *)v4, (__int64 *)&v14);
  sub_18001DE8C((__int64 *)(v5 + 8), (__int64 *)&v14);
  sub_18001DE8C((__int64 *)(v4 + 16), (__int64 *)&v14);
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)a1 = v4;
  v6 = (_QWORD *)a2->m128i_i64[0];
  v7 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  while ( v6 != (_QWORD *)v7 )
  {
    v8 = sub_180031024((__int64 **)a1, (__int64)v12, (__int64 *)v4, v6);
    v9 = *(_OWORD *)v8;
    v13 = *(_QWORD *)(v8 + 16);
    if ( !(_BYTE)v13 )
    {
      if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFLL )
        sub_18001F56C();
      v14 = *(__int64 **)a1;
      v10 = sub_180011088(0x40uLL);
      sub_18001875C((__int64 *)(v10 + 32), (__int64)v6);
      sub_18001DE7C((__int64 *)v10, (__int64 *)&v14);
      sub_18001DE7C((__int64 *)(v10 + 8), (__int64 *)&v14);
      sub_18001DE7C((__int64 *)(v10 + 16), (__int64 *)&v14);
      *(_WORD *)(v10 + 24) = 0;
      v12[0] = v9;
      sub_18001F31C((_QWORD *)a1, (__int64)v12, v10);
    }
    v6 += 4;
  }
  return a1;
}
