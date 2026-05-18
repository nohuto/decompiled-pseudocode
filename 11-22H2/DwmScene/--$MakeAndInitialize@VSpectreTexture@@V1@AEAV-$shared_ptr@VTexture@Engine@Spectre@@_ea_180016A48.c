/*
 * XREFs of ??$MakeAndInitialize@VSpectreTexture@@V1@AEAV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreTexture@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x180016A48
 * Callers:
 *     ?CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUISpectreTexture@@@Z @ 0x180018620 (-CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreTexture,SpectreTexture,std::shared_ptr<Spectre::Engine::Texture> &>(
        __int64 *a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<SpectreTexture,SpectreTexture,std::shared_ptr<Spectre::Engine::Texture> &>(
           a1,
           a2);
}
