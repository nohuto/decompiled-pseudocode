/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x18007A250
 * Callers:
 *     ?Release@CD2DResource@@$4PPPPPPPM@FI@EAAKXZ @ 0x18011EAF0 (-Release@CD2DResource@@$4PPPPPPPM@FI@EAAKXZ.c)
 *     ?Release@CDummyRemotingSwapChain@@$4PPPPPPPM@BBA@EAAKXZ @ 0x18011F2B0 (-Release@CDummyRemotingSwapChain@@$4PPPPPPPM@BBA@EAAKXZ.c)
 *     ?Release@CD2DResource@@$4PPPPPPPM@GI@EAAKXZ @ 0x18011FAD0 (-Release@CD2DResource@@$4PPPPPPPM@GI@EAAKXZ.c)
 *     ?Release@CD2DResource@@$4PPPPPPPM@GA@EAAKXZ @ 0x18011FBD0 (-Release@CD2DResource@@$4PPPPPPPM@GA@EAAKXZ.c)
 *     ?Release@CHolographicClient@@WBA@EAAKXZ @ 0x180121590 (-Release@CHolographicClient@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@$4PPPPPPPM@BFI@EAAKXZ @ 0x180121B70 (-Release@CBitmapRealization@@$4PPPPPPPM@BFI@EAAKXZ.c)
 *     ?Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BMA@EAAKXZ @ 0x180121B90 (-Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BMA@EAAKXZ.c)
 *     ?Release@CSectionBitmapRealization@@WBFA@EAAKXZ @ 0x180121BB0 (-Release@CSectionBitmapRealization@@WBFA@EAAKXZ.c)
 *     ?Release@CSectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ @ 0x180121BD0 (-Release@CSectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ.c)
 *     ?Release@CWICBitmapRealization@@WGA@EAAKXZ @ 0x180121C90 (-Release@CWICBitmapRealization@@WGA@EAAKXZ.c)
 *     ?Release@CColorKeyBitmapRealization@@WIA@EAAKXZ @ 0x180121CB0 (-Release@CColorKeyBitmapRealization@@WIA@EAAKXZ.c)
 *     ?Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BOA@EAAKXZ @ 0x180121E10 (-Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BOA@EAAKXZ.c)
 *     ?Release@CWICBitmapRealization@@WHI@EAAKXZ @ 0x1801223D0 (-Release@CWICBitmapRealization@@WHI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BNI@EAAKXZ @ 0x1801228D0 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BNI@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAKXZ @ 0x180123810 (-Release@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDxHandleYUVBitmapRealization::Release(volatile signed __int32 *this)
{
  return CMILRefCountBaseT<IUnknown>::InternalRelease(this);
}
