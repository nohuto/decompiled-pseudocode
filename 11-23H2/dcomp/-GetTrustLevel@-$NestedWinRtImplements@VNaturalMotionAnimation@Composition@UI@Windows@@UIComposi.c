/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VNaturalMotionAnimation@Composition@UI@Windows@@UICompositionAnimationTelemetryInternal@Internal@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::NaturalMotionAnimation,Windows::UI::Composition::Internal::ICompositionAnimationTelemetryInternal>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 352) + 32LL);
  return result;
}
