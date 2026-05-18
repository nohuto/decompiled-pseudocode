/*
 * XREFs of ??1?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556F8
 * Callers:
 *     ??1Texture@Engine@Spectre@@UEAA@XZ @ 0x180055760 (--1Texture@Engine@Spectre@@UEAA@XZ.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ??R?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@QEBAXPEAUTextureImageSet@Engine@Spectre@@@Z @ 0x180055884 (--R-$default_delete@UTextureImageSet@Engine@Spectre@@@std@@QEBAXPEAUTextureImageSet@Engine@Spect.c)
 */

__int64 __fastcall std::unique_ptr<Spectre::Engine::TextureImageSet>::~unique_ptr<Spectre::Engine::TextureImageSet>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Spectre::Engine::TextureImageSet>::operator()();
  return result;
}
