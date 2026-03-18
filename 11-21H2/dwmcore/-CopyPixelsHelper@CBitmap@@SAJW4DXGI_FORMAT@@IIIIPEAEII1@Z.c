/*
 * XREFs of ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18006E7CC
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18006D4B0 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18028FB00 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802A8460 (-CopyPixels@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802A9570 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rect.c)
 * Callees:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180070044 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CBitmap::CopyPixelsHelper(
        enum DXGI_FORMAT a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int8 *a9)
{
  unsigned __int64 v10; // rbp
  __int64 v12; // rsi
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned __int8 *v20; // rbx
  unsigned __int8 *v21; // rdi
  size_t v22; // r14
  unsigned int v23; // [rsp+20h] [rbp-28h]

  v10 = a4;
  v12 = a3;
  v13 = HrCheckBufferSize(a1, a4, a2, a3, a5);
  v15 = v13;
  if ( v13 < 0 )
  {
    v23 = 62;
    goto LABEL_21;
  }
  v13 = HrCheckBufferSize(a1, a7, a2, v12, a8);
  v15 = v13;
  if ( v13 < 0 )
  {
    v23 = 69;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v23, 0LL);
    return v15;
  }
  PixelFormatSize = GetPixelFormatSize(a1);
  if ( !PixelFormatSize || a2 > 0x7FFFFFF8u / PixelFormatSize )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024362, 0x47u, 0LL);
    return v15;
  }
  v18 = (a2 * PixelFormatSize + 7) >> 3;
  if ( v18 > a7 )
  {
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024809, 0x4Cu, 0LL);
  }
  else
  {
    if ( (_DWORD)v10 == a7 && a7 - v18 < PixelFormatSize >> 3 )
    {
      if ( !is_mul_ok(v10, (unsigned int)v12) )
      {
        v15 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0x59u, 0LL);
        return v15;
      }
      memcpy_0(a9, Src, v10 * (unsigned int)v12);
    }
    else if ( (_DWORD)v12 )
    {
      v20 = a9;
      v21 = Src;
      v22 = v18;
      do
      {
        memcpy_0(v20, v21, v22);
        v20 += a7;
        v21 += v10;
        --v12;
      }
      while ( v12 );
    }
    return 0;
  }
  return v15;
}
