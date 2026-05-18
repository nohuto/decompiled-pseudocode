/*
 * XREFs of ?UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z @ 0x1800CF250
 * Callers:
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$ComPtr@UID3D11ShaderResourceView@@@67@I@Z @ 0x1800CD0A8 (-Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V-$C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$?9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11ShaderResourceView@@@01@$$T@Z @ 0x18001070C (--$-9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11ShaderResourceView@@@01@.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C40 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556B4 (--1-$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U-$default_delete@UDeviceTextureDesc@Engine@S.c)
 *     ??R?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@QEBAXPEAUDeviceTextureDesc@Engine@Spectre@@@Z @ 0x180055854 (--R-$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@QEBAXPEAUDeviceTextureDesc@Engine@S.c)
 *     ?GetFormat@DeviceTexture@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x1800566C4 (-GetFormat@DeviceTexture@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 *     ?GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x1800567C8 (-GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056898 (-GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?SetActiveSize@DeviceTexture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x1800568B8 (-SetActiveSize@DeviceTexture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ?to_string@Engine@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@12@@Z @ 0x18008C81C (-to_string@Engine@Spectre@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4F.c)
 *     ??$?4U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CC148 (--$-4U-$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@$0A@@-$unique_ptr@UDeviceTexture.c)
 *     ??$?8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11DepthStencilView@@@01@$$T@Z @ 0x1800CC1D8 (--$-8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11DepthStencilView@@@01@$$T@.c)
 *     _anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE2D_DESC_ @ 0x1800CC1E8 (_anonymous_namespace_--CreateDeviceTextureDesc_D3D11_TEXTURE2D_DESC_.c)
 *     _anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_ @ 0x1800CC304 (_anonymous_namespace_--CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_.c)
 *     ?EnsureResourceView@TextureD3D11@D3D11@Engine@Spectre@@IEAAXXZ @ 0x1800CE020 (-EnsureResourceView@TextureD3D11@D3D11@Engine@Spectre@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::TextureD3D11::UpdateCachedProperties(
        Spectre::Engine::D3D11::TextureD3D11 *this,
        unsigned int a2)
{
  int Width; // ebx
  char v5; // r14
  void ***v6; // rsi
  _QWORD *v7; // rcx
  int v8; // r8d
  void ***DeviceTextureDesc_D3D11_TEXTURE2D_DESC; // rax
  _QWORD *v10; // rcx
  __int64 v11; // r9
  void **v12; // rdx
  int Height; // r14d
  int Format; // edx
  _QWORD *v15; // rax
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-30h]
  int v21; // [rsp+4Ch] [rbp-24h]

  Width = 0;
  if ( !Microsoft::WRL::operator==<ID3D11DepthStencilView>((_QWORD *)this + 20) || (v5 = 1, (a2 & 1) == 0) )
    v5 = 0;
  v6 = (void ***)((char *)this + 112);
  if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>((_QWORD *)this + 21) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v7 + 80LL))(*v7, &v19);
    DeviceTextureDesc_D3D11_TEXTURE2D_DESC = (void ***)anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE2D_DESC_(
                                                         (__int64)&v18,
                                                         a2,
                                                         v8,
                                                         v21,
                                                         (__int64)&v19);
LABEL_8:
    std::unique_ptr<Spectre::Engine::DeviceTextureDesc>::operator=<std::default_delete<Spectre::Engine::DeviceTextureDesc>,0>(
      (void ***)this + 14,
      DeviceTextureDesc_D3D11_TEXTURE2D_DESC);
    std::unique_ptr<Spectre::Engine::DeviceTextureDesc>::~unique_ptr<Spectre::Engine::DeviceTextureDesc>(&v18);
    goto LABEL_11;
  }
  if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>((_QWORD *)this + 22) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 80LL))(*v10, &v19);
    DeviceTextureDesc_D3D11_TEXTURE2D_DESC = (void ***)anonymous_namespace_::CreateDeviceTextureDesc_D3D11_TEXTURE3D_DESC_(
                                                         (__int64)&v18,
                                                         a2,
                                                         v20,
                                                         v11,
                                                         (__int64)&v19);
    goto LABEL_8;
  }
  v12 = *v6;
  *v6 = 0LL;
  if ( v12 )
    std::default_delete<Spectre::Engine::DeviceTextureDesc>::operator()((__int64)v10, v12);
LABEL_11:
  if ( v5 )
    Spectre::Engine::D3D11::TextureD3D11::EnsureResourceView(this);
  Height = 0;
  if ( *v6 && **v6 )
  {
    Width = Spectre::Engine::DeviceTexture::GetWidth(this);
    Height = Spectre::Engine::DeviceTexture::GetHeight(this);
    Format = Spectre::Engine::DeviceTexture::GetFormat((__int64)this);
  }
  else
  {
    Format = 0;
  }
  v15 = Spectre::Engine::to_string(&v19, Format);
  std::string::operator=((Spectre::Engine::D3D11::TextureD3D11 *)((char *)this + 120), (__int64)v15);
  std::string::_Tidy_deallocate((__int64)&v19);
  v16 = 0LL;
  v17 = 0LL;
  v16.m128_f32[0] = (float)Width;
  v17.m128_f32[0] = (float)Height;
  Spectre::Engine::DeviceTexture::SetActiveSize((__int64)this, _mm_unpacklo_ps(v16, v17).m128_i64[0]);
}
