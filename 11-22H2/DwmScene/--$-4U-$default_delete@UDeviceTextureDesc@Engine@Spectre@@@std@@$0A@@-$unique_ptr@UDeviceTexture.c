/*
 * XREFs of ??$?4U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CC148
 * Callers:
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 *     ?UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z @ 0x1800CF250 (-UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z.c)
 * Callees:
 *     ??R?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@QEBAXPEAUDeviceTextureDesc@Engine@Spectre@@@Z @ 0x180055854 (--R-$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@QEBAXPEAUDeviceTextureDesc@Engine@S.c)
 */

void ***__fastcall std::unique_ptr<Spectre::Engine::DeviceTextureDesc>::operator=<std::default_delete<Spectre::Engine::DeviceTextureDesc>,0>(
        void ***a1,
        void ***a2)
{
  void **v3; // rax
  void **v4; // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<Spectre::Engine::DeviceTextureDesc>::operator()((__int64)a1, v4);
  }
  return a1;
}
