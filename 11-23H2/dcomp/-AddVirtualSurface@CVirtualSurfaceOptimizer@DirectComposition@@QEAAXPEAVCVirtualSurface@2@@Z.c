/*
 * XREFs of ?AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z @ 0x180037BB4
 * Callers:
 *     ?BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180036F80 (-BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEA.c)
 *     ?Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z @ 0x18003A220 (-Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z.c)
 *     ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370 (-Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z @ 0x1800FE680 (-Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 */

void __fastcall DirectComposition::CVirtualSurfaceOptimizer::AddVirtualSurface(
        DirectComposition::CVirtualSurfaceOptimizer *this,
        struct DirectComposition::CVirtualSurface *a2)
{
  ULONGLONG TickCount64; // rax
  DirectComposition::CVirtualSurfaceOptimizer *v5; // rbx
  DirectComposition::CVirtualSurfaceOptimizer **v6; // rcx

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)a2 + 13)
                                                                                             + 24LL)
                                                                                 + 96LL));
  TickCount64 = GetTickCount64();
  *((_BYTE *)a2 + 132) |= 1u;
  *((_QWORD *)a2 + 28) = TickCount64;
  v5 = (struct DirectComposition::CVirtualSurface *)((char *)a2 + 88);
  if ( !*(_QWORD *)v5 )
  {
    v6 = (DirectComposition::CVirtualSurfaceOptimizer **)*((_QWORD *)this + 3);
    if ( *v6 != (DirectComposition::CVirtualSurfaceOptimizer *)((char *)this + 16) )
      __fastfail(3u);
    *(_QWORD *)v5 = (char *)this + 16;
    *((_QWORD *)v5 + 1) = v6;
    *v6 = v5;
    *((_QWORD *)this + 3) = v5;
    ++*((_DWORD *)this + 2);
  }
}
