/*
 * XREFs of ?IsDisabled@CDirtyRegion@@QEBA_NXZ @ 0x1800DEA18
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE9C8 (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 * Callees:
 *     <none>
 */

char __fastcall CDirtyRegion::IsDisabled(CDirtyRegion *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 4424) || *((_DWORD *)this + 1100) )
    return 1;
  return result;
}
