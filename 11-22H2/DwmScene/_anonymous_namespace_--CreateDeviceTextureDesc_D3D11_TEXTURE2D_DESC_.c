/*
 * XREFs of _anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE2D_DESC_ @ 0x1800CC1E8
 * Callers:
 *     ?UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z @ 0x1800CF250 (-UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556D4 (--1-$unique_ptr@UTextureDesc@Engine@Spectre@@U-$default_delete@UTextureDesc@Engine@Spectre@@@std.c)
 *     ??$make_unique@UDeviceTextureDesc@Engine@Spectre@@V?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@AEBIAEAI$0A@@std@@YA?AV?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@0@$$QEAV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBIAEAI@Z @ 0x1800CC818 (--$make_unique@UDeviceTextureDesc@Engine@Spectre@@V-$unique_ptr@UTextureDesc@Engine_ea_1800CC818.c)
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBI0AEBW4Format@Engine@Spectre@@AEAI$$QEAW4Usage@34@@Z @ 0x1800CC914 (--$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@YA-A.c)
 *     ?GetFormatAndColorSpace@D3DUtils@D3D11@Engine@Spectre@@SA?AU?$pair@W4Format@Engine@Spectre@@W4ColorSpace@D3D11@23@@std@@W4DXGI_FORMAT@@@Z @ 0x1800CE9BC (-GetFormatAndColorSpace@D3DUtils@D3D11@Engine@Spectre@@SA-AU-$pair@W4Format@Engine@Spectre@@W4Co.c)
 */

__int64 __fastcall anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE2D_DESC_(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 v5; // rbx
  int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  __int64 *v16; // rax
  __int64 v17; // rcx
  void *v19[2]; // [rsp+30h] [rbp-10h] BYREF
  void *v20; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v21; // [rsp+68h] [rbp+28h] BYREF
  int v22; // [rsp+70h] [rbp+30h] BYREF
  int v23; // [rsp+78h] [rbp+38h] BYREF

  v23 = a4;
  v22 = a3;
  v5 = a5;
  Spectre::Engine::D3D11::D3DUtils::GetFormatAndColorSpace(&a5, *(unsigned int *)(a5 + 16), a2);
  if ( HIDWORD(a5) == 1 )
    v9 = v7 | 8;
  else
    v9 = v7 & 0xFFFFFFF7;
  if ( (*(_BYTE *)(v5 + 32) & 8) != 0 )
    v10 = v9 | 1;
  else
    v10 = v9 & 0xFFFFFFFE;
  if ( (*(_BYTE *)(v5 + 32) & 0x20) != 0 )
    v11 = v10 | 2;
  else
    v11 = v10 & 0xFFFFFFFD;
  if ( (*(_BYTE *)(v5 + 32) & 0x40) != 0 )
    v12 = v11 | 4;
  else
    v12 = v11 & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v5 + 40) & 4) != 0 )
    v13 = v12 | 0x10;
  else
    v13 = v12 & 0xFFFFFFEF;
  if ( (*(_BYTE *)(v5 + 40) & 1) != 0 )
    v14 = v13 | 0x20;
  else
    v14 = v13 & 0xFFFFFFDF;
  if ( v8 <= 1 )
    v15 = v14 & 0xFFFFFFBF;
  else
    v15 = v14 | 0x40;
  v22 = *(_DWORD *)(v5 + 28);
  v21 = v15;
  v16 = (__int64 *)std::make_unique<Spectre::Engine::TextureDesc,unsigned int const &,unsigned int const &,enum Spectre::Engine::Format const &,unsigned int &,enum Spectre::Engine::Usage,0>(
                     (unsigned int)v19,
                     v5,
                     (int)v5 + 4,
                     (unsigned int)&a5,
                     (__int64)&v21,
                     (__int64)&v22);
  v20 = 0LL;
  v17 = *v16;
  *v16 = 0LL;
  a5 = v17;
  std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>(&v20);
  std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>(v19);
  std::make_unique<Spectre::Engine::DeviceTextureDesc,std::unique_ptr<Spectre::Engine::TextureDesc>,unsigned int const &,unsigned int &,0>(
    a1,
    &a5,
    v5 + 8,
    &v23);
  std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>((void **)&a5);
  return a1;
}
