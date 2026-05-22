/*
 * XREFs of ?Invalidate@CFilterEffect@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F80F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x18003BDBC (-AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 */

void __fastcall DirectComposition::CFilterEffect::Invalidate(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 24);
  if ( (v1 & 1) == 0 )
  {
    *(_BYTE *)(a1 + 24) = v1 | 1;
    DirectComposition::CDevice::AddDirtyRebuildableObject(
      *(DirectComposition::CDevice **)(a1 + 32),
      (struct DirectComposition::CRebuildableObject *)((a1 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 24) >> 64)));
  }
}
