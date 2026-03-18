/*
 * XREFs of ?GetSize@CRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800F9FD0
 * Callers:
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x180105F50 (-GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIAI@EBA?AUD2D_SIZE_U@@XZ @ 0x180105F70 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIAI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA?AUD2D_SIZE_U@@XZ @ 0x180105F90 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIFA@EBA?AUD2D_SIZE_U@@XZ @ 0x180105FB0 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIFA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HCA@EBA?AUD2D_SIZE_U@@XZ @ 0x180105FD0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HCA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HHI@EBA?AUD2D_SIZE_U@@XZ @ 0x180105FF0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HHI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@PI@EBA?AUD2D_SIZE_U@@XZ @ 0x180106010 (-GetSize@CRenderTarget@@$4PPPPPPPM@PI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GLI@EBA?AUD2D_SIZE_U@@XZ @ 0x180106E50 (-GetSize@CRenderTarget@@$4PPPPPPPM@GLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUD2D_SIZE_U@@XZ @ 0x180106F50 (-GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HLI@EBA?AUD2D_SIZE_U@@XZ @ 0x180107050 (-GetSize@CRenderTarget@@$4PPPPPPPM@HLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HJI@EBA?AUD2D_SIZE_U@@XZ @ 0x180107150 (-GetSize@CRenderTarget@@$4PPPPPPPM@HJI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GPA@EBA?AUD2D_SIZE_U@@XZ @ 0x180107C90 (-GetSize@CRenderTarget@@$4PPPPPPPM@GPA@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CRenderTarget::GetSize(CRenderTarget *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 11);
  return (struct D2D_SIZE_U)a2;
}
