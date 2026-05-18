/*
 * XREFs of ?SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memcpy_s @ 0x18000FF54 (memcpy_s.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?GetDepth@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056650 (-GetDepth@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ?GetFormat@DeviceTexture@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x1800566C4 (-GetFormat@DeviceTexture@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 *     ?GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x1800567C8 (-GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetUsage@DeviceTexture@Engine@Spectre@@QEBA?AW4Usage@23@XZ @ 0x180056878 (-GetUsage@DeviceTexture@Engine@Spectre@@QEBA-AW4Usage@23@XZ.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?GetTexture3D@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture3D@@@WRL@Microsoft@@XZ @ 0x1800CF008 (-GetTexture3D@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture3D@@@WRL@Microsof.c)
 *     ?GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CF048 (-GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@.c)
 *     ??$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@@Z @ 0x1800CF74C (--$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA-AV-$s.c)
 *     ??$dynamic_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x1800CF87C (--$dynamic_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA-AV-$share.c)
 *     Spectre::Engine::GetFormatBlockHeight @ 0x1800D0580 (Spectre--Engine--GetFormatBlockHeight.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitUpdateTexture(
        __int64 a1,
        __int64 *a2,
        void *a3,
        int a4)
{
  __int64 *DeviceTexture; // rax
  char v7; // bl
  __int64 v8; // rdi
  std::_Ref_count_base *v9; // r15
  int v10; // r12d
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 **v13; // r13
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, _QWORD, _DWORD, void **); // rbx
  Spectre::Engine::DeviceTexture *v16; // rsi
  __int64 *Texture; // rax
  int v18; // ebx
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void **); // rbx
  _QWORD *Texture3D; // rax
  char v22; // r12
  unsigned int Format; // eax
  int Height; // eax
  unsigned int v25; // r8d
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 *v28; // r14
  __int64 v29; // rdi
  __int64 *v30; // rax
  void *Destination; // [rsp+40h] [rbp-39h] BYREF
  int v33; // [rsp+48h] [rbp-31h]
  Spectre::Engine::DeviceTexture *v34; // [rsp+50h] [rbp-29h] BYREF
  std::_Ref_count_base *v35; // [rsp+58h] [rbp-21h]
  _QWORD v36[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v37; // [rsp+70h] [rbp-9h] BYREF
  std::_Ref_count_base *v38; // [rsp+78h] [rbp-1h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v39; // [rsp+80h] [rbp+7h] BYREF
  std::_Ref_count_base *v40; // [rsp+88h] [rbp+Fh]
  __int64 v41; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v42; // [rsp+E8h] [rbp+6Fh] BYREF
  void *Source; // [rsp+F0h] [rbp+77h]
  int v44; // [rsp+F8h] [rbp+7Fh]

  v44 = a4;
  Source = a3;
  LODWORD(v41) = 0;
  if ( *a2 )
  {
    DeviceTexture = Spectre::Engine::Texture::GetDeviceTexture(*a2, &v39, *(_DWORD *)(a1 + 88));
    v7 = 1;
    v8 = *DeviceTexture;
  }
  else
  {
    v35 = 0LL;
    DeviceTexture = (__int64 *)&v34;
    v7 = 2;
    v8 = 0LL;
  }
  v36[0] = v8;
  v9 = (std::_Ref_count_base *)DeviceTexture[1];
  v36[1] = v9;
  *DeviceTexture = 0LL;
  DeviceTexture[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v35 )
      std::_Ref_count_base::_Decref(v35);
  }
  if ( (v7 & 1) != 0 && v40 )
    std::_Ref_count_base::_Decref(v40);
  v10 = -((unsigned int)Spectre::Engine::DeviceTexture::GetUsage(v8) != 2);
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v34, v36);
  LODWORD(v41) = 1;
  v11 = *(_QWORD *)(*a2 + 128);
  v12 = (__int64 *)(a1 + 144);
  v13 = (__int64 **)(a1 + 144);
  if ( v11 && *(_DWORD *)(v11 + 12) == 1 )
  {
    v14 = *v12;
    v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, void **))(*(_QWORD *)v14 + 112LL);
    v16 = v34;
    Texture = Spectre::Engine::D3D11::TextureD3D11::GetTexture((__int64)v34, &v42);
    v18 = v15(v14, *Texture, 0LL, (unsigned int)(v10 + 4), 0, &Destination);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
  }
  else
  {
    v16 = v34;
    LODWORD(v41) = Spectre::Engine::DeviceTexture::GetDepth(v34);
    v19 = *v12;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void **))(*(_QWORD *)v19 + 112LL);
    Texture3D = Spectre::Engine::D3D11::TextureD3D11::GetTexture3D((__int64)v16, &v42);
    v18 = v20(v19, *Texture3D, 0LL, (unsigned int)(v10 + 4), 0, &Destination);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
  }
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v37);
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::RenderDeviceD3D11,Spectre::Engine::RenderDevice>(
    (__int64 *)&v39,
    &v37);
  if ( v38 )
    std::_Ref_count_base::_Decref(v38);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v39, v18);
  v22 = 0;
  if ( v18 < 0 )
  {
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsCommandListD3D11,
      3,
      "Failed to update Texture with HRESULT error 0x%.8x",
      v18);
  }
  else
  {
    Format = Spectre::Engine::DeviceTexture::GetFormat((__int64)v16);
    Spectre::Engine::GetFormatBlockHeight(Format);
    Height = Spectre::Engine::DeviceTexture::GetHeight(v16);
    v26 = (int)v41 * v33 * Height / v25;
    if ( v26 == v44 )
    {
      memcpy_s(Destination, v26, Source, v26);
      v22 = 1;
    }
    v27 = *Spectre::Engine::D3D11::TextureD3D11::GetTexture((__int64)v16, &v41);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
    v28 = *v13;
    v29 = **v13;
    if ( v27 )
      v30 = Spectre::Engine::D3D11::TextureD3D11::GetTexture((__int64)v16, &v41);
    else
      v30 = Spectre::Engine::D3D11::TextureD3D11::GetTexture3D((__int64)v16, &v41);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v29 + 120))(v28, *v30, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
  }
  if ( v40 )
    std::_Ref_count_base::_Decref(v40);
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return v22;
}
