/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionPath@Composition@UI@Windows@@UIGeometrySource2DInterop@Graphics@4@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x180090060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionPath,Windows::Graphics::IGeometrySource2DInterop>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 40) + 32LL);
  return result;
}
