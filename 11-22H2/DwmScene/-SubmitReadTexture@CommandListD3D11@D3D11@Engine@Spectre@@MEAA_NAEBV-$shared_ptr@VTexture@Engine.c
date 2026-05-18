/*
 * XREFs of ?SubmitReadTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAXI@Z @ 0x1800D1170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memcpy_s @ 0x18000FF54 (memcpy_s.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     Spectre::Engine::GetFormatPitch @ 0x180048848 (Spectre--Engine--GetFormatPitch.c)
 *     ?GetDepth@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056650 (-GetDepth@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ?GetFormat@DeviceTexture@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x1800566C4 (-GetFormat@DeviceTexture@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 *     ?GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x1800567C8 (-GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetTextureType@DeviceTexture@Engine@Spectre@@QEBA?AW4TextureType@23@XZ @ 0x180056858 (-GetTextureType@DeviceTexture@Engine@Spectre@@QEBA-AW4TextureType@23@XZ.c)
 *     ?GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056898 (-GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?GetTexture3D@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture3D@@@WRL@Microsoft@@XZ @ 0x1800CF008 (-GetTexture3D@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture3D@@@WRL@Microsof.c)
 *     ?GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CF048 (-GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@.c)
 *     ??$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@@Z @ 0x1800CF74C (--$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA-AV-$s.c)
 *     Spectre::Engine::GetFormatBlockHeight @ 0x1800D0580 (Spectre--Engine--GetFormatBlockHeight.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitReadTexture(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v4; // r15
  Spectre::Engine::DeviceTexture **DeviceTexture; // rax
  char v6; // di
  Spectre::Engine::DeviceTexture *v7; // rbx
  std::_Ref_count_base *v8; // rsi
  __int64 v9; // r12
  int v10; // edi
  int Format; // eax
  unsigned int v12; // eax
  int Width; // eax
  int v14; // r10d
  unsigned int v15; // r13d
  rsize_t v16; // r11
  int Height; // eax
  unsigned int v18; // r8d
  unsigned int Depth; // eax
  unsigned int v20; // edx
  int v21; // r9d
  int v22; // r10d
  rsize_t v23; // r11
  unsigned int v24; // ebx
  unsigned int v25; // edi
  int v26; // r14d
  unsigned int v27; // r9d
  unsigned int v29; // [rsp+48h] [rbp-69h]
  int v30; // [rsp+4Ch] [rbp-65h]
  int v31; // [rsp+50h] [rbp-61h]
  unsigned int v32; // [rsp+54h] [rbp-5Dh]
  rsize_t v33; // [rsp+58h] [rbp-59h] BYREF
  std::_Ref_count_base *v34; // [rsp+60h] [rbp-51h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v35; // [rsp+68h] [rbp-49h] BYREF
  std::_Ref_count_base *v36; // [rsp+70h] [rbp-41h]
  __int64 v37; // [rsp+78h] [rbp-39h]
  __int64 v38; // [rsp+80h] [rbp-31h] BYREF
  __int64 v39; // [rsp+88h] [rbp-29h] BYREF
  __int64 v40; // [rsp+90h] [rbp-21h]
  std::_Ref_count_base *v41; // [rsp+98h] [rbp-19h]
  __int64 v42; // [rsp+A0h] [rbp-11h] BYREF
  unsigned int v43; // [rsp+A8h] [rbp-9h]
  int v44; // [rsp+ACh] [rbp-5h]
  Spectre::Engine::DeviceTexture *v45; // [rsp+B0h] [rbp-1h]
  std::_Ref_count_base *v46; // [rsp+B8h] [rbp+7h]
  unsigned int v48; // [rsp+120h] [rbp+6Fh]

  v4 = a1;
  if ( *a2 )
  {
    DeviceTexture = (Spectre::Engine::DeviceTexture **)Spectre::Engine::Texture::GetDeviceTexture(
                                                         *a2,
                                                         &v33,
                                                         *(_DWORD *)(a1 + 88));
    v6 = 1;
    v7 = *DeviceTexture;
  }
  else
  {
    v36 = 0LL;
    DeviceTexture = &v35;
    v6 = 2;
    v7 = 0LL;
  }
  v45 = v7;
  v8 = DeviceTexture[1];
  v41 = v8;
  v46 = v8;
  *DeviceTexture = 0LL;
  DeviceTexture[1] = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v36 )
      std::_Ref_count_base::_Decref(v36);
  }
  if ( (v6 & 1) != 0 && v34 )
    std::_Ref_count_base::_Decref(v34);
  if ( (unsigned int)Spectre::Engine::DeviceTexture::GetTextureType((__int64)v7) == 1 )
  {
    v9 = *Spectre::Engine::D3D11::TextureD3D11::GetTexture((__int64)v7, &v38);
    v37 = v9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
  }
  else
  {
    v9 = *Spectre::Engine::D3D11::TextureD3D11::GetTexture3D((__int64)v7, &v39);
    v37 = v9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int64 *))(**(_QWORD **)(v4 + 144) + 112LL))(
          *(_QWORD *)(v4 + 144),
          v9,
          0LL,
          1LL,
          0,
          &v42);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v4 + 72, &v33);
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::RenderDeviceD3D11,Spectre::Engine::RenderDevice>(
    (__int64 *)&v35,
    &v33);
  if ( v34 )
    std::_Ref_count_base::_Decref(v34);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v35, v10);
  if ( v10 < 0 )
  {
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsCommandListD3D11,
      3,
      "Failed to read Texture with HRESULT error 0x%.8x",
      v10);
    if ( v36 )
      std::_Ref_count_base::_Decref(v36);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    return 0;
  }
  else
  {
    Format = Spectre::Engine::DeviceTexture::GetFormat((__int64)v7);
    Spectre::Engine::GetFormatPitch(Format);
    v12 = Spectre::Engine::DeviceTexture::GetFormat((__int64)v7);
    Spectre::Engine::GetFormatBlockHeight(v12);
    Width = Spectre::Engine::DeviceTexture::GetWidth(v7);
    v15 = v14 * Width;
    v31 = v14 * Width * Spectre::Engine::DeviceTexture::GetHeight(v7);
    v48 = v43;
    v30 = v44;
    v16 = v15;
    if ( v43 <= v15 )
      v16 = v43;
    v33 = v16;
    v40 = v42;
    Height = Spectre::Engine::DeviceTexture::GetHeight(v7);
    v29 = (v18 + Height - 1) / v18;
    Depth = Spectre::Engine::DeviceTexture::GetDepth(v7);
    v32 = Depth;
    v24 = 0;
    if ( Depth )
    {
      do
      {
        v25 = 0;
        if ( v20 )
        {
          v26 = v21 * v24;
          do
          {
            v27 = v26 + v15 * v25;
            if ( v27 >= a4 )
              break;
            memcpy_s((void *const)(a3 + v27), v15, (const void *const)(v40 + v48 * v25++ + v22 * v24), v23);
            v20 = v29;
            v22 = v30;
            v23 = v33;
          }
          while ( v25 < v29 );
          v21 = v31;
          Depth = v32;
        }
        ++v24;
      }
      while ( v24 < Depth );
      v8 = v41;
      v4 = a1;
      v9 = v37;
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 144) + 120LL))(*(_QWORD *)(v4 + 144), v9, 0LL);
    if ( v36 )
      std::_Ref_count_base::_Decref(v36);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    return 1;
  }
}
