/*
 * XREFs of ??$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x18001762C
 * Callers:
 *     ??$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectre@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceTexture@Engine@Spectre@@@3@@Z @ 0x180017600 (--$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectr.c)
 * Callees:
 *     ??$?0VDeviceTexture@Engine@Spectre@@@?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@1@PEAVTextureD3D11@D3D11@Engine@Spectre@@@Z @ 0x180015430 (--$-0VDeviceTexture@Engine@Spectre@@@-$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@QEAA.c)
 */

__int64 __fastcall std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rcx

  std::shared_ptr<Spectre::Engine::D3D11::TextureD3D11>::shared_ptr<Spectre::Engine::D3D11::TextureD3D11>(
    a1,
    (__int64)a2,
    *a2);
  return v2;
}
