/*
 * XREFs of ??$dynamic_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x1800CF87C
 * Callers:
 *     ?SubmitCopyTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@0@Z @ 0x1800D0C60 (-SubmitCopyTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VTexture@Engine@.c)
 *     ?SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@IIIIPEBXIIII@Z @ 0x1800D2A20 (-SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@En.c)
 *     ?SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2F50 (-SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@Engi.c)
 * Callees:
 *     ??$?0VDeviceTexture@Engine@Spectre@@@?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@1@PEAVTextureD3D11@D3D11@Engine@Spectre@@@Z @ 0x180015430 (--$-0VDeviceTexture@Engine@Spectre@@@-$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@QEAA.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

_QWORD *__fastcall std::dynamic_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast_0(
         *a2,
         0LL,
         &Spectre::Engine::DeviceTexture `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::TextureD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    std::shared_ptr<Spectre::Engine::D3D11::TextureD3D11>::shared_ptr<Spectre::Engine::D3D11::TextureD3D11>(
      a1,
      (__int64)a2,
      v4);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
