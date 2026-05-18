/*
 * XREFs of ?GetActiveSize@Texture@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x180056618
 * Callers:
 *     ?GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18002648C (-GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055A68 (-AttachDeviceTexture@Texture@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@.c)
 *     ?Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180072F50 (-Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spec.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Spectre::Engine::Texture::GetActiveSize(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 144);
  return result;
}
