/*
 * XREFs of ?GetSize@CDxHandleYUVBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180116354
 * Callers:
 *     ?GetSize@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x18010C670 (-GetSize@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A5C4C (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?CalcSourceRect@CBitmapRealization@@QEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18000D0C4 (-CalcSourceRect@CBitmapRealization@@QEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 */

struct D2D_SIZE_U __fastcall CDxHandleYUVBitmapRealization::GetSize(CDxHandleYUVBitmapRealization *this, _QWORD *a2)
{
  __m128i *v3; // rax
  unsigned __int64 v4; // xmm0_8
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( (*((_DWORD *)this - 58) & 0x4000) != 0 )
  {
    v3 = (__m128i *)CBitmapRealization::CalcSourceRect((__int64)this - 464);
    v4 = _mm_srli_si128(*v3, 8).m128i_u64[0];
    LODWORD(v6) = v4 - v3->m128i_i64[0];
    HIDWORD(v6) = HIDWORD(v4) - HIDWORD(v3->m128i_i64[0]);
    *a2 = v6;
  }
  else
  {
    *a2 = *((_QWORD *)this - 32);
  }
  return (struct D2D_SIZE_U)a2;
}
