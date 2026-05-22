/*
 * XREFs of ?Release@?$NestedWinRtImplements@VColorKeyFrameAnimation@Composition@UI@Windows@@UIColorKeyFrameAnimation@234@@WRL2@Microsoft@@UEAAKXZ @ 0x180083810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::ColorKeyFrameAnimation,Windows::UI::Composition::IColorKeyFrameAnimation>::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx
  __int64 v3; // rdx

  v1 = (volatile signed __int32 *)(a1 - 496);
  v2 = _InterlockedDecrement(v1 + 4);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    LOBYTE(v3) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 64LL))(v1, v3);
  }
  return v2;
}
