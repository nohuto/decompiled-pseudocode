/*
 * XREFs of ?Release@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@UEAAKXZ @ 0x180078A90
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AB850 (-Release@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompo_ea_1800AB850.c)
 *     ?Release@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AB870 (-Release@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompo_ea_1800AB870.c)
 *     ?Release@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800AB890 (-Release@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompo_ea_1800AB890.c)
 *     ?Release@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WCA@EAAKXZ @ 0x1800AB8B0 (-Release@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompo_ea_1800AB8B0.c)
 *     ?Release@?$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObject@234@UICompositionObject2@234@UICompositionObject3@234@UICompositionObject4@234@UIAnimationObject@234@UICompositionObject5@234@@WRL2@Microsoft@@WCI@EAAKXZ @ 0x1800AB8D0 (-Release@-$NestedWinRtImplements@VCompositionObject@Composition@UI@Windows@@UICompo_ea_1800AB8D0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionObject,Windows::UI::Composition::ICompositionObject,Windows::UI::Composition::ICompositionObject2,Windows::UI::Composition::ICompositionObject3,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx
  __int64 v4; // rdx

  v1 = (volatile signed __int32 *)(a1 - 40);
  v2 = _InterlockedDecrement(v1 + 4);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 64LL))(v1, v4);
  }
  return v2;
}
