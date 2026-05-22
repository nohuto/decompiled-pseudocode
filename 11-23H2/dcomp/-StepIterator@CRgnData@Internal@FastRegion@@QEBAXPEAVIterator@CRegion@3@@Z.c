/*
 * XREFs of ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800816D8
 * Callers:
 *     ?CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z @ 0x1800055D0 (-CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z.c)
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 *     ?GetArea@CRegion@@QEBA_KXZ @ 0x1800383CC (-GetArea@CRegion@@QEBA_KXZ.c)
 *     ?GetOcclusionRect@CVirtualSurface@DirectComposition@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B58E4 (-GetOcclusionRect@CVirtualSurface@DirectComposition@@QEAA_NPEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ??$TryAppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x1800FD848 (--$TryAppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@.c)
 *     ?BeginBreakdown@CRegion@@QEBA?AVBreakdownIterator@1@I@Z @ 0x1801B2308 (-BeginBreakdown@CRegion@@QEBA-AVBreakdownIterator@1@I@Z.c)
 *     ?Step@BreakdownIterator@CRegion@@QEAAXXZ @ 0x1801B23E4 (-Step@BreakdownIterator@CRegion@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CRgnData::StepIterator(
        FastRegion::Internal::CRgnData *this,
        struct FastRegion::CRegion::Iterator *a2)
{
  int v3; // eax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx

  v3 = *((_DWORD *)a2 + 8) + 1;
  *((_DWORD *)a2 + 8) = v3;
  if ( v3 >= *((_DWORD *)a2 + 9) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)a2 + 2) + 8LL;
      *((_QWORD *)a2 + 2) = v4;
      v5 = v4 + *(int *)(v4 + 4);
      *((_QWORD *)a2 + 3) = v5;
      v6 = (__int64)(v4 + 8 + *(int *)(v4 + 12) - v5) >> 3;
      *((_DWORD *)a2 + 9) = v6;
      if ( (_DWORD)v6 )
        break;
      if ( v4 >= *((_QWORD *)a2 + 1) )
        return;
    }
    *((_DWORD *)a2 + 8) = 0;
  }
}
