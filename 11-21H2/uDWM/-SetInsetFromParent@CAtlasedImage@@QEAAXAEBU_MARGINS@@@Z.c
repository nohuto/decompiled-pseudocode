/*
 * XREFs of ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x18001FE00
 * Callers:
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x180032960 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x1800359F0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800988D4 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedImage::SetInsetFromParent(CAtlasedImage *this, const struct _MARGINS *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx

  if ( *((_DWORD *)this + 8) != a2->cxLeftWidth
    || *((_DWORD *)this + 9) != a2->cxRightWidth
    || *((_DWORD *)this + 10) != a2->cyTopHeight
    || *((_DWORD *)this + 11) != a2->cyBottomHeight )
  {
    v2 = (__int128)*a2;
    *((_DWORD *)this + 24) |= 1u;
    *((_OWORD *)this + 2) = v2;
    v3 = *((_QWORD *)this + 10);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, 4096LL);
  }
}
