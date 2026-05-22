/*
 * XREFs of ?InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BD40
 * Callers:
 *     ?RemoveFromPrimitiveGroup@CPrimitive@DirectComposition@@IEAAJXZ @ 0x180003718 (-RemoveFromPrimitiveGroup@CPrimitive@DirectComposition@@IEAAJXZ.c)
 *     ?LinkPrimitive@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z @ 0x18003BAC0 (-LinkPrimitive@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z.c)
 *     ?Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003BC88 (-Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ?Unlink@CPrimitive@DirectComposition@@UEAAJXZ @ 0x18003C2B0 (-Unlink@CPrimitive@DirectComposition@@UEAAJXZ.c)
 *     ?Link@CPrimitive@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z @ 0x1800B57C0 (-Link@CPrimitive@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z.c)
 *     ?SplitGroup@CPrimitive@DirectComposition@@UEAAJHPEAPEAUIDCompositionPrimitiveGroupPartner@@@Z @ 0x1800F9690 (-SplitGroup@CPrimitive@DirectComposition@@UEAAJHPEAPEAUIDCompositionPrimitiveGroupPartner@@@Z.c)
 *     ?LinkPrimitives@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@H@Z @ 0x1800FA6A0 (-LinkPrimitives@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@.c)
 * Callees:
 *     ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x18003BDBC (-AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BE34 (-ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CPrimitiveGroup::InvalidateRealization(DirectComposition::CDevice **this)
{
  if ( ((_BYTE)this[5] & 1) == 0 )
  {
    DirectComposition::CPrimitiveGroup::ReleaseAllResources((DirectComposition::CPrimitiveGroup *)this);
    *((_BYTE *)this + 40) |= 1u;
    DirectComposition::CDevice::AddDirtyRebuildableObject(
      this[6],
      (struct DirectComposition::CRebuildableObject *)((unsigned __int64)(this + 3) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  }
}
