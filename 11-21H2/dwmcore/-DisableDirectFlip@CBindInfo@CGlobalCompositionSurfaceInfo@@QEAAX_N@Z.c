/*
 * XREFs of ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18024852C
 * Callers:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180104C34 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?DisableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z @ 0x180248580 (-DisableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z.c)
 * Callees:
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180004EA8 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180005100 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::DisableDirectFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        char a2)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(this, a2);
  if ( *((_BYTE *)this + 188) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip(this);
  NtSetCompositionSurfaceDirectFlipState(*(_QWORD *)(*(_QWORD *)this + 32LL), (char *)this + 24, 0LL, 0LL);
  *((_BYTE *)this + 194) = 0;
}
