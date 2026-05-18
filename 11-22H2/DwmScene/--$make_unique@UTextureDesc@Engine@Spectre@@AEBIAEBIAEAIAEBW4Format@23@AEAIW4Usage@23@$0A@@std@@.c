/*
 * XREFs of ??$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEAIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBI0AEAIAEBW4Format@Engine@Spectre@@1$$QEAW4Usage@34@@Z @ 0x1800CC884
 * Callers:
 *     _anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_ @ 0x1800CC304 (_anonymous_namespace_--CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0TextureDesc@Engine@Spectre@@QEAA@IIIW4Format@12@IW4Usage@12@@Z @ 0x18005534C (--0TextureDesc@Engine@Spectre@@QEAA@IIIW4Format@12@IW4Usage@12@@Z.c)
 */

__int64 *__fastcall std::make_unique<Spectre::Engine::TextureDesc,unsigned int const &,unsigned int const &,unsigned int &,enum Spectre::Engine::Format const &,unsigned int &,enum Spectre::Engine::Usage,0>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7)
{
  _DWORD *v11; // rcx
  __int64 v12; // rax

  v11 = operator new(0x1CuLL);
  v12 = 0LL;
  if ( v11 )
    v12 = Spectre::Engine::TextureDesc::TextureDesc(v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
