/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@UICompositionSurfaceBrushSuperSamplePreview@Internal@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::Internal::ICompositionSurfaceBrushSuperSamplePreview>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 176) + 32LL);
  return result;
}
