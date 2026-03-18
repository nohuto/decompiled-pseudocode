/*
 * XREFs of ?GetSize@CRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180105E20
 * Callers:
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@BAA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C470 (-GetSize@CRenderTarget@@$4PPPPPPPM@BAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIGA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C490 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIGA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIIA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C4B0 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIIA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIJA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C4D0 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIJA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HCA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C4F0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HCA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HIA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011C510 (-GetSize@CRenderTarget@@$4PPPPPPPM@HIA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GLI@EBA?AUD2D_SIZE_U@@XZ @ 0x18011D330 (-GetSize@CRenderTarget@@$4PPPPPPPM@GLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUD2D_SIZE_U@@XZ @ 0x18011D430 (-GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HLI@EBA?AUD2D_SIZE_U@@XZ @ 0x18011D550 (-GetSize@CRenderTarget@@$4PPPPPPPM@HLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HJI@EBA?AUD2D_SIZE_U@@XZ @ 0x18011D690 (-GetSize@CRenderTarget@@$4PPPPPPPM@HJI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GPA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011E250 (-GetSize@CRenderTarget@@$4PPPPPPPM@GPA@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CRenderTarget::GetSize(CRenderTarget *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 11);
  return (struct D2D_SIZE_U)a2;
}
