/*
 * XREFs of ?ClearResourceBindings@SpectreRenderer@@EEAAXXZ @ 0x180018260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpectreRenderer::ClearResourceBindings(SpectreRenderer *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  RenderOutputDwm::ReplaceBackBufferTexture(*((RenderOutputDwm **)this + 8), 0LL, 0, 0);
}
