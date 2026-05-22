/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VShapeVisual@Composition@UI@Windows@@UIShapeVisual@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::ShapeVisual,Windows::UI::Composition::IShapeVisual>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 344) + 32LL);
  return result;
}
