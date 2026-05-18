/*
 * XREFs of _anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_ @ 0x1800CC304
 * Callers:
 *     ?UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z @ 0x1800CF250 (-UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556D4 (--1-$unique_ptr@UTextureDesc@Engine@Spectre@@U-$default_delete@UTextureDesc@Engine@Spectre@@@std.c)
 *     ??$make_unique@UDeviceTextureDesc@Engine@Spectre@@V?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@AEBIAEAI$0A@@std@@YA?AV?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@0@$$QEAV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBIAEAI@Z @ 0x1800CC818 (--$make_unique@UDeviceTextureDesc@Engine@Spectre@@V-$unique_ptr@UTextureDesc@Engine_ea_1800CC818.c)
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEAIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBI0AEAIAEBW4Format@Engine@Spectre@@1$$QEAW4Usage@34@@Z @ 0x1800CC884 (--$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEAIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@.c)
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBI0AEBW4Format@Engine@Spectre@@AEAI$$QEAW4Usage@34@@Z @ 0x1800CC914 (--$make_unique@UTextureDesc@Engine@Spectre@@AEBIAEBIAEBW4Format@23@AEAIW4Usage@23@$0A@@std@@YA-A.c)
 *     ?GetFormatAndColorSpace@D3DUtils@D3D11@Engine@Spectre@@SA?AU?$pair@W4Format@Engine@Spectre@@W4ColorSpace@D3D11@23@@std@@W4DXGI_FORMAT@@@Z @ 0x1800CE9BC (-GetFormatAndColorSpace@D3DUtils@D3D11@Engine@Spectre@@SA-AU-$pair@W4Format@Engine@Spectre@@W4Co.c)
 */

__int64 __fastcall anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rdi
  int v7; // r9d
  int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  unsigned int v12; // r9d
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  int v15; // eax
  int v16; // r8d
  __int64 *v17; // rax
  char v18; // bl
  __int64 v19; // rcx
  void **v20; // rax
  __int64 *v21; // rax
  void *v23; // [rsp+40h] [rbp-28h] BYREF
  void *v24; // [rsp+48h] [rbp-20h] BYREF
  void *v25; // [rsp+50h] [rbp-18h] BYREF
  void *v26[2]; // [rsp+58h] [rbp-10h] BYREF
  int v27; // [rsp+90h] [rbp+28h] BYREF
  unsigned int v28; // [rsp+98h] [rbp+30h] BYREF
  int v29; // [rsp+A0h] [rbp+38h] BYREF
  int v30; // [rsp+A8h] [rbp+40h] BYREF

  v29 = a3;
  v30 = 0;
  v5 = a5;
  v27 = 1;
  Spectre::Engine::D3D11::D3DUtils::GetFormatAndColorSpace(&a5, *(unsigned int *)(a5 + 16), a3);
  if ( HIDWORD(a5) == 1 )
    v9 = v7 | 8;
  else
    v9 = v7 & 0xFFFFFFF7;
  if ( (*(_BYTE *)(v5 + 24) & 8) != 0 )
    v10 = v9 | 1;
  else
    v10 = v9 & 0xFFFFFFFE;
  if ( (*(_BYTE *)(v5 + 24) & 0x20) != 0 )
    v11 = v10 | 2;
  else
    v11 = v10 & 0xFFFFFFFD;
  if ( (*(_BYTE *)(v5 + 24) & 0x40) != 0 )
    v12 = v11 | 4;
  else
    v12 = v11 & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v5 + 32) & 4) != 0 )
    v13 = v12 | 0x10;
  else
    v13 = v12 & 0xFFFFFFEF;
  if ( (*(_BYTE *)(v5 + 32) & 1) != 0 )
    v14 = v13 | 0x20;
  else
    v14 = v13 & 0xFFFFFFDF;
  v15 = *(_DWORD *)(v5 + 20);
  v16 = v5 + 4;
  v28 = v14 & 0xFFFFFFBF;
  if ( v8 )
  {
    v30 = v15;
    v21 = (__int64 *)std::make_unique<Spectre::Engine::TextureDesc,unsigned int const &,unsigned int const &,unsigned int &,enum Spectre::Engine::Format const &,unsigned int &,enum Spectre::Engine::Usage,0>(
                       (unsigned int)&v24,
                       v5,
                       v16,
                       (unsigned int)&v29,
                       (__int64)&a5,
                       (__int64)&v28,
                       (__int64)&v30);
    v18 = 12;
    v19 = *v21;
    *v21 = 0LL;
    v20 = &v23;
  }
  else
  {
    v29 = v15;
    v17 = (__int64 *)std::make_unique<Spectre::Engine::TextureDesc,unsigned int const &,unsigned int const &,enum Spectre::Engine::Format const &,unsigned int &,enum Spectre::Engine::Usage,0>(
                       (unsigned int)v26,
                       v5,
                       v16,
                       (unsigned int)&a5,
                       (__int64)&v28,
                       (__int64)&v29);
    v18 = 3;
    v19 = *v17;
    *v17 = 0LL;
    v20 = &v25;
  }
  *v20 = 0LL;
  a5 = v19;
  if ( (v18 & 8) != 0 )
  {
    v18 &= ~8u;
    std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>(&v23);
  }
  if ( (v18 & 4) != 0 )
    std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>(&v24);
  if ( (v18 & 2) != 0 )
    std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>(&v25);
  if ( (v18 & 1) != 0 )
    std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>(v26);
  std::make_unique<Spectre::Engine::DeviceTextureDesc,std::unique_ptr<Spectre::Engine::TextureDesc>,unsigned int const &,unsigned int &,0>(
    a1,
    &a5,
    v5 + 12,
    &v27);
  std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>((void **)&a5);
  return a1;
}
