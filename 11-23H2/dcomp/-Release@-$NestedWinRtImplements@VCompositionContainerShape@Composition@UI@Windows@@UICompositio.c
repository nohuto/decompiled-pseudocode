/*
 * XREFs of ?Release@?$NestedWinRtImplements@VCompositionContainerShape@Composition@UI@Windows@@UICompositionContainerShape@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18007E630
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VCompositionShapeCollection@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$IIterable@PEAVCompositionShape@Composition@UI@Windows@@@674@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800ACA90 (-Release@-$NestedWinRtImplements@VCompositionShapeCollection@Composition@UI@Windows@@U-$IVector@.c)
 *     ?Release@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800ACAB0 (-Release@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UIC.c)
 *     ?Release@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800ACAD0 (-Release@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompos_ea_1800ACAD0.c)
 *     ?Release@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WCA@EAAKXZ @ 0x1800ACAF0 (-Release@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompos_ea_1800ACAF0.c)
 *     ?Release@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WCI@EAAKXZ @ 0x1800ACB10 (-Release@-$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompos_ea_1800ACB10.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionContainerShape,Windows::UI::Composition::ICompositionContainerShape>::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx
  __int64 v4; // rdx

  v1 = (volatile signed __int32 *)(a1 - 160);
  v2 = _InterlockedDecrement(v1 + 4);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 64LL))(v1, v4);
  }
  return v2;
}
