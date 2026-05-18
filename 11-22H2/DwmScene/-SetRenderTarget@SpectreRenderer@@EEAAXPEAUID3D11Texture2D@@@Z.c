/*
 * XREFs of ?SetRenderTarget@SpectreRenderer@@EEAAXPEAUID3D11Texture2D@@@Z @ 0x18001B070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpectreRenderer::SetRenderTarget(SpectreRenderer *this, struct ID3D11Texture2D *a2)
{
  Microsoft::WRL::ComPtr<ID3D11Texture2D>::operator=((__int64 *)this + 15, (__int64)a2);
}
