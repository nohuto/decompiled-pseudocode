/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@UEAAKXZ @ 0x180081E20
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800ADEB0 (-AddRef@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICom_ea_1800ADEB0.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800ADED0 (-AddRef@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICom_ea_1800ADED0.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800ADEF0 (-AddRef@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICom_ea_1800ADEF0.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WCA@EAAKXZ @ 0x1800ADF10 (-AddRef@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICom_ea_1800ADF10.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WCI@EAAKXZ @ 0x1800ADF30 (-AddRef@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICom_ea_1800ADF30.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionAnimation,Windows::UI::Composition::ICompositionAnimation,Windows::UI::Composition::ICompositionAnimation2,Windows::UI::Composition::ICompositionAnimation3,Windows::UI::Composition::ICompositionAnimation4,Windows::UI::Composition::ICompositionAnimationBase,Windows::UI::Composition::ICompositionAnimationBaseInternal>::AddRef(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 - 128);
  v2 = _InterlockedIncrement(v1 + 4);
  if ( v2 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 80LL))(v1);
  return v2;
}
