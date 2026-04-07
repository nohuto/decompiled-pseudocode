/*
 * XREFs of ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180042020
 * Callers:
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180023B04 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180023DD4 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180023F14 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x1800255E0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18002ADE0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180041CAC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180050D9C (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x1800A10C0 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800A183C (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetInsetFromParent(CVisual *this, const struct _MARGINS *a2)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 36) != a2->cyTopHeight
    || *((_DWORD *)this + 34) != a2->cxLeftWidth
    || *((_DWORD *)this + 35) != a2->cxRightWidth
    || *((_DWORD *)this + 37) != a2->cyBottomHeight )
  {
    v2 = *(_QWORD *)this;
    *(struct _MARGINS *)((char *)this + 136) = *a2;
    (*(void (__fastcall **)(CVisual *, __int64))(v2 + 24))(this, 2LL);
  }
}
