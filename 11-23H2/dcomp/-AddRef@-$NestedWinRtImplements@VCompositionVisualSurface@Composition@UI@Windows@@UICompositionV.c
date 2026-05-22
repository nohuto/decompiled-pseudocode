/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositionVisualSurface@Composition@UI@Windows@@UICompositionVisualSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18007F170
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VCompositionPropertySet@Composition@UI@Windows@@UICompositionPropertySet@234@UICompositionPropertySet2@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AB9F0 (-AddRef@-$NestedWinRtImplements@VCompositionPropertySet@Composition@UI@Windows@@UICompositionPro.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionVisualSurface,Windows::UI::Composition::ICompositionVisualSurface,Windows::UI::Composition::ICompositionSurface>::AddRef(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 - 136);
  v2 = _InterlockedIncrement(v1 + 4);
  if ( v2 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 80LL))(v1);
  return v2;
}
