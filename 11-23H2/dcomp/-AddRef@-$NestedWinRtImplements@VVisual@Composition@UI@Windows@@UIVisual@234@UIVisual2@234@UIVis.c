/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@UEAAKXZ @ 0x180074AB0
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800ACBF0 (-AddRef@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisu_ea_1800ACBF0.c)
 *     ?AddRef@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800ACC10 (-AddRef@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisu_ea_1800ACC10.c)
 *     ?AddRef@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisual2@234@UIVisual3@234@UIVisual4@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800ACC30 (-AddRef@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UIVisual@234@UIVisu_ea_1800ACC30.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Visual,Windows::UI::Composition::IVisual,Windows::UI::Composition::IVisual2,Windows::UI::Composition::IVisual3,Windows::UI::Composition::IVisual4>::AddRef(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 - 168);
  v2 = _InterlockedIncrement(v1 + 4);
  if ( v2 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 80LL))(v1);
  return v2;
}
