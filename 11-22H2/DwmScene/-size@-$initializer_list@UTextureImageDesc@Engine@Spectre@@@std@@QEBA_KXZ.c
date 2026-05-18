/*
 * XREFs of ?size@?$initializer_list@UTextureImageDesc@Engine@Spectre@@@std@@QEBA_KXZ @ 0x1800CF4E0
 * Callers:
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::initializer_list<Spectre::Engine::TextureImageDesc>::size(_QWORD *a1)
{
  return (__int64)(a1[1] - *a1) >> 5;
}
