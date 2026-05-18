/*
 * XREFs of ??$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEAI0AEAW4Format@Engine@Spectre@@0AEAW4Usage@34@@Z @ 0x180055080
 * Callers:
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0TextureDesc@Engine@Spectre@@QEAA@IIW4Format@12@IW4Usage@12@@Z @ 0x180055388 (--0TextureDesc@Engine@Spectre@@QEAA@IIW4Format@12@IW4Usage@12@@Z.c)
 */

__int64 *__fastcall std::make_unique<Spectre::Engine::TextureDesc,unsigned int &,unsigned int &,enum Spectre::Engine::Format &,unsigned int &,enum Spectre::Engine::Usage &,0>(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  void *v10; // rcx
  __int64 v11; // rax

  v10 = operator new(0x1CuLL);
  v11 = 0LL;
  if ( v10 )
    v11 = Spectre::Engine::TextureDesc::TextureDesc(v10, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
