/*
 * XREFs of ??$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEAI00AEAW4Format@Engine@Spectre@@0AEAW4Usage@34@@Z @ 0x180054FF0
 * Callers:
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0TextureDesc@Engine@Spectre@@QEAA@IIIW4Format@12@IW4Usage@12@@Z @ 0x18005534C (--0TextureDesc@Engine@Spectre@@QEAA@IIIW4Format@12@IW4Usage@12@@Z.c)
 */

__int64 *__fastcall std::make_unique<Spectre::Engine::TextureDesc,unsigned int &,unsigned int &,unsigned int &,enum Spectre::Engine::Format &,unsigned int &,enum Spectre::Engine::Usage &,0>(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  void *v11; // rcx
  __int64 v12; // rax

  v11 = operator new(0x1CuLL);
  v12 = 0LL;
  if ( v11 )
    v12 = Spectre::Engine::TextureDesc::TextureDesc(v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
