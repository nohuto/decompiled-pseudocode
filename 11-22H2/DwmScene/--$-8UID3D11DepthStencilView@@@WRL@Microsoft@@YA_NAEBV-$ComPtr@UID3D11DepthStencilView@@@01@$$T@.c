/*
 * XREFs of ??$?8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11DepthStencilView@@@01@$$T@Z @ 0x1800CC1D8
 * Callers:
 *     ?GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@II@Z @ 0x1800CEC40 (-GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     ?UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z @ 0x1800CF250 (-UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z.c)
 *     ?Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z @ 0x1800CFED0 (-Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z.c)
 *     ?SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@IIIIPEBXIIII@Z @ 0x1800D2A20 (-SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@En.c)
 *     ?CreateDeviceIndependentResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800D912C (-CreateDeviceIndependentResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::operator==<ID3D11DepthStencilView>(_QWORD *a1)
{
  return *a1 == 0LL;
}
