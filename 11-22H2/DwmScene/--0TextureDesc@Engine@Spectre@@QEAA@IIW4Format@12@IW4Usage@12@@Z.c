/*
 * XREFs of ??0TextureDesc@Engine@Spectre@@QEAA@IIW4Format@12@IW4Usage@12@@Z @ 0x180055388
 * Callers:
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEAI0AEAW4Format@Engine@Spectre@@0AEAW4Usage@34@@Z @ 0x180055080 (--$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@std@@Y.c)
 *     ?CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z @ 0x1800CBF28 (-CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z.c)
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBI0AEBW4Format@Engine@Spectre@@AEAI$$QEAW4Usage@34@@Z @ 0x1800CC914 (--$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@YA-A.c)
 * Callees:
 *     ??0TextureDesc@Engine@Spectre@@AEAA@IIIW4TextureType@12@W4Format@12@IW4Usage@12@@Z @ 0x180055318 (--0TextureDesc@Engine@Spectre@@AEAA@IIIW4TextureType@12@W4Format@12@IW4Usage@12@@Z.c)
 */

__int64 __fastcall Spectre::Engine::TextureDesc::TextureDesc(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rcx

  Spectre::Engine::TextureDesc::TextureDesc(a1, a2, a3, 1, 1, a4, a5, a6);
  return v6;
}
