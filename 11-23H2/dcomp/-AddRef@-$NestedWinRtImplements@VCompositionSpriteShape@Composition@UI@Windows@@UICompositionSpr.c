/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositionSpriteShape@Composition@UI@Windows@@UICompositionSpriteShape@234@@WRL2@Microsoft@@UEAAKXZ @ 0x180084BA0
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800B0A60 (-AddRef@-$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UIComposition.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800B0A80 (-AddRef@-$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@_ea_1800B0A80.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionSpriteShape,Windows::UI::Composition::ICompositionSpriteShape>::AddRef(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 - 192);
  v2 = _InterlockedIncrement(v1 + 4);
  if ( v2 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 80LL))(v1);
  return v2;
}
