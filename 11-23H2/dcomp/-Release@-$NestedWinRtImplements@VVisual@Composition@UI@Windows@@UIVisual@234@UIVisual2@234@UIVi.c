/*
 * XREFs of ?Release@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@UEAAKXZ @ 0x180073A20
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AD070 (-Release@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVis_ea_1800AD070.c)
 *     ?Release@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AD090 (-Release@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVis_ea_1800AD090.c)
 *     ?Release@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800AD0B0 (-Release@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVis_ea_1800AD0B0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Visual,Windows::UI::Composition::IVisual,Windows::UI::Composition::IVisual2,Windows::UI::Composition::IVisual3,Windows::UI::Composition::IVisual4>::Release(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *v2; // rcx
  unsigned __int32 v3; // ebx

  v2 = (volatile signed __int32 *)(a1 - 168);
  v3 = _InterlockedDecrement(v2 + 4);
  if ( !v3 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 64LL))(v2, a2);
  }
  return v3;
}
