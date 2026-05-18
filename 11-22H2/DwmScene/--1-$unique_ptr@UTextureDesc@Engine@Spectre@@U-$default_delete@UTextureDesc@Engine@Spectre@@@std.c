/*
 * XREFs of ??1?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556D4
 * Callers:
 *     ??1Texture@Engine@Spectre@@UEAA@XZ @ 0x180055760 (--1Texture@Engine@Spectre@@UEAA@XZ.c)
 *     ??R?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@QEBAXPEAUDeviceTextureDesc@Engine@Spectre@@@Z @ 0x180055854 (--R-$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@QEBAXPEAUDeviceTextureDesc@Engine@S.c)
 *     ?AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055A68 (-AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     _anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE2D_DESC_ @ 0x1800CC1E8 (_anonymous_namespace_--CreateDeviceTextureDesc_D3D11_TEXTURE2D_DESC_.c)
 *     _anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_ @ 0x1800CC304 (_anonymous_namespace_--CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_.c)
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 *     _Spectre::Engine::D3D11::TextureD3D11::CreateRendererResources3D_::_1_::dtor$6 @ 0x1800F1922 (_Spectre--Engine--D3D11--TextureD3D11--CreateRendererResources3D_--_1_--dtor$6.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
