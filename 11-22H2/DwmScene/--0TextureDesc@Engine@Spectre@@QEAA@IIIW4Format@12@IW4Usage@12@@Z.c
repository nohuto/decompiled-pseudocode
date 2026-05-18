/*
 * XREFs of ??0TextureDesc@Engine@Spectre@@QEAA@IIIW4Format@12@IW4Usage@12@@Z @ 0x18005534C
 * Callers:
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEAI00AEAW4Format@Engine@Spectre@@0AEAW4Usage@34@@Z @ 0x180054FF0 (--$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@st.c)
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEAIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBI0AEAIAEBW4Format@Engine@Spectre@@1$$QEAW4Usage@34@@Z @ 0x1800CC884 (--$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEAIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@.c)
 * Callees:
 *     ??0TextureDesc@Engine@Spectre@@AEAA@IIIW4TextureType@12@W4Format@12@IW4Usage@12@@Z @ 0x180055318 (--0TextureDesc@Engine@Spectre@@AEAA@IIIW4TextureType@12@W4Format@12@IW4Usage@12@@Z.c)
 */

__int64 __fastcall Spectre::Engine::TextureDesc::TextureDesc(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v7; // rcx

  Spectre::Engine::TextureDesc::TextureDesc(a1, a2, a3, a4, 2, a5, a6, a7);
  return v7;
}
