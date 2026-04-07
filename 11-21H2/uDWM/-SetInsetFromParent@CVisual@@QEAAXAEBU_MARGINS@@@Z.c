/*
 * XREFs of ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180024870 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800299A4 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18002A510 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18002A830 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18002FD80 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180033FB4 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180034138 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18004BDA0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800984AC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CSystemBackdropVisual@@UEAAJXZ @ 0x1800E12A0 (-Initialize@CSystemBackdropVisual@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
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
