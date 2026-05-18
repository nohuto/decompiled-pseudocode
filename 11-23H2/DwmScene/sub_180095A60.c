/*
 * XREFs of sub_180095A60 @ 0x180095A60
 * Callers:
 *     sub_1800958C0 @ 0x1800958C0 (sub_1800958C0.c)
 *     sub_180095A60 @ 0x180095A60 (sub_180095A60.c)
 * Callees:
 *     sub_18003C3B4 @ 0x18003C3B4 (sub_18003C3B4.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_180094B04 @ 0x180094B04 (sub_180094B04.c)
 *     sub_180095A60 @ 0x180095A60 (sub_180095A60.c)
 */

char __fastcall sub_180095A60(int a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  __int64 v10; // rax
  unsigned __int64 *v11; // rax
  __int64 v12; // rdx
  __m128 v13; // xmm3
  __m128 v14; // xmm3
  __m128 v15; // xmm1
  float v16; // xmm3_4
  __int64 *v17; // rbp
  __int64 *i; // rbx
  __int64 v19; // xmm0_8
  __int64 v21; // [rsp+20h] [rbp-38h]
  __int64 v22; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+38h] [rbp-20h]
  float v24; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  sub_18003E330((__int64)a5);
  v10 = v5[56] & a2[66];
  if ( v10 == a2[65] )
  {
    sub_18003E330((__int64)v5);
    if ( (v5[56] & a2[64]) == a2[63] )
    {
      v11 = (unsigned __int64 *)sub_18003C3B4((__int64)v5, (__int64)&v22);
      v12 = *(_QWORD *)(a4 + 8);
      v13 = _mm_sub_ps(
              _mm_movelh_ps((__m128)*v11, (__m128)*((unsigned int *)v11 + 2)),
              _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2)));
      v14 = _mm_mul_ps(v13, v13);
      v15 = _mm_shuffle_ps(v14, v14, 153);
      v16 = (float)(v14.m128_f32[0] + v15.m128_f32[0]) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
      v24 = v16;
      if ( v12 == *(_QWORD *)(a4 + 16) )
      {
        sub_180094B04((__int128 **)a4, (char *)v12, &v24, (__int64 *)&a5);
        v5 = a5;
      }
      else
      {
        *(float *)v12 = v16;
        *(_QWORD *)(v12 + 8) = v5;
        *(_QWORD *)(a4 + 8) += 16LL;
      }
    }
    LOBYTE(v10) = sub_18003E330((__int64)v5);
    v17 = (__int64 *)v5[5];
    for ( i = (__int64 *)v5[4]; i != v17; i += 2 )
    {
      v19 = *a3;
      v23 = *((_DWORD *)a3 + 2);
      v21 = *i;
      v22 = v19;
      LOBYTE(v10) = sub_180095A60(a1, (_DWORD)a2, (unsigned int)&v22, a4, v21);
    }
  }
  return v10;
}
