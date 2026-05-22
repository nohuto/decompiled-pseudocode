/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UICompositionAnimationTelemetryInternal@Internal@234@UIKeyFrameAnimationInternal@6234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FAE0
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UICompositionAnimationTelemetryInternal@Internal@234@UIKeyFrameAnimationInternal@6234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AE8F0 (-GetTrustLevel@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@U_ea_1800AE8F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::KeyFrameAnimation,Windows::UI::Composition::Internal::ICompositionAnimationTelemetryInternal,Windows::UI::Composition::Internal::IKeyFrameAnimationInternal>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 384) + 32LL);
  return result;
}
