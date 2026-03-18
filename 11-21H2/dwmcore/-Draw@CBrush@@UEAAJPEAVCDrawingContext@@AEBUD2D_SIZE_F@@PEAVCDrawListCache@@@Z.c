/*
 * XREFs of ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008A770
 * Callers:
 *     ?Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B28D0 (-Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCD.c)
 *     ?Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEAAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800E2250 (-Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEAAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801052B0 (-Draw@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180105AF0 (-Draw@CBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@LA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180105B10 (-Draw@CBrush@@$4PPPPPPPM@LA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180107530 (-Draw@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@FA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180107650 (-Draw@CBrush@@$4PPPPPPPM@FA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@KA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180107750 (-Draw@CBrush@@$4PPPPPPPM@KA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180107870 (-Draw@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020EB6C (-Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008A870 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrush::Draw(
        CBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  float width; // xmm0_4
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r15d
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r14d
  char v19; // [rsp+60h] [rbp+18h] BYREF

  width = a3->width;
  v19 = 0;
  if ( width <= 0.0
    || a3->height <= 0.0
    || !(*(unsigned __int8 (__fastcall **)(char *, struct CDrawingContext *, char *))(*((_QWORD *)this - 14) + 288LL))(
          (char *)this - 112,
          a2,
          &v19)
    || v19 )
  {
    return 0LL;
  }
  v9 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *, const struct D2D_SIZE_F *))(*((_QWORD *)this - 14)
                                                                                              + 312LL))(
         (char *)this - 112,
         a2,
         a3);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180346338, 3LL, v9, 0x69u);
    return v11;
  }
  else
  {
    if ( *((_BYTE *)this - 32) )
    {
      if ( !*((_QWORD *)this - 5) )
      {
        v16 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 14) + 328LL))((char *)this - 112, 0LL);
        v18 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180346338, 3LL, v16, 0x6Eu);
          return v18;
        }
      }
    }
    v12 = CContent::Draw((CBrush *)((char *)this - 16), a2, a3, a4);
    v14 = v12;
    if ( v12 >= 0 )
      return 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180346338, 3LL, v12, 0x71u);
    return v14;
  }
}
