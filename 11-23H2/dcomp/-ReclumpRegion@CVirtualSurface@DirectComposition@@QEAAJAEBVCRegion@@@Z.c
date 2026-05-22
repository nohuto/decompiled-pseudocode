/*
 * XREFs of ?ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z @ 0x1800FE198
 * Callers:
 *     ?EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x180037C40 (-EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 *     ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370 (-Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?ReclumpVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z @ 0x1800FE7E4 (-ReclumpVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z.c)
 * Callees:
 *     ?RemoveEmptyClumps@CVirtualSurface@DirectComposition@@QEAAXXZ @ 0x1800382BC (-RemoveEmptyClumps@CVirtualSurface@DirectComposition@@QEAAXXZ.c)
 *     ?GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ @ 0x1800387F8 (-GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FE024 (-ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNo.c)
 *     ?BeginBreakdown@CRegion@@QEBA?AVBreakdownIterator@1@I@Z @ 0x1801B2308 (-BeginBreakdown@CRegion@@QEBA-AVBreakdownIterator@1@I@Z.c)
 *     ?Step@BreakdownIterator@CRegion@@QEAAXXZ @ 0x1801B23E4 (-Step@BreakdownIterator@CRegion@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::ReclumpRegion(
        DirectComposition::CVirtualSurface *this,
        const struct CRegion *a2)
{
  int v4; // edi
  unsigned int SafeMaxTextureSize; // eax
  LONG v6; // r11d
  LONG v7; // r9d
  LONG v8; // r8d
  LONG v9; // r10d
  _BYTE v11[16]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+38h] [rbp-48h]
  int v14; // [rsp+40h] [rbp-40h]
  LONG v15; // [rsp+50h] [rbp-30h]
  LONG v16; // [rsp+54h] [rbp-2Ch]
  int v17; // [rsp+58h] [rbp-28h]
  char v18; // [rsp+5Ch] [rbp-24h]
  struct tagRECT v19; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  SafeMaxTextureSize = DirectComposition::CDevice::GetSafeMaxTextureSize(*(DirectComposition::CDevice **)(*((_QWORD *)this + 13) + 24LL));
  CRegion::BeginBreakdown(a2, v11, SafeMaxTextureSize);
  if ( v18 )
  {
LABEL_9:
    DirectComposition::CVirtualSurface::RemoveEmptyClumps(this);
  }
  else
  {
    while ( v4 >= 0 )
    {
      v19.left = v16;
      v6 = *(_DWORD *)(v12 + 8);
      v7 = *(_DWORD *)(v13 + 8LL * v14 + 4);
      v19.top = v15;
      v8 = v17 + v16;
      v9 = v17 + v15;
      if ( v17 + v16 >= v7 )
        v8 = v7;
      v19.right = v8;
      if ( v9 >= v6 )
        v9 = v6;
      v19.bottom = v9;
      v4 = DirectComposition::CVirtualSurface::ReclumpRect(this, &v19);
      CRegion::BreakdownIterator::Step((CRegion::BreakdownIterator *)v11);
      if ( v18 )
      {
        if ( v4 < 0 )
          return (unsigned int)v4;
        goto LABEL_9;
      }
    }
  }
  return (unsigned int)v4;
}
