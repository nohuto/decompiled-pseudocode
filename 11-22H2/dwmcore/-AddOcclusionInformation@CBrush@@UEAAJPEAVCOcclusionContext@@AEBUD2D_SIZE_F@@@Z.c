/*
 * XREFs of ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800DCAB8
 * Callers:
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011BA60 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011BDA0 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@LA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011BDC0 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@LA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011DD80 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@CI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011DDE0 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@CI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@FI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011DEE0 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@FI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@KA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011DFE0 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@KA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011E100 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x1800819D8 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrush::AddOcclusionInformation(
        CBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v4; // r9
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(char *, const struct D2D_SIZE_F *, __int128 *))(*((_QWORD *)this - 14) + 296LL))(
         (char *)this - 112,
         a3,
         &v6) )
  {
    v7 = v6;
    COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (__int64)&v7, 0, v4, 0LL);
  }
  return 0LL;
}
