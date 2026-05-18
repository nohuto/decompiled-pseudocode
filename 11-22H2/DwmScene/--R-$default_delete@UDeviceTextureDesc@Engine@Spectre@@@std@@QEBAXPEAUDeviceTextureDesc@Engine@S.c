/*
 * XREFs of ??R?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@QEBAXPEAUDeviceTextureDesc@Engine@Spectre@@@Z @ 0x180055854
 * Callers:
 *     ??1?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556B4 (--1-$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U-$default_delete@UDeviceTextureDesc@Engine@S.c)
 *     ??$?4U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CC148 (--$-4U-$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@$0A@@-$unique_ptr@UDeviceTexture.c)
 *     ?UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z @ 0x1800CF250 (-UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556D4 (--1-$unique_ptr@UTextureDesc@Engine@Spectre@@U-$default_delete@UTextureDesc@Engine@Spectre@@@std.c)
 */

void __fastcall std::default_delete<Spectre::Engine::DeviceTextureDesc>::operator()(__int64 a1, void **a2)
{
  if ( a2 )
  {
    std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>(a2);
    operator delete(a2);
  }
}
