/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VBounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UIBounceVector3NaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::BounceVector3NaturalMotionAnimation,Windows::UI::Composition::IBounceVector3NaturalMotionAnimation>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 464) + 32LL);
  return result;
}
