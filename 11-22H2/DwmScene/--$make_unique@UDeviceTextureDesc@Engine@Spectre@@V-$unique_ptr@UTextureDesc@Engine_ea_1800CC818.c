/*
 * XREFs of ??$make_unique@UDeviceTextureDesc@Engine@Spectre@@V?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@AEBIAEAI$0A@@std@@YA?AV?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@0@$$QEAV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBIAEAI@Z @ 0x1800CC818
 * Callers:
 *     _anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE2D_DESC_ @ 0x1800CC1E8 (_anonymous_namespace_--CreateDeviceTextureDesc_D3D11_TEXTURE2D_DESC_.c)
 *     _anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_ @ 0x1800CC304 (_anonymous_namespace_--CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<Spectre::Engine::DeviceTextureDesc,std::unique_ptr<Spectre::Engine::TextureDesc>,unsigned int const &,unsigned int &,0>(
        _QWORD *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  _DWORD *v8; // rax
  int v9; // r10d
  int v10; // r9d
  __int64 v11; // r8

  v8 = operator new(0x10uLL);
  if ( v8 )
  {
    v9 = *a4;
    v10 = *a3;
    v11 = *a2;
    *a2 = 0LL;
    *(_QWORD *)v8 = v11;
    v8[2] = v10;
    v8[3] = v9;
  }
  *a1 = v8;
  return a1;
}
