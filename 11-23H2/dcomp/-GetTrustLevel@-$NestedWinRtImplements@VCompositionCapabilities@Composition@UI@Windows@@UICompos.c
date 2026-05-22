/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionCapabilities@Composition@UI@Windows@@UICompositionCapabilities@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800908B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCapabilities,Windows::UI::Composition::ICompositionCapabilities>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 64) + 32LL);
  return result;
}
