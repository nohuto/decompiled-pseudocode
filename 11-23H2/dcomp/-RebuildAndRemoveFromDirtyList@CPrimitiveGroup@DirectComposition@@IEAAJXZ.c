/*
 * XREFs of ?RebuildAndRemoveFromDirtyList@CPrimitiveGroup@DirectComposition@@IEAAJXZ @ 0x1800FA8E8
 * Callers:
 *     ?DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAUID2D1DeviceContext@@AEBUD2D_MATRIX_4X4_F@@MW4DCOMPOSITION_COMPOSITE_MODE@@@Z @ 0x1800F1830 (-DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAU.c)
 * Callees:
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?Rebuild@CRebuildableObject@DirectComposition@@QEAAJXZ @ 0x1800FAC54 (-Rebuild@CRebuildableObject@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::RebuildAndRemoveFromDirtyList(DirectComposition::CDevice **this)
{
  int v1; // edi
  unsigned __int64 v3; // rsi

  v1 = 0;
  if ( ((_BYTE)this[5] & 1) != 0 )
  {
    v3 = (unsigned __int64)(this + 3);
    v1 = DirectComposition::CRebuildableObject::Rebuild((DirectComposition::CRebuildableObject *)(this + 3));
    if ( v1 >= 0 )
      DirectComposition::CDevice::RemoveDirtyRebuildableObject(
        this[6],
        (struct DirectComposition::CRebuildableObject *)(v3 & -(__int64)(this != 0LL)));
  }
  return (unsigned int)v1;
}
