/*
 * XREFs of ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18000BF9A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18001DDE0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x180025A6C (--1-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@AEAAXXZ @ 0x18002A47C (-_Tidy@-$vector@U-$pair@PEBVMutex@Engine@Spectre@@_N@std@@V-$allocator@U-$pair@PEBVMutex@Engine@.c)
 *     Spectre::Engine::GetFormatPitch @ 0x180048848 (Spectre--Engine--GetFormatPitch.c)
 *     ??$make_unique@$$BY0A@E$0A@@std@@YA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@_K@Z @ 0x180050F80 (--$make_unique@$$BY0A@E$0A@@std@@YA-AV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@0@_K.c)
 *     ??0TextureImageSet@Engine@Spectre@@QEAA@V?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@V?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@4@_K@Z @ 0x180055404 (--0TextureImageSet@Engine@Spectre@@QEAA@V-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator.c)
 *     ?GetFormat@DeviceTexture@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x1800566C4 (-GetFormat@DeviceTexture@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 *     ?GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x1800567C8 (-GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056898 (-GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HJAEBV34@_N@Z @ 0x18006ED68 (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$a_ea_18006ED68.c)
 *     ??$spectre_safe_pointer_cast@$$CBVCamera@Engine@Spectre@@VComponent@23@@Utils@Spectre@@YA?AV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@std@@V?$shared_ptr@VComponent@Engine@Spectre@@@3@@Z @ 0x180097888 (--$spectre_safe_pointer_cast@$$CBVCamera@Engine@Spectre@@VComponent@23@@Utils@Spectre@@YA-AV-$sh.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?GetDeviceContext@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800C585C (-GetDeviceContext@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11DeviceContext1@.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??$?4UID3D11Texture3D@@@?$ComPtr@UID3D11Resource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UID3D11Texture3D@@@12@@Z @ 0x1800CC180 (--$-4UID3D11Texture3D@@@-$ComPtr@UID3D11Resource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPtr@UID3D.c)
 *     ??$_Construct_n@PEBUTextureImageDesc@Engine@Spectre@@PEBU123@@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBUTextureImageDesc@Engine@Spectre@@1@Z @ 0x1800CC498 (--$_Construct_n@PEBUTextureImageDesc@Engine@Spectre@@PEBU123@@-$vector@UTextureImageDesc@Engine@.c)
 *     ??$_Integral_to_string@DJ@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@J@Z @ 0x1800CC650 (--$_Integral_to_string@DJ@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@J@.c)
 *     Spectre::Engine::GetFormatSlicePitch_0 @ 0x1800CEB78 (Spectre--Engine--GetFormatSlicePitch_0.c)
 *     ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUD3D11_TEXTURE2D_DESC@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF074 (-ToString@ExceptionDetails@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AE.c)
 *     ?size@?$initializer_list@UTextureImageDesc@Engine@Spectre@@@std@@QEBA_KXZ @ 0x1800CF4E0 (-size@-$initializer_list@UTextureImageDesc@Engine@Spectre@@@std@@QEBA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
_QWORD *__fastcall Spectre::Engine::D3D11::TextureD3D11::GetDeviceBuffer(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _BYTE *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *, _QWORD, __int128 **); // rdi
  int v14; // edi
  void **v15; // rax
  void **v16; // rax
  void **v17; // rax
  void **v18; // rbx
  _QWORD *v19; // rax
  unsigned __int64 v20; // r8
  void **v21; // rax
  void **v22; // rbx
  __int128 *v23; // rdx
  void **v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, __int64 *, _QWORD, __int128 **); // rdi
  int v31; // eax
  ULONG_PTR v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rbx
  ULONG_PTR v36; // r13
  int Format; // eax
  unsigned int FormatSlicePitch_0; // r13d
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned __int64 v42; // r14
  __int64 v43; // rcx
  void *v44; // rdx
  void *v45; // r15
  unsigned __int64 v46; // rax
  _QWORD *v48; // rax
  __int64 v49; // r8
  __int128 *v50; // [rsp+40h] [rbp-C0h] BYREF
  void *v51; // [rsp+48h] [rbp-B8h] BYREF
  void *v52; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v53; // [rsp+58h] [rbp-A8h] BYREF
  void **v54; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+68h] [rbp-98h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h] BYREF
  __int64 v58[2]; // [rsp+80h] [rbp-80h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-70h] BYREF
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v60; // [rsp+A8h] [rbp-58h] BYREF
  std::_Ref_count_base *v61; // [rsp+B0h] [rbp-50h]
  void **v62; // [rsp+B8h] [rbp-48h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+C0h] [rbp-40h] BYREF
  EXCEPTION_RECORD v64; // [rsp+160h] [rbp+60h] BYREF
  void *v65[2]; // [rsp+200h] [rbp+100h] BYREF
  int v66; // [rsp+210h] [rbp+110h]
  int v67; // [rsp+214h] [rbp+114h]
  unsigned __int64 v68; // [rsp+218h] [rbp+118h]
  __int128 v69; // [rsp+220h] [rbp+120h] BYREF
  unsigned __int64 v70; // [rsp+230h] [rbp+130h]
  unsigned __int64 v71; // [rsp+238h] [rbp+138h]
  __int64 pExceptionObject; // [rsp+240h] [rbp+140h] BYREF
  int v73; // [rsp+24Ch] [rbp+14Ch]
  __int64 v74; // [rsp+254h] [rbp+154h]
  __int64 v75; // [rsp+25Ch] [rbp+15Ch]
  __int64 v76; // [rsp+264h] [rbp+164h]
  _QWORD v77[4]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v78[7]; // [rsp+2A0h] [rbp+1A0h] BYREF
  void *retaddr; // [rsp+318h] [rbp+218h]

  v53 = a2;
  v4 = a1[14];
  if ( v4 )
  {
    v5 = *(_BYTE **)v4;
    v51 = v5;
    if ( v5 )
    {
      v51 = v5;
      if ( (v5[20] & 0x10) != 0 )
      {
        std::string::string(
          &v69,
          (__int64)"TextureD3D11::GetDeviceBuffer() -- reading of texture data is not supported for cubemaps");
        v6 = std::string::string(
               v65,
               (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
        Spectre::Engine::EngineException::EngineException(&pExceptionObject, (__int64)v6, v7, (const char *)&v69, 0);
        throw (Spectre::Engine::EngineException *)&pExceptionObject;
      }
    }
  }
  else
  {
    v51 = 0LL;
  }
  if ( *(_DWORD *)(v4 + 12) > 1u )
  {
    std::string::string(
      &v69,
      (__int64)"TextureD3D11::GetDeviceBuffer() -- reading of texture data is not supported for MSAA textures");
    v8 = std::string::string(
           v65,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    Spectre::Engine::EngineException::EngineException(&pExceptionObject, (__int64)v8, v9, (const char *)&v69, 0);
    throw (Spectre::Engine::EngineException *)&pExceptionObject;
  }
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)(a1 + 9), v58);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::Camera const,Spectre::Engine::Component>(&v60, v58);
  v10 = v60;
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v60, &v57);
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDeviceContext((__int64)v10, &v53);
  v55 = 0LL;
  v56 = 0LL;
  v11 = a1[21];
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 80LL))(v11, &pExceptionObject);
    v75 = 3LL;
    v76 = 0x20000LL;
    v73 = 1;
    v50 = 0LL;
    v12 = v57;
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int128 **))(*(_QWORD *)v57 + 40LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v50);
    v14 = v13(v12, &pExceptionObject, 0LL, &v50);
    Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v10, v14);
    if ( v14 < 0 )
    {
      std::string::string(v65, (__int64)"THROW_IF_FAILED_DETAILED. ");
      v15 = std::string::append(v65, " File=", 6uLL);
      std::string::append(
        v15,
        "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
        0x5CuLL);
      v16 = std::string::append(v65, " Line=", 6uLL);
      std::string::append(v16, "384", 3uLL);
      v17 = std::string::append(v65, " Message=", 9uLL);
      std::string::append(v17, "\"TextureD3D11::GetDeviceBuffer(): unable to create texture (2D)\"", 0x40uLL);
      v18 = std::string::append(v65, " Details=\"", 0xAuLL);
      v69 = 0LL;
      v70 = 0LL;
      v19 = (_QWORD *)ExceptionDetails::ToString(v77, &pExceptionObject, &v69);
      v20 = v19[2];
      if ( v19[3] >= 0x10uLL )
        v19 = (_QWORD *)*v19;
      v21 = std::string::append(v18, v19, v20);
      std::string::append(v21, "\"", 1uLL);
      std::string::_Tidy_deallocate((__int64)v77);
      std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Tidy((__int64)&v69);
      v22 = std::string::append(v65, " HRESULT=", 9uLL);
      std::_Integral_to_string<char,long>((__int64)&v69, v14);
      v23 = &v69;
      if ( v71 >= 0x10 )
        v23 = (__int128 *)v69;
      std::string::append(v22, v23, v70);
      std::string::_Tidy_deallocate((__int64)&v69);
      v24 = v65;
      if ( v68 >= 0x10 )
        v24 = (void **)v65[0];
      std::string::string(v77, (__int64)v24);
      v25 = std::string::string(
              &v69,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      Spectre::Engine::EngineException::EngineException(v78, (__int64)v25, v26, v14, (const char *)v77, 0);
      throw (Spectre::Engine::EngineException *)v78;
    }
    Microsoft::WRL::ComPtr<ID3D11Resource>::operator=<ID3D11Texture3D>(&v55, a1 + 21);
    Microsoft::WRL::ComPtr<ID3D11Resource>::operator=<ID3D11Texture3D>(&v56, (__int64 *)&v50);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v50);
    v27 = a1 + 22;
  }
  else
  {
    v27 = a1 + 22;
    v28 = a1[22];
    if ( !v28 )
    {
      std::string::string(&v69, (__int64)"TextureD3D11::GetDeviceBuffer - No valid D3D11 texture interface pointer");
      v48 = std::string::string(
              v65,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      Spectre::Engine::EngineException::EngineException(v78, (__int64)v48, v49, (const char *)&v69, 0);
      throw (Spectre::Engine::EngineException *)v78;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 80LL))(v28, &pExceptionObject);
    v74 = 3LL;
    v75 = 0x20000LL;
    v50 = 0LL;
    v29 = v57;
    v30 = *(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int128 **))(*(_QWORD *)v57 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v50);
    v31 = v30(v29, &pExceptionObject, 0LL, &v50);
    v32 = v31;
    Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v10, v31);
    if ( (v32 & 0x80000000) != 0LL )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v32;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    Microsoft::WRL::ComPtr<ID3D11Resource>::operator=<ID3D11Texture3D>(&v55, a1 + 22);
    Microsoft::WRL::ComPtr<ID3D11Resource>::operator=<ID3D11Texture3D>(&v56, (__int64 *)&v50);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v50);
  }
  v33 = (__int64)v53;
  v34 = v55;
  v35 = v56;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v53 + 376LL))(v53, v56, v55);
  *(_OWORD *)Src = 0LL;
  LODWORD(v52) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v33 + 112LL))(
                   v33,
                   v35,
                   0LL,
                   1LL,
                   0,
                   Src);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v10, (int)v52);
  v36 = (int)v52;
  if ( (int)v52 < 0 )
  {
    memset_0(&v64, 0, sizeof(v64));
    v64.ExceptionCode = -532265403;
    v64.ExceptionAddress = retaddr;
    v64.NumberParameters = 1;
    v64.ExceptionInformation[0] = v36;
    RaiseFailFastException(&v64, 0LL, 0);
  }
  Format = Spectre::Engine::DeviceTexture::GetFormat((__int64)a1);
  LODWORD(v54) = Spectre::Engine::GetFormatPitch(Format);
  LODWORD(v50) = Src[1];
  LODWORD(v52) = Src[1];
  if ( *v27 )
  {
    FormatSlicePitch_0 = HIDWORD(Src[1]);
  }
  else
  {
    Spectre::Engine::DeviceTexture::GetHeight((Spectre::Engine::DeviceTexture *)a1);
    Spectre::Engine::DeviceTexture::GetWidth((Spectre::Engine::DeviceTexture *)a1);
    v39 = Spectre::Engine::DeviceTexture::GetFormat((__int64)a1);
    FormatSlicePitch_0 = Spectre::Engine::GetFormatSlicePitch_0(v39, v40, v41, &v52);
  }
  v42 = *((_DWORD *)v51 + 2) * FormatSlicePitch_0;
  std::make_unique<unsigned char [0],0>(&v51, v42);
  v44 = Src[0];
  v45 = v51;
  if ( v42 )
  {
    if ( v51 )
    {
      if ( Src[0] )
      {
        memcpy_0(v51, Src[0], (unsigned int)v42);
        goto LABEL_33;
      }
      memset_0(v51, 0, (unsigned int)v42);
    }
    *(_DWORD *)_o__errno(v43, v44) = 22;
    invalid_parameter_noinfo();
  }
LABEL_33:
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v33 + 120LL))(v33, v35, 0LL);
  v62 = &v52;
  v51 = 0LL;
  v52 = v45;
  v65[0] = 0LL;
  v65[1] = (void *)v42;
  v66 = (int)v54;
  v67 = (int)v50;
  v68 = FormatSlicePitch_0;
  v77[0] = v65;
  v77[1] = &v69;
  v69 = 0LL;
  v70 = 0LL;
  v50 = &v69;
  v54 = v65;
  v46 = std::initializer_list<Spectre::Engine::TextureImageDesc>::size(v77);
  std::vector<Spectre::Engine::TextureImageDesc>::_Construct_n<Spectre::Engine::TextureImageDesc const *,Spectre::Engine::TextureImageDesc const *>(
    &v69,
    v46,
    (_OWORD **)&v54,
    &v50);
  Spectre::Engine::TextureImageSet::TextureImageSet(a2, (__int64 *)&v69, &v52, v42);
  std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(&v51);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v53);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v57);
  if ( v61 )
    std::_Ref_count_base::_Decref(v61);
  return a2;
}
