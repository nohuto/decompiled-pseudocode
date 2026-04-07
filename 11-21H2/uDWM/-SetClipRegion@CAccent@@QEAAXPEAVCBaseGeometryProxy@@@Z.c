/*
 * XREFs of ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x18004CAB8
 * Callers:
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180011764 (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180098414 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAccent::SetClipRegion(CBaseObject **this, struct CBaseGeometryProxy *a2)
{
  CBaseObject *v4; // rcx

  if ( a2 != this[53] )
  {
    (*((void (__fastcall **)(CBaseObject **, __int64))*this + 3))(this, 0x8000LL);
    v4 = this[53];
    if ( v4 )
      CBaseObject::Release(v4);
    this[53] = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
}
