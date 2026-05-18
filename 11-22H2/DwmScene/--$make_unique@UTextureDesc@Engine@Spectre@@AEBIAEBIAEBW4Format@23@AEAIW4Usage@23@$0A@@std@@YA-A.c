/*
 * XREFs of ??$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBI0AEBW4Format@Engine@Spectre@@AEAI$$QEAW4Usage@34@@Z @ 0x1800CC914
 * Callers:
 *     _anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE2D_DESC_ @ 0x1800CC1E8 (_anonymous_namespace_--CreateDeviceTextureDesc_D3D11_TEXTURE2D_DESC_.c)
 *     _anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_ @ 0x1800CC304 (_anonymous_namespace_--CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0TextureDesc@Engine@Spectre@@QEAA@IIW4Format@12@IW4Usage@12@@Z @ 0x180055388 (--0TextureDesc@Engine@Spectre@@QEAA@IIW4Format@12@IW4Usage@12@@Z.c)
 */

__int64 *__fastcall std::make_unique<Spectre::Engine::TextureDesc,unsigned int const &,unsigned int const &,enum Spectre::Engine::Format const &,unsigned int &,enum Spectre::Engine::Usage,0>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6)
{
  _DWORD *v10; // rcx
  __int64 v11; // rax

  v10 = operator new(0x1CuLL);
  v11 = 0LL;
  if ( v10 )
    v11 = Spectre::Engine::TextureDesc::TextureDesc(v10, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
