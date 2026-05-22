/*
 * XREFs of ?Release@?$NestedWinRtImplements@VCompositionEasingFunction@Composition@UI@Windows@@UICompositionEasingFunction@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18007CB60
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AE190 (-Release@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnim.c)
 *     ?Release@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AE1B0 (-Release@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICo_ea_1800AE1B0.c)
 *     ?Release@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800AE1D0 (-Release@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICo_ea_1800AE1D0.c)
 *     ?Release@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WCA@EAAKXZ @ 0x1800AE1F0 (-Release@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICo_ea_1800AE1F0.c)
 *     ?Release@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WCI@EAAKXZ @ 0x1800AE210 (-Release@-$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICo_ea_1800AE210.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionEasingFunction,Windows::UI::Composition::ICompositionEasingFunction>::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx
  __int64 v4; // rdx

  v1 = (volatile signed __int32 *)(a1 - 128);
  v2 = _InterlockedDecrement(v1 + 4);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 64LL))(v1, v4);
  }
  return v2;
}
