/*
 * XREFs of ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180085A50
 * Callers:
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRoundedRectangleShape@@AEBVCMILMatrix@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18005739C (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRou.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180085A50 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 * Callees:
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180085A50 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?Area@@YAMAEBUD2D_RECT_F@@@Z @ 0x180085F20 (-Area@@YAMAEBUD2D_RECT_F@@@Z.c)
 *     ??$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@Z @ 0x180085F7C (--$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@-$vector_facade@UPrimitiveSubRect@CDrawListEn.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800860E4 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

char __fastcall CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
        int a1,
        FLOAT *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  int v7; // r13d
  float v9; // xmm12_4
  float left; // xmm14_4
  float v11; // xmm11_4
  float top; // xmm3_4
  float v13; // xmm15_4
  float v14; // xmm13_4
  __int64 v15; // r9
  float v16; // xmm4_4
  float v17; // xmm5_4
  __m128 v19; // xmm10
  float *v20; // rdx
  float v21; // xmm0_4
  float v22; // xmm1_4
  __m128 v23; // xmm9
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm8_4
  char v27; // r8
  unsigned __int64 v28; // rcx
  float v29; // xmm1_4
  float v30; // xmm0_4
  float right; // xmm7_4
  float *v32; // rax
  float v33; // xmm4_4
  float v34; // xmm0_4
  float bottom; // xmm6_4
  float v36; // xmm5_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  __int64 v39; // r9
  float v40; // xmm0_4
  unsigned int v41; // edi
  float v42; // xmm2_4
  FLOAT v43; // xmm1_4
  unsigned int v44; // ebx
  FLOAT v45; // xmm0_4
  unsigned int v46; // ebx
  float v47; // [rsp+38h] [rbp-D0h]
  struct D2D_RECT_F v48; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v49; // [rsp+58h] [rbp-B0h] BYREF

  v7 = a4;
  CRoundedRectangleGeometryData::GetBaseRect(a4, &v49);
  v9 = *a2;
  left = v49.left;
  if ( v49.left < *a2 )
    v48.left = *a2;
  else
    v48.left = v49.left;
  v11 = a2[1];
  top = v49.top;
  if ( v49.top < v11 )
    v48.top = a2[1];
  else
    v48.top = v49.top;
  v13 = a2[2];
  if ( v13 < v49.right )
    v48.right = a2[2];
  else
    v48.right = v49.right;
  v14 = a2[3];
  if ( v14 < v49.bottom )
    v48.bottom = a2[3];
  else
    v48.bottom = v49.bottom;
  if ( IsEmpty(&v48) )
    return 0;
  v47 = (float)a1;
  if ( (float)a1 > Area(&v48) )
    return 0;
  v19 = (__m128)_mm_loadu_si128((const __m128i *)a2);
  v20 = (float *)(v15 + 16);
  v21 = *(float *)(v15 + 20);
  v22 = *(float *)(v15 + 16) + left;
  v48 = (struct D2D_RECT_F)v19;
  v23 = v19;
  v24 = v21 + top;
  v49 = (struct D2D_RECT_F)v19;
  if ( v22 >= v9 && v24 >= v11 )
  {
    v25 = v19.m128_f32[0];
    LODWORD(v48.left) = v19.m128_i32[0];
    if ( v19.m128_f32[0] <= v22 )
    {
      v48.left = v22;
      v25 = v22;
      v19 = (__m128)v48;
    }
    v26 = _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
    v49.top = v26;
    if ( v26 <= v24 )
    {
      v49.top = v24;
      v26 = v24;
      v23 = (__m128)v49;
    }
  }
  else
  {
    v25 = v48.left;
    v26 = v49.top;
  }
  v27 = *(_BYTE *)(v15 + 52);
  v28 = -(__int64)(v27 != 0) & 0xFFFFFFFFFFFFFFF8uLL;
  v29 = v16 - *(float *)(v28 + v15 + 24);
  v30 = *(float *)(v28 + v15 + 28) + top;
  if ( v13 >= v29 && v30 >= v11 )
  {
    right = _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
    v48.right = right;
    if ( v29 <= right )
    {
      v48.right = v29;
      right = v29;
      v19 = (__m128)v48;
    }
    if ( v26 <= v30 )
    {
      v49.top = v30;
      v26 = v30;
      v23 = (__m128)v49;
    }
  }
  else
  {
    right = v48.right;
  }
  v32 = (float *)(v15 + 16);
  if ( !v27 )
    v32 = (float *)(v15 + 32);
  v33 = v16 - *v32;
  v34 = v17 - v32[1];
  if ( v13 < v33 || v14 < v34 )
  {
    bottom = v49.bottom;
  }
  else
  {
    if ( v33 <= right )
    {
      v48.right = v33;
      right = v33;
      v19 = (__m128)v48;
    }
    bottom = _mm_shuffle_ps(v23, v23, 255).m128_f32[0];
    v49.bottom = bottom;
    if ( v34 <= bottom )
    {
      v49.bottom = v34;
      bottom = v34;
      v23 = (__m128)v49;
    }
  }
  if ( !v27 )
    v20 = (float *)(v15 + 40);
  v36 = v17 - v20[1];
  v37 = *v20 + left;
  if ( v37 >= v9 && v14 >= v36 )
  {
    if ( v25 <= v37 )
    {
      v48.left = *v20 + left;
      v25 = v37;
      v19 = (__m128)v48;
    }
    if ( v36 <= bottom )
    {
      v49.bottom = v36;
      bottom = v36;
      v23 = (__m128)v49;
    }
  }
  v38 = Area(&v49);
  v40 = Area(&v48);
  if ( v38 < v40 )
  {
    if ( v47 <= v40 )
    {
      v41 = a3;
      if ( v25 > v9 )
      {
        v48.left = v9;
        v48.top = v11;
        v48.right = v25;
        v48.bottom = v14;
        v41 = a3 & 0xFCFFFFFF;
        if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                                 a1,
                                 (unsigned int)&v48,
                                 a3 & 0xFFFFFCFF,
                                 v39,
                                 a5) )
        {
          v49 = v48;
          detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
            a5,
            &v49,
            a3 & 0xFFFFFCFF,
            0LL);
        }
      }
      if ( a2[2] > right )
      {
        v45 = a2[1];
        v48.right = a2[2];
        v46 = a3 & 0xFCFFFFFF;
        v48.bottom = a2[3];
        v48.left = right;
        v48.top = v45;
        v41 &= 0xFFFFFCFF;
        if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                                 a1,
                                 (unsigned int)&v48,
                                 v46,
                                 v7,
                                 a5) )
        {
          v49 = v48;
          detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
            a5,
            &v49,
            v46,
            0LL);
        }
      }
      v48 = (struct D2D_RECT_F)v19;
      goto LABEL_41;
    }
    return 0;
  }
  if ( v47 > v38 )
    return 0;
  v41 = a3;
  if ( v26 > v11 )
  {
    v48.left = v9;
    v48.top = v11;
    v48.right = v13;
    v48.bottom = v26;
    v41 = a3 & 0xFFFFFFFC;
    if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                             a1,
                             (unsigned int)&v48,
                             a3 & 0xFFFCFFFF,
                             v39,
                             a5) )
    {
      v49 = v48;
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
        a5,
        &v49,
        a3 & 0xFFFCFFFF,
        0LL);
    }
  }
  v42 = a2[3];
  if ( v42 > bottom )
  {
    v43 = a2[2];
    v44 = a3 & 0xFFFFFFFC;
    v48.left = *a2;
    v48.right = v43;
    v48.top = bottom;
    v48.bottom = v42;
    v41 &= 0xFFFCFFFF;
    if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                             a1,
                             (unsigned int)&v48,
                             v44,
                             v7,
                             a5) )
    {
      v49 = v48;
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
        a5,
        &v49,
        v44,
        0LL);
    }
  }
  v48 = (struct D2D_RECT_F)v23;
LABEL_41:
  LOBYTE(v39) = 1;
  detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
    a5,
    &v48,
    v41,
    v39);
  return 1;
}
