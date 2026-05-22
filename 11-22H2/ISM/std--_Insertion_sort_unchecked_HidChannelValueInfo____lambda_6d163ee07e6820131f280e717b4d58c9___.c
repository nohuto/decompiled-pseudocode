/*
 * XREFs of std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800FE0DC
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800FEEE8 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // r8
  __m128i v3; // xmm2
  __int64 v4; // r9
  __int128 v5; // xmm3
  __int128 v6; // xmm4
  __int128 v7; // xmm5
  __int64 v8; // xmm6_8
  unsigned int v9; // r10d
  __int64 v10; // rax
  __int64 j; // rax

  if ( a1 != a2 )
  {
    for ( i = a1 + 72; i != a2; i += 72LL )
    {
      v3 = *(__m128i *)i;
      v4 = i;
      v5 = *(_OWORD *)(i + 16);
      v6 = *(_OWORD *)(i + 32);
      v7 = *(_OWORD *)(i + 48);
      v8 = *(_QWORD *)(i + 64);
      v9 = _mm_cvtsi128_si32(*(__m128i *)i);
      if ( v9 >= *(_DWORD *)a1 )
      {
        for ( j = i; ; v4 = j )
        {
          j -= 72LL;
          if ( v9 >= *(_DWORD *)j )
            break;
          *(_OWORD *)v4 = *(_OWORD *)j;
          *(_OWORD *)(v4 + 16) = *(_OWORD *)(j + 16);
          *(_OWORD *)(v4 + 32) = *(_OWORD *)(j + 32);
          *(_OWORD *)(v4 + 48) = *(_OWORD *)(j + 48);
          *(_QWORD *)(v4 + 64) = *(_QWORD *)(j + 64);
        }
        *(__m128i *)v4 = v3;
        *(_OWORD *)(v4 + 16) = v5;
        *(_OWORD *)(v4 + 32) = v6;
        *(_OWORD *)(v4 + 48) = v7;
        *(_QWORD *)(v4 + 64) = v8;
      }
      else
      {
        if ( i != a1 )
        {
          do
          {
            v10 = v4;
            v4 -= 72LL;
            *(_OWORD *)v10 = *(_OWORD *)v4;
            *(_OWORD *)(v10 + 16) = *(_OWORD *)(v4 + 16);
            *(_OWORD *)(v10 + 32) = *(_OWORD *)(v4 + 32);
            *(_OWORD *)(v10 + 48) = *(_OWORD *)(v4 + 48);
            *(_QWORD *)(v10 + 64) = *(_QWORD *)(v4 + 64);
          }
          while ( v4 != a1 );
        }
        *(__m128i *)a1 = v3;
        *(_OWORD *)(a1 + 16) = v5;
        *(_OWORD *)(a1 + 32) = v6;
        *(_OWORD *)(a1 + 48) = v7;
        *(_QWORD *)(a1 + 64) = v8;
      }
    }
  }
  return a2;
}
