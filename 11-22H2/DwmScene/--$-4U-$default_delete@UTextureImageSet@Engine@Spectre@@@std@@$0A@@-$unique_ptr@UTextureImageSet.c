/*
 * XREFs of ??$?4U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180054D74
 * Callers:
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@std@@QEAAXPEAUTextureImageSet@Engine@Spectre@@@Z @ 0x180056B34 (-reset@-$unique_ptr@UTextureImageSet@Engine@Spectre@@U-$default_delete@UTextureImageSet@Engine@S.c)
 */

__int64 *__fastcall std::unique_ptr<Spectre::Engine::TextureImageSet>::operator=<std::default_delete<Spectre::Engine::TextureImageSet>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    std::unique_ptr<Spectre::Engine::TextureImageSet>::reset(a1, v4);
  }
  return a1;
}
