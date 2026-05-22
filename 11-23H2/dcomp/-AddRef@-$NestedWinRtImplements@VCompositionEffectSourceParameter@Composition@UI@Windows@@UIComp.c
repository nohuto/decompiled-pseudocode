/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositionEffectSourceParameter@Composition@UI@Windows@@UICompositionEffectSourceParameter@234@UIGraphicsEffectSource@Effects@Graphics@4@@WRL2@Microsoft@@UEAAKXZ @ 0x180082E40
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VCompositionEffectSourceParameter@Composition@UI@Windows@@UICompositionEffectSourceParameter@234@UIGraphicsEffectSource@Effects@Graphics@4@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AEED0 (-AddRef@-$NestedWinRtImplements@VCompositionEffectSourceParameter@Composition@UI@Wi_ea_1800AEED0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionEffectSourceParameter,Windows::UI::Composition::ICompositionEffectSourceParameter,Windows::Graphics::Effects::IGraphicsEffectSource>::AddRef(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 - 24);
  v2 = _InterlockedIncrement(v1 + 4);
  if ( v2 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 80LL))(v1);
  return v2;
}
