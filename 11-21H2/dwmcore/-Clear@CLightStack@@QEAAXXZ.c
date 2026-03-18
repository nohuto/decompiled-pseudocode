/*
 * XREFs of ?Clear@CLightStack@@QEAAXXZ @ 0x18008C2EC
 * Callers:
 *     ??1CLightStack@@QEAA@XZ @ 0x180049AB0 (--1CLightStack@@QEAA@XZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x18008BD78 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008DF84 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800CF85C (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLightStack::Clear(CLightStack *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx

  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v5 = *(_QWORD *)(*(_QWORD *)this + 16LL * i);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 6) = 0;
  if ( *(_QWORD *)this != *((_QWORD *)this + 1) )
  {
    DefaultHeap::Free(*(void **)this);
    *(_QWORD *)this = *((_QWORD *)this + 1);
    *((_DWORD *)this + 5) = *((_DWORD *)this + 4);
  }
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_DWORD *)this + 52) = 0;
  v4 = (void *)*((_QWORD *)this + 23);
  if ( v4 != *((void **)this + 24) )
  {
    DefaultHeap::Free(v4);
    *((_QWORD *)this + 23) = *((_QWORD *)this + 24);
    *((_DWORD *)this + 51) = *((_DWORD *)this + 50);
  }
}
