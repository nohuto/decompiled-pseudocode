/*
 * XREFs of ?Release@?$NestedWinRtImplements@VCompositionMaskBrush@Composition@UI@Windows@@UICompositionMaskBrush@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18007F100
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@UICompositionSurfaceBrush@234@UICompositionSurfaceBrush2@234@UICompositionSurfaceBrush3@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AEC70 (-Release@-$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@UICompositionS.c)
 *     ?Release@?$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@UICompositionSurfaceBrush@234@UICompositionSurfaceBrush2@234@UICompositionSurfaceBrush3@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AECF0 (-Release@-$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@U_ea_1800AECF0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionMaskBrush,Windows::UI::Composition::ICompositionMaskBrush>::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx
  __int64 v4; // rdx

  v1 = (volatile signed __int32 *)(a1 - 152);
  v2 = _InterlockedDecrement(v1 + 4);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 64LL))(v1, v4);
  }
  return v2;
}
