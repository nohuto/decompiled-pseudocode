/*
 * XREFs of ?FreeRealization@CVirtualSurfacePrimitive@DirectComposition@@AEAAXXZ @ 0x18003B75C
 * Callers:
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 *     ??1CVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ @ 0x18003ABE4 (--1CVirtualSurfacePrimitive@DirectComposition@@EEAA@XZ.c)
 *     ?Invalidate@CVirtualSurfacePrimitive@DirectComposition@@EEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003B730 (-Invalidate@CVirtualSurfacePrimitive@DirectComposition@@EEAAXPEAVCDirtyNotifier@2@PEAV-$TMilRect.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CVirtualSurfacePrimitive::FreeRealization(
        DirectComposition::CVirtualSurfacePrimitive *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[7];
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  *((_QWORD *)this + 33) = 0LL;
}
