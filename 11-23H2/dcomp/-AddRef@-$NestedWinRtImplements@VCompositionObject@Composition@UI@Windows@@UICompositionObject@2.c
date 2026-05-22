/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@UEAAKXZ @ 0x1800835F0
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AB530 (-AddRef@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompos_ea_1800AB530.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AB550 (-AddRef@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompos_ea_1800AB550.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800AB570 (-AddRef@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompos_ea_1800AB570.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WCA@EAAKXZ @ 0x1800AB590 (-AddRef@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompos_ea_1800AB590.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WCI@EAAKXZ @ 0x1800AB5B0 (-AddRef@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompos_ea_1800AB5B0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionObject,Windows::UI::Composition::ICompositionObject,Windows::UI::Composition::ICompositionObject2,Windows::UI::Composition::ICompositionObject3,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>::AddRef(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 - 40);
  v2 = _InterlockedIncrement(v1 + 4);
  if ( v2 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 80LL))(v1);
  return v2;
}
