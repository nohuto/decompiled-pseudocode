/*
 * XREFs of ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800D3A80
 * Callers:
 *     ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D39E0 (-Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

bool __fastcall CAtlasedRectsGroup::IsEmptyDrawing(CAtlasedRectsGroup *this)
{
  __int64 v1; // r11
  unsigned int v4; // ebp
  __int64 v5; // rsi
  float *v6; // rcx
  unsigned int v7; // r14d
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0LL;
  if ( *((_BYTE *)this + 112) )
  {
    *((_QWORD *)this + 13) = 0LL;
    v4 = 0;
    for ( *((_QWORD *)this + 12) = 0LL; v4 < *((_DWORD *)this + 20); ++v4 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v4);
      if ( *(_BYTE *)(v5 + 136) != (_BYTE)v1 )
      {
        v6 = (float *)(v5 + 120);
        v7 = v1;
        *(_QWORD *)(v5 + 128) = v1;
        for ( *(_QWORD *)(v5 + 120) = v1; v7 < *(_DWORD *)(v5 + 68); ++v7 )
        {
          v8 = *(_OWORD *)(*(_QWORD *)(v5 + 96) + 16LL * v7);
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6, (float *)&v8);
        }
        *(_BYTE *)(v5 + 136) = v1;
      }
      v9 = *(_OWORD *)(v5 + 120);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 24, (float *)&v9);
    }
    *((_BYTE *)this + 112) = v1;
  }
  if ( *((float *)this + 26) <= *((float *)this + 24)
    || *((float *)this + 27) <= *((float *)this + 25)
    || *((_QWORD *)this + 9) == v1 )
  {
    LOBYTE(v1) = 1;
  }
  return v1;
}
