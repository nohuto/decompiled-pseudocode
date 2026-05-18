/*
 * XREFs of ??$make_unique@UTextureImageSet@Engine@Spectre@@UTextureImageSetView@23@V?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI$0A@@std@@YA?AV?$unique_ptr@UTextureImageSet@Engine@Spectre@@U?$default_delete@UTextureImageSet@Engine@Spectre@@@std@@@0@$$QEAUTextureImageSetView@Engine@Spectre@@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@AEAI@Z @ 0x180055158
 * Callers:
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0TextureImageSet@Engine@Spectre@@QEAA@$$QEAUTextureImageSetView@12@V?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@_K@Z @ 0x1800553C0 (--0TextureImageSet@Engine@Spectre@@QEAA@$$QEAUTextureImageSetView@12@V-$unique_ptr@$$BY0A@EU-$de.c)
 */

__int64 *__fastcall std::make_unique<Spectre::Engine::TextureImageSet,Spectre::Engine::TextureImageSetView,std::unique_ptr<unsigned char [0]>,unsigned int &,0>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        unsigned int *a4)
{
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v8 = operator new(0x40uLL);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *a4;
    v12 = *a3;
    *a3 = 0LL;
    v9 = Spectre::Engine::TextureImageSet::TextureImageSet(v8, a2, &v12, v10);
  }
  *a1 = v9;
  return a1;
}
