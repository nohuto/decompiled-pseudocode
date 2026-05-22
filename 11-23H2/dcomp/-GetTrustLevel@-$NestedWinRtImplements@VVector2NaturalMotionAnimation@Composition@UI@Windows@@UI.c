/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VVector2NaturalMotionAnimation@Composition@UI@Windows@@UIVector2NaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Vector2NaturalMotionAnimation,Windows::UI::Composition::IVector2NaturalMotionAnimation>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 424) + 32LL);
  return result;
}
