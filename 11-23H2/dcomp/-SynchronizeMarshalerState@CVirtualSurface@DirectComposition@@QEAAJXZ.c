/*
 * XREFs of ?SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ @ 0x180038200
 * Callers:
 *     ?OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_NPEA_N@Z @ 0x180036D24 (-OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_.c)
 *     ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z @ 0x180038474 (-EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z.c)
 *     ?Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z @ 0x18003A220 (-Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z.c)
 *     ?Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z @ 0x1800FE680 (-Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?RecordSurfaceUseChange@CSurfaceManager@DirectComposition@@QEAAXPEBVCAtlasSurface@2@_K1@Z @ 0x180034354 (-RecordSurfaceUseChange@CSurfaceManager@DirectComposition@@QEAAXPEBVCAtlasSurface@2@_K1@Z.c)
 *     ?NotifyInUseSurfaceAreaChanged@CAtlasSurfacePool@DirectComposition@@QEAAX_K0@Z @ 0x1800354A0 (-NotifyInUseSurfaceAreaChanged@CAtlasSurfacePool@DirectComposition@@QEAAX_K0@Z.c)
 *     ?RemoveEmptyClumps@CVirtualSurface@DirectComposition@@QEAAXXZ @ 0x1800382BC (-RemoveEmptyClumps@CVirtualSurface@DirectComposition@@QEAAXXZ.c)
 *     ?GetArea@CRegion@@QEBA_KXZ @ 0x1800383CC (-GetArea@CRegion@@QEBA_KXZ.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::SynchronizeMarshalerState(
        DirectComposition::CVirtualSurface *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rax
  _QWORD *v4; // rbx
  unsigned __int64 Area; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rdi
  unsigned __int64 v10; // r9

  DirectComposition::CVirtualSurface::RemoveEmptyClumps(this);
  v2 = (_QWORD *)((char *)this + 256);
  for ( i = (_QWORD *)*v2; ; i = (_QWORD *)v4[2] )
  {
    v4 = i - 2;
    if ( i == v2 )
      v4 = 0LL;
    if ( !v4 )
      break;
    if ( *((_BYTE *)v4 + 88) )
    {
      Area = CRegion::GetArea((CRegion *)(v4 + 12));
      v7 = v4[9];
      v8 = Area;
      v9 = *(_QWORD *)(v7 + 16);
      v10 = *(_QWORD *)(v9 + 104);
      if ( v10 != Area )
      {
        DirectComposition::CSurfaceManager::RecordSurfaceUseChange(
          *(DirectComposition::CSurfaceManager **)(*(_QWORD *)(v9 + 64) + 144LL),
          *(const struct DirectComposition::CAtlasSurface **)(v7 + 16),
          Area,
          v10);
        DirectComposition::CAtlasSurfacePool::NotifyInUseSurfaceAreaChanged(
          *(DirectComposition::CAtlasSurfacePool **)(v9 + 64),
          v8,
          *(_QWORD *)(v9 + 104));
        *(_QWORD *)(v9 + 104) = v8;
      }
      *((_BYTE *)v4 + 88) = 0;
    }
  }
  return 0LL;
}
