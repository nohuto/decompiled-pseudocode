/*
 * XREFs of ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038F28
 * Callers:
 *     ?HandleSurfaceReclaimed@CBitmapInfoFront@DirectComposition@@UEAAJ_N0@Z @ 0x180007B80 (-HandleSurfaceReclaimed@CBitmapInfoFront@DirectComposition@@UEAAJ_N0@Z.c)
 *     ?Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z @ 0x18000CB34 (-Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z.c)
 *     ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z @ 0x180038474 (-EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z.c)
 *     ?ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z @ 0x180038DEC (-ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z.c)
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ?Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z @ 0x18003A220 (-Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z.c)
 *     ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z @ 0x180093600 (-TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z.c)
 *     ?CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ @ 0x1800EA72C (-CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ.c)
 *     ?PixelsReclaimed@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x1800FDFF0 (-PixelsReclaimed@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 *     ?SurfaceHidden@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x1800FE640 (-SurfaceHidden@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDirtyNotifier::InvalidateListeners(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rbx
  __int64 (__fastcall ***v6)(_QWORD, __int64, __int64); // rcx

  result = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
  for ( i = (int)result; i >= 0; --i )
  {
    v6 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(*(_QWORD *)(a1 + 8) + 8 * i);
    result = (**v6)(v6, a1, a2);
  }
  return result;
}
