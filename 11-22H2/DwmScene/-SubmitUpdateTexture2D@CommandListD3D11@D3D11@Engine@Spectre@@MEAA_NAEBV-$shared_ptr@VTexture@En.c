/*
 * XREFs of ?SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@IIIIPEBXIIII@Z @ 0x1800D2A20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memcpy_s @ 0x18000FF54 (memcpy_s.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     Spectre::Engine::GetFormatPitch @ 0x180048848 (Spectre--Engine--GetFormatPitch.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 *     ?GetFormat@DeviceTexture@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x1800566C4 (-GetFormat@DeviceTexture@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 *     ?GetTextureType@DeviceTexture@Engine@Spectre@@QEBA?AW4TextureType@23@XZ @ 0x180056858 (-GetTextureType@DeviceTexture@Engine@Spectre@@QEBA-AW4TextureType@23@XZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??$?8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11DepthStencilView@@@01@$$T@Z @ 0x1800CC1D8 (--$-8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11DepthStencilView@@@01@$$T@.c)
 *     ?GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@II@Z @ 0x1800CEC40 (-GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     ?GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CF048 (-GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@.c)
 *     ??$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@@Z @ 0x1800CF74C (--$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA-AV-$s.c)
 *     ??$dynamic_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x1800CF87C (--$dynamic_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA-AV-$share.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitUpdateTexture2D(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        int a11)
{
  __int64 *DeviceTexture; // rax
  char v12; // bl
  __int64 v13; // rcx
  std::_Ref_count_base *v14; // r14
  __int64 *v15; // rdi
  int Format; // eax
  int FormatPitch; // r13d
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 *Texture; // rax
  bool v21; // bl
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rsi
  unsigned int v25; // r15d
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v31; // rbx
  int v32; // r12d
  char *v33; // rdi
  char *v34; // rsi
  unsigned int v35; // eax
  unsigned int v36; // r13d
  rsize_t v37; // r15
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rsi
  void (__fastcall *v42)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *); // rdi
  __int64 *v43; // rax
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+6Ch] [rbp-94h]
  int v49; // [rsp+70h] [rbp-90h]
  unsigned int v50; // [rsp+74h] [rbp-8Ch]
  int v51; // [rsp+78h] [rbp-88h]
  unsigned int v52; // [rsp+7Ch] [rbp-84h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  void *Destination; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v55; // [rsp+90h] [rbp-70h]
  __int64 *v56; // [rsp+98h] [rbp-68h] BYREF
  std::_Ref_count_base *v57; // [rsp+A0h] [rbp-60h]
  _QWORD v58[2]; // [rsp+A8h] [rbp-58h] BYREF
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v59; // [rsp+B8h] [rbp-48h] BYREF
  std::_Ref_count_base *v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+D8h] [rbp-28h] BYREF
  std::_Ref_count_base *v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+108h] [rbp+8h] BYREF
  int v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+114h] [rbp+14h]
  unsigned int v66; // [rsp+118h] [rbp+18h]
  int v67; // [rsp+11Ch] [rbp+1Ch]
  _QWORD pExceptionObject[7]; // [rsp+120h] [rbp+20h] BYREF

  v51 = a4;
  v52 = a3;
  v53 = a1;
  v50 = a6;
  v46 = a7;
  v47 = a9;
  v48 = a10;
  v49 = a11;
  LODWORD(v45) = 0;
  if ( *a2 )
  {
    DeviceTexture = Spectre::Engine::Texture::GetDeviceTexture(*a2, &v61, *(_DWORD *)(a1 + 88));
    v12 = 1;
    v13 = *DeviceTexture;
  }
  else
  {
    v60 = 0LL;
    DeviceTexture = (__int64 *)&v59;
    v12 = 2;
    v13 = 0LL;
  }
  v58[0] = v13;
  v14 = (std::_Ref_count_base *)DeviceTexture[1];
  v58[1] = v14;
  *DeviceTexture = 0LL;
  DeviceTexture[1] = 0LL;
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    if ( v60 )
      std::_Ref_count_base::_Decref(v60);
  }
  if ( (v12 & 1) != 0 && v62 )
    std::_Ref_count_base::_Decref(v62);
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v56, v58);
  v15 = v56;
  Format = Spectre::Engine::DeviceTexture::GetFormat((__int64)v56);
  FormatPitch = Spectre::Engine::GetFormatPitch(Format);
  if ( (unsigned int)Spectre::Engine::DeviceTexture::GetTextureType((__int64)v15) != 1 )
  {
    std::string::string(&v59, (__int64)"UpdateTexture2D can only be used with 2D textures");
    v18 = std::string::string(
            &v61,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v18, v19, (const char *)&v59, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  Texture = Spectre::Engine::D3D11::TextureD3D11::GetTexture((__int64)v15, &v45);
  v21 = Microsoft::WRL::operator==<ID3D11DepthStencilView>(Texture);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
  if ( v21 )
  {
    std::string::string(
      &v59,
      (__int64)"UpdateTexture2D can only be used with a valid ID3D11Texture2D interface pointer");
    v22 = std::string::string(
            &v61,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v22, v23, (const char *)&v59, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v24 = a9 * a11;
  v25 = FormatPitch * v48;
  if ( FormatPitch * v48 + (int)v24 >= a8 )
  {
    std::string::string(&v59, (__int64)"UpdateTexture2D: Src X/Y offset exceeds the size of the data buffer");
    v26 = std::string::string(
            &v61,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v26, v27, (const char *)&v59, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( FormatPitch * (v48 + a5) + v47 * (a6 + v49 - 1) > a8 )
  {
    std::string::string(&v59, (__int64)"UpdateTexture2D: Src rectangle exceeds the size of the data buffer");
    v28 = std::string::string(
            &v61,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v28, v29, (const char *)&v59, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  Spectre::Engine::D3D11::TextureD3D11::GetOrCreateCPUStagingTexture(v15, &v45, a5, a6);
  v30 = v53;
  v31 = v45;
  v32 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(**(_QWORD **)(v53 + 144) + 112LL))(
          *(_QWORD *)(v53 + 144),
          v45,
          0LL,
          4LL,
          0,
          &Destination);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v30 + 72, &v61);
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::RenderDeviceD3D11,Spectre::Engine::RenderDevice>(
    (__int64 *)&v59,
    &v61);
  if ( v62 )
    std::_Ref_count_base::_Decref(v62);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v59, v32);
  if ( v32 >= 0 && (v33 = (char *)Destination) != 0LL )
  {
    if ( !v55 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 80LL))(v31, &v61);
      v55 = 4 * v61;
      v33 = (char *)Destination;
    }
    v34 = (char *)(v46 + v25 + v24);
    v35 = FormatPitch * a5;
    v36 = v50;
    if ( v50 )
    {
      v37 = v35;
      v38 = v50;
      v39 = v47;
      do
      {
        memcpy_s(v33, v37, v34, v37);
        v33 += v55;
        v34 += v39;
        --v38;
      }
      while ( v38 );
      v31 = v45;
    }
    v40 = v53;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v53 + 144) + 120LL))(
      *(_QWORD *)(v53 + 144),
      v31,
      0LL);
    v63 = 0LL;
    v65 = a5;
    v66 = v36;
    v64 = 0;
    v67 = 1;
    v41 = *(_QWORD *)(v40 + 144);
    v42 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v41 + 368LL);
    v43 = Spectre::Engine::D3D11::TextureD3D11::GetTexture((__int64)v56, &v46);
    v42(v41, *v43, 0LL, v52, v51, 0, v31, 0, &v63);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v46);
    if ( v60 )
      std::_Ref_count_base::_Decref(v60);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
    if ( v57 )
      std::_Ref_count_base::_Decref(v57);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    return 1;
  }
  else
  {
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsCommandListD3D11,
      3,
      "Failed to update Texture2D with HRESULT error 0x%.8x",
      v32);
    if ( v60 )
      std::_Ref_count_base::_Decref(v60);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
    if ( v57 )
      std::_Ref_count_base::_Decref(v57);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    return 0;
  }
}
