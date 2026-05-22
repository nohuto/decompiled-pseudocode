/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VScalarKeyFrameAnimation@Composition@UI@Windows@@UIScalarKeyFrameAnimation@234@@WRL2@Microsoft@@UEAAKXZ @ 0x180080710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::ScalarKeyFrameAnimation,Windows::UI::Composition::IScalarKeyFrameAnimation>::AddRef(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 - 496);
  v2 = _InterlockedIncrement(v1 + 4);
  if ( v2 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 80LL))(v1);
  return v2;
}
