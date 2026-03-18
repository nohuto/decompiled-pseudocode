/*
 * XREFs of ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802B7570
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x180028B84 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800297F0 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180029840 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002AD48 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v6; // ebp
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  enum DXGI_FORMAT v11; // ebx
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v13; // rdx
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  __int64 v16; // r10
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx

  v6 = a3;
  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(a1 + 32, (__int64)a2, a3)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v8) )
  {
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x64u, 0LL);
  }
  else
  {
    v11 = *(_DWORD *)(v10 + 132);
    PixelFormatSize = GetPixelFormatSize(v11);
    v15 = v14 * v13[1] + *v13 * (PixelFormatSize >> 3);
    v17 = CBitmap::CopyPixelsHelper(
            v11,
            v13[2] - *a2,
            v13[3] - v13[1],
            v14,
            *(_DWORD *)(v16 + 152) - v15,
            (unsigned __int8 *)(*(_QWORD *)(v16 + 144) + v15),
            v6,
            a4,
            a5);
    v19 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x74u, 0LL);
  }
  return v19;
}
