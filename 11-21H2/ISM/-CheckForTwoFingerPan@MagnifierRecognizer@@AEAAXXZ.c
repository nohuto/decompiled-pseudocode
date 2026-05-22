/*
 * XREFs of ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x1801B0274
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AFD80 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?NormalizedDotProduct@MathHelper@@SANUtagPOINT@@0@Z @ 0x18019D468 (-NormalizedDotProduct@MathHelper@@SANUtagPOINT@@0@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801B0208 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUContactStat.c)
 */

void __fastcall MagnifierRecognizer::CheckForTwoFingerPan(MagnifierRecognizer *this)
{
  char v1; // r10
  int v3; // ecx
  int v4; // ecx
  struct tagPOINT v5; // rcx
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  unsigned __int64 v8; // xmm0_8
  _QWORD *v9; // rcx
  struct tagPOINT v10; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v11; // [rsp+58h] [rbp+10h]

  v1 = 0;
  if ( !*((_BYTE *)this + 3) || *((_BYTE *)this + 2) )
    return;
  v3 = *((_DWORD *)this + 1);
  if ( !v3 )
    goto LABEL_16;
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( *((_DWORD *)this + 2) <= 1u )
    {
      v9 = (_QWORD *)**((_QWORD **)this + 2);
      if ( 1000000LL * *((_QWORD *)this + 5) < v9[8] - v9[7] )
        *((_BYTE *)this + 3) = 0;
      if ( (int)((v9[6] - v9[5]) * (v9[6] - v9[5])
               + (HIDWORD(v9[6]) - HIDWORD(v9[5])) * (HIDWORD(v9[6]) - HIDWORD(v9[5]))) < (unsigned __int64)(unsigned int)(*((_DWORD *)this + 12) * *((_DWORD *)this + 12)) )
        return;
    }
LABEL_16:
    *((_BYTE *)this + 3) = 0;
    return;
  }
  if ( v4 != 1 )
    goto LABEL_16;
  v5 = (struct tagPOINT)**((_QWORD **)this + 2);
  v10 = v5;
  while ( *(_BYTE *)(*(_QWORD *)&v5 + 25LL) == v1 )
  {
    if ( (int)((*(_QWORD *)(*(_QWORD *)&v5 + 48LL) - *(_QWORD *)(*(_QWORD *)&v5 + 40LL))
             * (*(_QWORD *)(*(_QWORD *)&v5 + 48LL) - *(_QWORD *)(*(_QWORD *)&v5 + 40LL))
             + (HIDWORD(*(_QWORD *)(*(_QWORD *)&v5 + 48LL)) - HIDWORD(*(_QWORD *)(*(_QWORD *)&v5 + 40LL)))
             * (HIDWORD(*(_QWORD *)(*(_QWORD *)&v5 + 48LL)) - HIDWORD(*(_QWORD *)(*(_QWORD *)&v5 + 40LL)))) >= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 13) * *((_DWORD *)this + 13)) )
    {
      *((_BYTE *)this + 3) = v1;
      v10 = (struct tagPOINT)**((_QWORD **)this + 2);
      v6 = *(__m128i *)(*(_QWORD *)&v10 + 40LL);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++((__int64 **)&v10);
      v7 = *(__m128i *)(*(_QWORD *)&v10 + 40LL);
      v11.x = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)) - _mm_cvtsi128_si32(v6);
      v8 = _mm_srli_si128(v7, 8).m128i_u64[0];
      v11.y = _mm_cvtsi128_si32(_mm_srli_si128(v6, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
      v10.x = v8 - v7.m128i_i32[0];
      v10.y = HIDWORD(v8) - v7.m128i_i32[1];
      if ( MathHelper::NormalizedDotProduct(v11, v10) >= *((double *)this + 7) )
        *((_BYTE *)this + 2) = 1;
      return;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++((__int64 **)&v10);
    v5 = v10;
  }
}
