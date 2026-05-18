/*
 * XREFs of ??9Engine@Spectre@@YA_NAEBUTextureDesc@01@0@Z @ 0x18005583C
 * Callers:
 *     ?AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055A68 (-AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@.c)
 * Callees:
 *     ??8Engine@Spectre@@YA_NAEBUTextureDesc@01@0@Z @ 0x1800557F0 (--8Engine@Spectre@@YA_NAEBUTextureDesc@01@0@Z.c)
 */

bool __fastcall Spectre::Engine::operator!=(_DWORD *a1, _DWORD *a2)
{
  return !Spectre::Engine::operator==(a1, a2);
}
