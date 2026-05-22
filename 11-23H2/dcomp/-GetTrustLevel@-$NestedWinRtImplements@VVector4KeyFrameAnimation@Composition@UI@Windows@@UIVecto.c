/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VVector4KeyFrameAnimation@Composition@UI@Windows@@UIVector4KeyFrameAnimation@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Vector4KeyFrameAnimation,Windows::UI::Composition::IVector4KeyFrameAnimation>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 488) + 32LL);
  return result;
}
