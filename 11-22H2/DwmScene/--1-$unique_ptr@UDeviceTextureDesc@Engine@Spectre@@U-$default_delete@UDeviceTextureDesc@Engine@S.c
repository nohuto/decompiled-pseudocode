/*
 * XREFs of ??1?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556B4
 * Callers:
 *     ??1DeviceTexture@Engine@Spectre@@UEAA@XZ @ 0x180055718 (--1DeviceTexture@Engine@Spectre@@UEAA@XZ.c)
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 *     ?UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z @ 0x1800CF250 (-UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z.c)
 * Callees:
 *     ??R?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@QEBAXPEAUDeviceTextureDesc@Engine@Spectre@@@Z @ 0x180055854 (--R-$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@QEBAXPEAUDeviceTextureDesc@Engine@S.c)
 */

__int64 __fastcall std::unique_ptr<Spectre::Engine::DeviceTextureDesc>::~unique_ptr<Spectre::Engine::DeviceTextureDesc>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Spectre::Engine::DeviceTextureDesc>::operator()();
  return result;
}
