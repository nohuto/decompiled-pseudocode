/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VDelegatedInkTrailVisual@Composition@UI@Windows@@UIDelegatedInkTrailVisual@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::DelegatedInkTrailVisual,Windows::UI::Composition::IDelegatedInkTrailVisual>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 288) + 32LL);
  return result;
}
