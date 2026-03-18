/*
 * XREFs of ??$_Insert_range@PEAVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VCMilPoint2F@@@std@@@std@@@1@PEAVCMilPoint2F@@1Uforward_iterator_tag@1@@Z @ 0x1800B600C
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800B6188 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x180005590 (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B7030 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ?_Xlength@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@CAXXZ @ 0x18019180C (-_Xlength@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@CAXXZ.c)
 */

void __fastcall std::vector<CMilPoint2F>::_Insert_range<CMilPoint2F *>(void **a1, __int64 *a2, char *a3, char *a4)
{
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  unsigned __int64 v6; // r14
  char *v8; // rbx
  __int64 v11; // rcx
  SIZE_T size_of; // rax
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  signed __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 *v24; // rcx
  __int64 *i; // rax
  signed __int64 v26; // rdi
  __int64 *v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // xmm0_8
  char *v30; // rdi
  unsigned __int64 v31; // [rsp+70h] [rbp+8h] BYREF
  void *v32; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp+18h]
  __int64 v34; // [rsp+88h] [rbp+20h]

  v4 = (__int64 *)*a1;
  v5 = (__int64 *)a1[1];
  v6 = (a4 - a3) >> 3;
  v8 = a3;
  if ( v6 )
  {
    if ( v6 <= ((_BYTE *)a1[2] - (_BYTE *)v5) >> 3 )
    {
      v23 = 8 * v6;
      if ( v6 >= v5 - a2 )
      {
        v27 = &a2[(unsigned __int64)v23 / 8];
        if ( a2 != v5 )
        {
          v28 = a2;
          do
          {
            v29 = *v28++;
            *v27++ = v29;
          }
          while ( v28 != v5 );
        }
        a1[1] = v27;
        if ( a3 != a4 )
        {
          v30 = (char *)((char *)a2 - a3);
          do
          {
            *(_QWORD *)&v30[(_QWORD)v8] = *(_QWORD *)v8;
            v8 += 8;
          }
          while ( v8 != a4 );
        }
      }
      else
      {
        v24 = (__int64 *)a1[1];
        for ( i = &v5[v23 / 0xFFFFFFFFFFFFFFF8uLL]; i != v5; ++i )
          *v24++ = *i;
        a1[1] = v24;
        memmove_0(&a2[v6], a2, (size_t)v5 - 8 * v6 - (_QWORD)a2);
        if ( v8 != a4 )
        {
          v26 = (char *)a2 - v8;
          do
          {
            *(_QWORD *)&v8[v26] = *(_QWORD *)v8;
            v8 += 8;
          }
          while ( v8 != a4 );
        }
      }
    }
    else
    {
      v11 = v5 - v4;
      if ( v6 > 0x1FFFFFFFFFFFFFFFLL - v11 )
        std::vector<KernelTap>::_Xlength();
      v33 = v11 + v6;
      v34 = std::vector<CMilPoint2F>::_Calculate_growth(a1, v11 + v6);
      size_of = std::_Get_size_of_n<8>(v34);
      v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v14 = a2 - v4;
      if ( v8 != a4 )
      {
        v15 = v13 + 8 * v14 - (_QWORD)v8;
        do
        {
          *(_QWORD *)&v8[v15] = *(_QWORD *)v8;
          v8 += 8;
        }
        while ( v8 != a4 );
      }
      if ( v6 == 1 && a2 == v5 )
      {
        if ( v4 != v5 )
        {
          v21 = v13 - (_QWORD)v4;
          do
          {
            *(__int64 *)((char *)v4 + v21) = *v4;
            ++v4;
          }
          while ( v4 != v5 );
        }
      }
      else
      {
        if ( v4 != a2 )
        {
          v16 = v13 - (_QWORD)v4;
          do
          {
            *(__int64 *)((char *)v4 + v16) = *v4;
            ++v4;
          }
          while ( v4 != a2 );
        }
        if ( a2 != v5 )
        {
          v22 = v13 + 8 * (v14 + v6) - (_QWORD)a2;
          do
          {
            *(__int64 *)((char *)a2 + v22) = *a2;
            ++a2;
          }
          while ( a2 != v5 );
        }
      }
      v17 = *a1;
      if ( *a1 )
      {
        v18 = (_BYTE *)a1[2] - (_BYTE *)v17;
        v32 = *a1;
        v19 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
        v31 = v19;
        if ( v19 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v32, &v31);
          v19 = v31;
          v17 = v32;
        }
        operator delete(v17, v19);
      }
      v20 = v33;
      *a1 = (void *)v13;
      a1[1] = (void *)(v13 + 8 * v20);
      a1[2] = (void *)(v13 + 8 * v34);
    }
  }
}
