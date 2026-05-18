/*
 * XREFs of ?SubmitShaderTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@I@Z @ 0x1800D2530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectre@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceTexture@Engine@Spectre@@@3@@Z @ 0x180017600 (--$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectr.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ?IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z @ 0x180070AF0 (-IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 *     ?GetResourceView@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@XZ @ 0x1800CEFCC (-GetResourceView@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11ShaderResourceView@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitShaderTexture(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4)
{
  Spectre::Engine::D3D11::TextureD3D11 *v6; // r14
  __int64 *DeviceTexture; // rax
  char v8; // di
  __int64 v9; // rbx
  std::_Ref_count_base *v10; // r15
  __int64 *v11; // rax
  char v12; // bl
  char v13; // bl
  std::_Ref_count_base *v14; // r12
  __int64 *ResourceView; // rcx
  char v16; // di
  char v17; // di
  int v18; // esi
  int v19; // esi
  struct Spectre::Engine::PerformanceManager *v20; // rax
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v22; // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v24; // [rsp+48h] [rbp-38h]
  _QWORD v25[4]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v26[8]; // [rsp+70h] [rbp-10h] BYREF
  std::_Ref_count_base *v27; // [rsp+78h] [rbp-8h]
  __int64 v28; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v29; // [rsp+D8h] [rbp+58h]

  v29 = a4;
  v6 = 0LL;
  if ( *a3 )
  {
    DeviceTexture = Spectre::Engine::Texture::GetDeviceTexture(*a3, &v21, *(_DWORD *)(a1 + 88));
    v8 = 1;
    v9 = *DeviceTexture;
  }
  else
  {
    v24 = 0LL;
    DeviceTexture = &v23;
    v8 = 2;
    v9 = 0LL;
  }
  v25[0] = v9;
  v10 = (std::_Ref_count_base *)DeviceTexture[1];
  v25[1] = v10;
  *DeviceTexture = 0LL;
  DeviceTexture[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v24 )
      std::_Ref_count_base::_Decref(v24);
  }
  if ( (v8 & 1) != 0 )
  {
    v8 &= ~1u;
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
  }
  if ( v9 )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v21, v25);
    v11 = (__int64 *)Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)v26);
    v6 = (Spectre::Engine::D3D11::TextureD3D11 *)*v11;
    v12 = 4;
  }
  else
  {
    v24 = 0LL;
    v11 = &v23;
    v12 = 8;
  }
  v13 = v8 | v12;
  v25[2] = v6;
  v14 = (std::_Ref_count_base *)v11[1];
  v25[3] = v14;
  *v11 = 0LL;
  v11[1] = 0LL;
  if ( (v13 & 8) != 0 )
  {
    v13 &= ~8u;
    if ( v24 )
      std::_Ref_count_base::_Decref(v24);
  }
  if ( (v13 & 4) != 0 )
  {
    v13 &= ~4u;
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
  }
  if ( v6 )
  {
    ResourceView = Spectre::Engine::D3D11::TextureD3D11::GetResourceView(v6, &v23);
    v16 = 16;
  }
  else
  {
    v21 = 0LL;
    ResourceView = &v21;
    v16 = 32;
  }
  v17 = v13 | v16;
  v28 = 0LL;
  if ( &v28 != ResourceView )
  {
    v28 = *ResourceView;
    *ResourceView = 0LL;
  }
  if ( (v17 & 0x20) != 0 )
  {
    v17 &= ~0x20u;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  }
  if ( (v17 & 0x10) != 0 )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  if ( v6 && *((_BYTE *)v6 + 208) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 432LL))(*(_QWORD *)(a1 + 144), v28);
    *((_BYTE *)v6 + 208) = 0;
  }
  v18 = a2 - 1;
  if ( v18 )
  {
    v19 = v18 - 3;
    if ( v19 )
    {
      if ( v19 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 64LL))(
          *(_QWORD *)(a1 + 144),
          v29,
          1LL,
          &v28);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 248LL))(
        *(_QWORD *)(a1 + 144),
        v29,
        1LL,
        &v28);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 200LL))(
      *(_QWORD *)(a1 + 144),
      v29,
      1LL,
      &v28);
  }
  if ( v28 )
  {
    v20 = Spectre::Engine::PerformanceManager::Instance();
    Spectre::Engine::PerformanceManager::IncrementCounter((__int64)v20, 11, 1);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}
