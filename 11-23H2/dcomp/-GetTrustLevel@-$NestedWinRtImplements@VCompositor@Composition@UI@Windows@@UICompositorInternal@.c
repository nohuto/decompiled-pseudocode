/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInternal@Internal@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::Internal::ICompositorInternal>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 1104) + 32LL);
  return result;
}
