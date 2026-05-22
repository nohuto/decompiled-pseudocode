/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VBounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UIBounceScalarNaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::BounceScalarNaturalMotionAnimation,Windows::UI::Composition::IBounceScalarNaturalMotionAnimation>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 440) + 32LL);
  return result;
}
