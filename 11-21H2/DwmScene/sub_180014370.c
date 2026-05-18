/*
 * XREFs of sub_180014370 @ 0x180014370
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004E560 @ 0x18004E560 (sub_18004E560.c)
 *     sub_18004F354 @ 0x18004F354 (sub_18004F354.c)
 *     sub_18004F498 @ 0x18004F498 (sub_18004F498.c)
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_18004F584 @ 0x18004F584 (sub_18004F584.c)
 *     sub_18004F8C8 @ 0x18004F8C8 (sub_18004F8C8.c)
 *     sub_18004FA18 @ 0x18004FA18 (sub_18004FA18.c)
 *     sub_18004FB58 @ 0x18004FB58 (sub_18004FB58.c)
 *     sub_18004FCA0 @ 0x18004FCA0 (sub_18004FCA0.c)
 *     sub_18004FD34 @ 0x18004FD34 (sub_18004FD34.c)
 *     sub_18004FE74 @ 0x18004FE74 (sub_18004FE74.c)
 *     sub_18004FFB4 @ 0x18004FFB4 (sub_18004FFB4.c)
 */

__int64 __fastcall sub_180014370(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rcx
  __m128 v9; // xmm3
  __m128 v10; // xmm4
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __m128 v15; // xmm3
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  sub_18004FFB4(*(_QWORD *)(a1 + 16), *a2);
  sub_18004F498(*(_QWORD *)(a1 + 16), a2[14]);
  try
  {
    if ( !*a2 )
    {
      *(_QWORD *)(a1 + 32) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *(_DWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 44) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *(_DWORD *)(a1 + 52) = 0;
      return 0LL;
    }
    if ( *((_QWORD *)a2 + 1) )
      sub_18004FA18(*(_QWORD *)(a1 + 16));
    v4 = *((_QWORD *)a2 + 2);
    if ( v4 )
      sub_18004F8C8(*(_QWORD *)(a1 + 16), v4, 0LL);
    v5 = *((_QWORD *)a2 + 3);
    if ( v5 )
      sub_18004FB58(*(_QWORD *)(a1 + 16), v5, 0LL);
    if ( *((_QWORD *)a2 + 4) )
      sub_18004F354(*(_QWORD *)(a1 + 16));
    if ( *((_QWORD *)a2 + 5) )
      sub_18004FD34(*(_QWORD *)(a1 + 16));
    if ( *((_QWORD *)a2 + 6) )
      sub_18004FE74(*(_QWORD *)(a1 + 16));
    if ( a2[14] )
    {
      if ( *((_QWORD *)a2 + 8) )
      {
        sub_18004F4AC(*(_QWORD *)(a1 + 16));
      }
      else if ( *((_QWORD *)a2 + 9) )
      {
        sub_18004F584(*(_QWORD *)(a1 + 16));
      }
    }
    switch ( a2[20] )
    {
      case 1u:
        sub_18004FCA0(*(_QWORD *)(a1 + 16), 2LL);
        goto LABEL_31;
      case 2u:
        v6 = 1LL;
        break;
      case 3u:
        v6 = 4LL;
        break;
      case 4u:
        v6 = 0LL;
        break;
      case 5u:
        v6 = 3LL;
        break;
      default:
LABEL_31:
        sub_18004E560(*(_QWORD *)(a1 + 16), 3LL);
        v7 = (unsigned __int64 *)*((_QWORD *)a2 + 1);
        v8 = *a2;
        v9 = _mm_movelh_ps((__m128)*v7, (__m128)*((unsigned int *)v7 + 2));
        v10 = v9;
        if ( v8 > 1 )
        {
          v11 = (unsigned __int64 *)((char *)v7 + 12);
          v12 = v8 - 1;
          do
          {
            v13 = _mm_movelh_ps((__m128)*v11, (__m128)*((unsigned int *)v11 + 2));
            v10 = _mm_min_ps(v10, v13);
            v9 = _mm_max_ps(v9, v13);
            v11 = (unsigned __int64 *)((char *)v11 + 12);
            --v12;
          }
          while ( v12 );
        }
        v14 = _mm_mul_ps((__m128)xmmword_1801BD910, _mm_add_ps(v9, v10));
        *(_QWORD *)(a1 + 32) = v14.m128_u64[0];
        *(_DWORD *)(a1 + 40) = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
        v15 = _mm_mul_ps(_mm_sub_ps(v9, v10), (__m128)xmmword_1801BD910);
        *(_QWORD *)(a1 + 44) = v15.m128_u64[0];
        *(_DWORD *)(a1 + 52) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
        return 0LL;
    }
    sub_18004FCA0(*(_QWORD *)(a1 + 16), v6);
    goto LABEL_31;
  }
  catch ( ... )
  {
    sub_18000F364(
      retaddr,
      115LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremesh.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return 0LL;
}
