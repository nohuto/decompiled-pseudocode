/*
 * XREFs of ?GetActiveSize@DeviceTexture@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x180056600
 * Callers:
 *     ?GetActiveSize@DeviceFrameBuffer@Engine@Spectre@@UEBA?AUVector2@Math@Utils@3@XZ @ 0x180028900 (-GetActiveSize@DeviceFrameBuffer@Engine@Spectre@@UEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055A68 (-AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Spectre::Engine::DeviceTexture::GetActiveSize(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 152);
  return result;
}
