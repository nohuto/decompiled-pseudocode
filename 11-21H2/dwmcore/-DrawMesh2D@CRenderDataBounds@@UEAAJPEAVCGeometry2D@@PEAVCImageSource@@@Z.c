/*
 * XREFs of ?DrawMesh2D@CRenderDataBounds@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18025B6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E2B78 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataBounds::DrawMesh2D(
        CRenderDataBounds *this,
        struct CGeometry2D *a2,
        struct CImageSource *a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 && a3 )
  {
    v4 = *(_QWORD *)a2;
    v8 = 0LL;
    (*(void (__fastcall **)(struct CGeometry2D *, __int128 *))(v4 + 200))(a2, &v8);
    CRenderDataBounds::AddBounds((__int64)this, &v8, v5, v6);
  }
  return 0LL;
}
