/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VScalarNaturalMotionAnimation@Composition@UI@Windows@@UIScalarNaturalMotionAnimation@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::ScalarNaturalMotionAnimation,Windows::UI::Composition::IScalarNaturalMotionAnimation>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 416) + 32LL);
  return result;
}
