/*
 * XREFs of ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EAB74
 * Callers:
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801EB5A0 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyR.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18005A37C (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BE080 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::NotifyRenderedRect(__int64 a1, __int64 a2, struct MilRectF *a3)
{
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  int v6[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a3 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, 0LL);
  v5 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 184), a3, (float *)&v5);
  PixelAlign(v6, (float *)&v5);
  return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 16LL))(a2, v6);
}
