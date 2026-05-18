/*
 * XREFs of ?EndRender@SpectreRenderer@@EEAAXXZ @ 0x1800188F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpectreRenderer::EndRender(SpectreRenderer *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
}
