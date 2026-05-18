/*
 * XREFs of sub_18009DA30 @ 0x18009DA30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001483C @ 0x18001483C (sub_18001483C.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180018EB0 @ 0x180018EB0 (sub_180018EB0.c)
 *     sub_180040DA0 @ 0x180040DA0 (sub_180040DA0.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 *     sub_180046AD4 @ 0x180046AD4 (sub_180046AD4.c)
 *     sub_180047504 @ 0x180047504 (sub_180047504.c)
 *     sub_180063C68 @ 0x180063C68 (sub_180063C68.c)
 *     sub_180063D14 @ 0x180063D14 (sub_180063D14.c)
 *     sub_18006560C @ 0x18006560C (sub_18006560C.c)
 */

// Hidden C++ exception states: #wind=9
_UNKNOWN **__fastcall sub_18009DA30(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  float v6; // xmm6_4
  float v7; // xmm7_4
  char v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rdx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 *v16; // rax
  __int64 v17; // rcx
  __m128 *v18; // r12
  __m128 *v19; // rdi
  __m128 *v20; // rax
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  _BYTE *v23; // rcx
  unsigned __int64 i; // rax
  __m128 v25; // xmm0
  float *v26; // rcx
  __m128 **v27; // rax
  __m128 *v28; // rcx
  __m128 *v29; // rdx
  int v30; // edx
  __int128 v31; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v32[24]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v34; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+78h] [rbp-90h] BYREF
  float v36; // [rsp+90h] [rbp-78h]
  _QWORD v37[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v38[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v39[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v40[3]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v41[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v42; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v43; // [rsp+100h] [rbp-8h]
  __m128 v44[4]; // [rsp+108h] [rbp+0h] BYREF
  __m128 v45; // [rsp+148h] [rbp+40h] BYREF
  __int128 v46; // [rsp+168h] [rbp+60h]
  __int128 v47; // [rsp+178h] [rbp+70h]
  __int64 v48[4]; // [rsp+188h] [rbp+80h] BYREF
  __m128 v49[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  char *v50[3]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int64 v51; // [rsp+200h] [rbp+F8h]
  _BYTE v52[96]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v53; // [rsp+268h] [rbp+160h] BYREF
  _UNKNOWN *retaddr; // [rsp+2C0h] [rbp+1B8h] BYREF

  result = &retaddr;
  if ( *(_BYTE *)(a1 + 1953) )
  {
    v35 = 0LL;
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 8);
      while ( v4 )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4);
        if ( v5 == v4 )
        {
          v35 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v6 = 3.4028235e38;
    v7 = -3.4028235e38;
    v8 = 0;
    v9 = (__int64 *)sub_180063C68(a1);
    v10 = *v9;
    v11 = v9[1];
    if ( *v9 != v11 )
    {
      v12 = v35;
      do
      {
        sub_1800129F4((__int64 *)v50, v10);
        v33 = 0LL;
        v13 = *(_QWORD *)(v12 + 80);
        if ( v13 )
        {
          v14 = *(_DWORD *)(v13 + 8);
          while ( v14 )
          {
            v15 = v14;
            v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14);
            if ( v15 == v14 )
            {
              v33 = *(_OWORD *)(v12 + 72);
              break;
            }
          }
        }
        v16 = sub_1800129F4(v48, (__int64)v50);
        sub_18004614C(v33, v38, (char *)v16);
        sub_180010910((__int64)&v33);
        if ( sub_180046AD4(v38[0]) )
        {
          sub_1800465B0(v17, &v34);
          if ( *((_QWORD *)&v34 + 1) )
            _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL));
          v31 = v34;
          if ( sub_1800122C0(&v31) )
          {
            v18 = (__m128 *)*((_QWORD *)&v31 + 1);
            v19 = (__m128 *)v31;
            do
            {
              if ( *(_DWORD *)(a1 + 1960) == 1 || (sub_180043668((__int64)v19), (v19[28].m128_i32[0] & 0x10000) != 0) )
              {
                sub_18001483C((__int64)v19, v37);
                sub_18001490C((__int64)v19, v39);
                if ( sub_1800122C0(v37) && sub_1800122C0(v39) )
                {
                  v42 = *(_OWORD *)(v37[0] + 88LL);
                  v43 = *(_QWORD *)(v37[0] + 104LL);
                  *(_OWORD *)v32 = xmmword_1801BD980;
                  *(_QWORD *)&v32[16] = 0x3F8000003F800000LL;
                  v20 = (__m128 *)sub_180063D14(a1, 0, 1);
                  v44[0] = *v20;
                  v44[1] = v20[1];
                  v44[2] = v20[2];
                  v44[3] = v20[3];
                  sub_1800414A0(v19, v49);
                  sub_180018EB0(&v45, v49, v44);
                  sub_180047504((unsigned __int64 *)&v42, (__int64)v32, *(double *)&v46, *(double *)&v47);
                  v21 = _mm_movelh_ps((__m128)*(unsigned __int64 *)v32, (__m128)*(unsigned int *)&v32[8]);
                  v22 = _mm_movelh_ps((__m128)*(unsigned __int64 *)&v32[12], (__m128)*(unsigned int *)&v32[20]);
                  v23 = v52;
                  for ( i = 0LL; i < 8; ++i )
                  {
                    v25 = _mm_add_ps(_mm_mul_ps(v22, (__m128)xmmword_180128400[i]), v21);
                    *(_QWORD *)v23 = v25.m128_u64[0];
                    *((_DWORD *)v23 + 2) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
                    v23 += 12;
                  }
                  v26 = (float *)v52;
                  do
                  {
                    v36 = v26[2];
                    if ( (float)-v36 > v7 )
                      v7 = -v36;
                    if ( v6 > (float)-v36 )
                      v6 = -v36;
                    v26 += 3;
                  }
                  while ( v26 != (float *)&v53 );
                  v8 = 1;
                }
                sub_180010910((__int64)v39);
                sub_180010910((__int64)v37);
              }
              v27 = (__m128 **)sub_180040DA0(v34, v41, (__int64 *)&v31);
              v28 = *v27;
              v29 = v27[1];
              *v27 = 0LL;
              v27[1] = 0LL;
              v40[0] = v19;
              v19 = v28;
              *(_QWORD *)&v31 = v28;
              v40[1] = v18;
              v18 = v29;
              *((_QWORD *)&v31 + 1) = v29;
              sub_180010910((__int64)v40);
              sub_180010910((__int64)v41);
            }
            while ( sub_1800122C0(&v31) );
          }
          sub_180010910((__int64)&v31);
          sub_180010910((__int64)&v34);
        }
        sub_180010910((__int64)v38);
        if ( v51 >= 8 )
          sub_180010884(v50[0], 2 * v51 + 2);
        v10 += 32LL;
      }
      while ( v10 != v11 );
      if ( v8 )
      {
        if ( (unsigned int)(*(_DWORD *)(a1 + 316) - 1) <= 1 )
        {
          v6 = fmaxf(0.001, v6);
          v7 = fmaxf(0.001, v7);
        }
        if ( fabs(v7 - v6) > 0.0000099999997 )
        {
          v30 = 2;
          if ( v6 != *(float *)(a1 + 320) )
          {
            *(float *)(a1 + 320) = v6;
            sub_18006560C(a1, 2);
          }
          if ( v7 != *(float *)(a1 + 324) )
          {
            *(float *)(a1 + 324) = v7;
            sub_18006560C(a1, v30);
          }
        }
      }
    }
    return (_UNKNOWN **)sub_180010910((__int64)&v35);
  }
  return result;
}
