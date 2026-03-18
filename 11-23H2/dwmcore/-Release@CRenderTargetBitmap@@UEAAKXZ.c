/*
 * XREFs of ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800CE8F0
 * Callers:
 *     ?Release@CD2DBitmap@@$4PPPPPPPM@BAA@EAAKXZ @ 0x18011FFB0 (-Release@CD2DBitmap@@$4PPPPPPPM@BAA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@WHA@EAAKXZ @ 0x18011FFD0 (-Release@CDeviceTextureTarget@@WHA@EAAKXZ.c)
 *     ?Release@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ @ 0x1801202B0 (-Release@CDeviceTextureTarget@@$4PPPPPPPM@BCI@EAAKXZ.c)
 *     ?Release@CDxHandleBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ @ 0x1801222F0 (-Release@CDxHandleBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ.c)
 *     ?Release@CGDIBitmapRealization@@$4PPPPPPPM@BMI@EAAKXZ @ 0x180122310 (-Release@CGDIBitmapRealization@@$4PPPPPPPM@BMI@EAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ @ 0x180122630 (-Release@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ.c)
 *     ?Release@CDxHandleBitmapRealization@@$4PPPPPPPM@CBA@EAAKXZ @ 0x180122B50 (-Release@CDxHandleBitmapRealization@@$4PPPPPPPM@CBA@EAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ @ 0x1801232F0 (-Release@CRenderTargetBitmap@@$4PPPPPPPM@LI@EAAKXZ.c)
 *     ?Release@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ @ 0x1801234F0 (-Release@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@$4PPPPPPPM@NA@EAAKXZ @ 0x180123B50 (-Release@CRenderTargetBitmap@@$4PPPPPPPM@NA@EAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Release(CRenderTargetBitmap *this)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v5; // rcx

  v2 = (volatile signed __int32 *)((char *)this + 8);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CRenderTargetBitmap *)((char *)this + 8));
    (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)this + 32LL))(this);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v5 = *(_QWORD *)this;
      --*v2;
      (*(void (__fastcall **)(CRenderTargetBitmap *, __int64))(v5 + 24))(this, 1LL);
    }
  }
  return v3;
}
