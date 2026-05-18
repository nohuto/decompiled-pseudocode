/*
 * XREFs of sub_1800953A0 @ 0x1800953A0
 * Callers:
 *     sub_1800491C8 @ 0x1800491C8 (sub_1800491C8.c)
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180057108 @ 0x180057108 (sub_180057108.c)
 *     sub_18006958C @ 0x18006958C (sub_18006958C.c)
 *     sub_180095910 @ 0x180095910 (sub_180095910.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800953A0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 *v9; // rax
  __int64 v10; // rbx
  __m128i v11; // xmm6
  __int64 v12; // rcx
  __m128i v14; // [rsp+20h] [rbp-60h] BYREF
  __m128i v15; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17[4]; // [rsp+50h] [rbp-30h] BYREF

  v6 = *(_QWORD *)(a1 + 16 * ((int)a3 + 24LL));
  if ( v6 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v12 = *(_QWORD *)(a1 + 16 * ((int)a3 + 24LL) + 8);
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v6 = *(_QWORD *)(a1 + 16 * ((int)a3 + 24LL));
      v12 = *(_QWORD *)(a1 + 16 * ((int)a3 + 24LL) + 8);
    }
    *a2 = v6;
    a2[1] = v12;
  }
  else if ( *(_QWORD *)(a1 + 32 * ((int)a3 + 6LL) + 16) )
  {
    v7 = *sub_18006958C(*(_QWORD *)(a1 + 16), v16);
    v9 = sub_18001875C(v17, v8);
    sub_180057108(v7, v14.m128i_i64, (__int64)v9);
    sub_180010910((__int64)v16);
    if ( sub_1800122B0(&v14) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    else
    {
      v10 = v14.m128i_i64[1];
      if ( v14.m128i_i64[1] )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14.m128i_i64[1] + 8));
        v10 = v14.m128i_i64[1];
      }
      v11 = _mm_load_si128(&v14);
      v15 = v11;
      sub_180095910(a1, a3, &v15);
      *a2 = v11.m128i_i64[0];
      a2[1] = v10;
      v14 = 0LL;
    }
    sub_180010910((__int64)&v14);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
