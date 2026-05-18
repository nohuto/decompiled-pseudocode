/*
 * XREFs of ?Create@Texture@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z @ 0x180055D68
 * Callers:
 *     ?CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUISpectreTexture@@@Z @ 0x180018620 (-CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUI.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11DepthStencilView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@I@Z @ 0x1800D5C8C (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11DepthStencilView@@@WRL@Micr.c)
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055A68 (-AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     ?GetDepth@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056650 (-GetDepth@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetFormat@DeviceTexture@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x1800566C4 (-GetFormat@DeviceTexture@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 *     ?GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x1800567C8 (-GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetUsage@DeviceTexture@Engine@Spectre@@QEBA?AW4Usage@23@XZ @ 0x180056878 (-GetUsage@DeviceTexture@Engine@Spectre@@QEBA-AW4Usage@23@XZ.c)
 *     ?GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056898 (-GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 */

void __fastcall Spectre::Engine::Texture::Create(__int64 a1, Spectre::Engine::DeviceTexture **a2)
{
  int v4; // r8d
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rcx
  unsigned int Width; // eax
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  int v13; // r11d
  _QWORD *v14; // rax
  _QWORD v15[3]; // [rsp+50h] [rbp-18h] BYREF

  Spectre::Engine::RendererResource::SetOption(a1, 1, 0);
  Spectre::Engine::RendererResource::SetOption(v5, v4 + 2, v4);
  Spectre::Engine::RendererResource::SetOption(v7, v6 + 4, v6);
  Spectre::Engine::DeviceTexture::GetUsage(*a2);
  Spectre::Engine::DeviceTexture::GetFormat(*a2);
  Spectre::Engine::DeviceTexture::GetDepth(*a2);
  Spectre::Engine::DeviceTexture::GetHeight(*a2);
  Width = Spectre::Engine::DeviceTexture::GetWidth(*a2);
  Spectre::Engine::Texture::Create(a1, Width, v10, v11, v9, v12, v13);
  v14 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v15,
          a2);
  Spectre::Engine::Texture::AttachDeviceTexture(a1, v14);
}
