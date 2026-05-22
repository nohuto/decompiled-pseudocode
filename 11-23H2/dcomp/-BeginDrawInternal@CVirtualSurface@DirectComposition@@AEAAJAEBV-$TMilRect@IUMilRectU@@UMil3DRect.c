/*
 * XREFs of ?BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@PEAPEAXPEAI3PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800371B0
 * Callers:
 *     ?BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180036F80 (-BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEA.c)
 *     ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370 (-Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAV12@@Z @ 0x1800372A4 (-Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV-$TMilR.c)
 *     ?BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@_NPEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037618 (-BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?TransitionDrawingState@CVirtualSurface@DirectComposition@@AEAAXW4SurfaceState@2@@Z @ 0x180038F8C (-TransitionDrawingState@CVirtualSurface@DirectComposition@@AEAAXW4SurfaceState@2@@Z.c)
 *     ?ResumeDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x1800393DC (-ResumeDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?SuspendDraw@CTileClump@DirectComposition@@QEAAXXZ @ 0x18008B4C4 (-SuspendDraw@CTileClump@DirectComposition@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::BeginDrawInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v11; // ebp
  __int64 v12; // r9
  DirectComposition::CTileClump *v13; // rcx
  char v14; // si
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rax
  CMILRefCountImpl *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // [rsp+40h] [rbp-28h] BYREF

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(*(_QWORD *)(a1 + 104)
                                                                                             + 24LL)
                                                                                 + 96LL));
  v11 = DirectComposition::CTileClump::Create(*(_QWORD *)(a1 + 104), a1, a2, &v21);
  if ( v11 >= 0 )
  {
    v13 = *(DirectComposition::CTileClump **)(a1 + 232);
    v14 = 0;
    if ( v13 && *(_DWORD *)(a1 + 128) == 1 )
    {
      DirectComposition::CTileClump::SuspendDraw(v13);
      DirectComposition::CVirtualSurface::TransitionDrawingState(a1, 2LL);
      v14 = 1;
    }
    v15 = a2;
    v16 = v21;
    LOBYTE(v12) = 1;
    v11 = DirectComposition::CTileClump::BeginDrawInternal(v21, v15, a3, v12, a4, a5, a6, a7);
    if ( v11 < 0 )
    {
      if ( v14 )
      {
        DirectComposition::CBitmapInfoBack::ResumeDraw(*(DirectComposition::CBitmapInfoBack **)(*(_QWORD *)(a1 + 232)
                                                                                              + 80LL));
        DirectComposition::CVirtualSurface::TransitionDrawingState(a1, 1LL);
      }
      v19 = (CMILRefCountImpl *)(v16 + 8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 8), 0xFFFFFFFF) == 1 )
      {
        CMILRefCountImpl::AddReference(v19);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 40LL))(v21);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v19, 0xFFFFFFFF) == 1 )
        {
          v20 = v21;
          --*(_DWORD *)v19;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, 1LL);
        }
      }
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 232);
      if ( v17 )
        *(_QWORD *)(v17 + 32) = v16;
      else
        *(_QWORD *)(a1 + 240) = v16;
      *(_QWORD *)(a1 + 232) = v16;
    }
  }
  return (unsigned int)v11;
}
