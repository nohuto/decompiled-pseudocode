/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCursorVisual@Composition@UI@Windows@@UICursorVisualPartner@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CursorVisual,Windows::UI::Composition::ICursorVisualPartner>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 304) + 32LL);
  return result;
}
