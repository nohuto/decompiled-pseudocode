/*
 * XREFs of ?GetPixelFormatInfo@CRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180105D48
 * Callers:
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@BAA@EBA?AUPixelFormatInfo@@XZ @ 0x18011C310 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@BAA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HCA@EBA?AUPixelFormatInfo@@XZ @ 0x18011C330 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HCA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HIA@EBA?AUPixelFormatInfo@@XZ @ 0x18011C350 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HIA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HNA@EBA?AUPixelFormatInfo@@XZ @ 0x18011C370 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HNA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GLI@EBA?AUPixelFormatInfo@@XZ @ 0x18011D2F0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GLI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUPixelFormatInfo@@XZ @ 0x18011D410 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HLI@EBA?AUPixelFormatInfo@@XZ @ 0x18011D510 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HLI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HJI@EBA?AUPixelFormatInfo@@XZ @ 0x18011D650 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HJI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GPA@EBA?AUPixelFormatInfo@@XZ @ 0x18011E210 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GPA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 48);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 56);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
