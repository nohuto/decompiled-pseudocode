/*
 * XREFs of ?Release@?$NestedWinRtImplements@VCompositionClip@Composition@UI@Windows@@UICompositionClip@234@UICompositionClip2@234@@WRL2@Microsoft@@UEAAKXZ @ 0x180081150
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VCompositionClip@Composition@UI@Windows@@UICompositionClip@234@UICompositionClip2@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AEC50 (-Release@-$NestedWinRtImplements@VCompositionClip@Composition@UI@Windows@@UIComposi_ea_1800AEC50.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionClip,Windows::UI::Composition::ICompositionClip,Windows::UI::Composition::ICompositionClip2>::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx
  __int64 v4; // rdx

  v1 = (volatile signed __int32 *)(a1 - 136);
  v2 = _InterlockedDecrement(v1 + 4);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 64LL))(v1, v4);
  }
  return v2;
}
