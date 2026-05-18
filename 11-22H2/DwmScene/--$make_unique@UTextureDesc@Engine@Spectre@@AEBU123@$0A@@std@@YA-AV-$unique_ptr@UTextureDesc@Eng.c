/*
 * XREFs of ??$make_unique@UTextureDesc@Engine@Spectre@@AEBU123@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBUTextureDesc@Engine@Spectre@@@Z @ 0x180055108
 * Callers:
 *     ?AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055A68 (-AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@.c)
 *     ??$make_unique@UDeviceTextureDesc@Engine@Spectre@@AEBUTextureDesc@23@AEAIAEAI$0A@@std@@YA?AV?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@0@AEBUTextureDesc@Engine@Spectre@@AEAI1@Z @ 0x1800CC734 (--$make_unique@UDeviceTextureDesc@Engine@Spectre@@AEBUTextureDesc@23@AEAIAEAI$0A@@std@@YA-AV-$un.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<Spectre::Engine::TextureDesc,Spectre::Engine::TextureDesc const &,0>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax

  v4 = operator new(0x1CuLL);
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    v4[2] = *(_QWORD *)(a2 + 16);
    *((_DWORD *)v4 + 6) = *(_DWORD *)(a2 + 24);
  }
  *a1 = v4;
  return a1;
}
