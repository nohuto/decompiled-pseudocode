/*
 * XREFs of ?GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@II@Z @ 0x1800CEC40
 * Callers:
 *     ?SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@IIIIPEBXIIII@Z @ 0x1800D2A20 (-SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@En.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11ShaderResourceView@@@01@$$T@Z @ 0x18001070C (--$-9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11ShaderResourceView@@@01@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18001DDE0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x18001FC04 (--$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@_ea_18001FC04.c)
 *     ?_Tidy@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@AEAAXXZ @ 0x18002A47C (-_Tidy@-$vector@U-$pair@PEBVMutex@Engine@Spectre@@_N@std@@V-$allocator@U-$pair@PEBVMutex@Engine@.c)
 *     ?GetCreationFlags@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056630 (-GetCreationFlags@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetFormat@DeviceTexture@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x1800566C4 (-GetFormat@DeviceTexture@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HJAEBV34@_N@Z @ 0x18006ED68 (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$a_ea_18006ED68.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??$?8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11DepthStencilView@@@01@$$T@Z @ 0x1800CC1D8 (--$-8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11DepthStencilView@@@01@$$T@.c)
 *     ??$_Integral_to_string@DJ@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@J@Z @ 0x1800CC650 (--$_Integral_to_string@DJ@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@J@.c)
 *     ??4?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800CCA64 (--4-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     Spectre::Engine::D3D11::GetFormat @ 0x1800CE990 (Spectre--Engine--D3D11--GetFormat.c)
 *     ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUD3D11_TEXTURE2D_DESC@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF074 (-ToString@ExceptionDetails@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *__fastcall Spectre::Engine::D3D11::TextureD3D11::GetOrCreateCPUStagingTexture(
        __int64 *a1,
        __int64 *a2,
        int a3,
        int a4)
{
  int Format; // eax
  char v9; // dl
  int v10; // r15d
  __int64 *v11; // rsi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, int *, _QWORD, __int64 *); // rdi
  int v14; // edi
  void **v15; // rax
  void **v16; // rax
  void **v17; // rax
  void **v18; // rbx
  _QWORD *v19; // rax
  unsigned __int64 v20; // r8
  void **v21; // rax
  void **v22; // rbx
  std::_Ref_count_base **v23; // rdx
  void **v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29[2]; // [rsp+38h] [rbp-C8h] BYREF
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v30; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v31; // [rsp+50h] [rbp-B0h]
  std::_Ref_count_base *v32[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-98h]
  unsigned __int64 v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+78h] [rbp-88h] BYREF
  int v36; // [rsp+7Ch] [rbp-84h]
  int v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+84h] [rbp-7Ch]
  int v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h]
  int v41; // [rsp+90h] [rbp-70h]
  int v42; // [rsp+94h] [rbp-6Ch]
  int v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+9Ch] [rbp-64h]
  int v45; // [rsp+A0h] [rbp-60h]
  void *Src[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v47[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v48[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+108h] [rbp+8h] BYREF

  v29[0] = (__int64)a2;
  Spectre::Engine::DeviceTexture::GetCreationFlags((Spectre::Engine::DeviceTexture *)a1);
  Format = Spectre::Engine::DeviceTexture::GetFormat((__int64)a1);
  v10 = Spectre::Engine::D3D11::GetFormat(Format, v9);
  v11 = a1 + 23;
  if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>(a1 + 23) )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)*v11 + 80LL))(*v11, &v35);
    if ( v35 != a3 || v36 != a4 || v39 != v10 )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 23);
  }
  if ( Microsoft::WRL::operator==<ID3D11DepthStencilView>(a1 + 23) )
  {
    v45 = 0;
    v35 = a3;
    v36 = a4;
    v37 = 1;
    v42 = 2;
    v44 = 0x10000;
    v39 = v10;
    v40 = 1;
    v41 = 0;
    v38 = 1;
    v43 = 8;
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)(a1 + 9), v32);
    std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v30, (__int64 *)v32);
    if ( v32[1] )
      std::_Ref_count_base::_Decref(v32[1]);
    Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v30, v29);
    v28 = 0LL;
    v12 = v29[0];
    v13 = *(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v29[0] + 40LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    v14 = v13(v12, &v35, 0LL, &v28);
    Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v30, v14);
    if ( v14 < 0 )
    {
      std::string::string(Src, (__int64)"THROW_IF_FAILED_DETAILED. ");
      v15 = std::string::append(Src, " File=", 6uLL);
      std::string::append(
        v15,
        "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
        0x5CuLL);
      v16 = std::string::append(Src, " Line=", 6uLL);
      std::string::append(v16, "929", 3uLL);
      v17 = std::string::append(Src, " Message=", 9uLL);
      std::string::append(
        v17,
        "\"TextureD3D11::GetOrCreateCPUStagingTexture(): unable to create texture (2D)\"",
        0x4DuLL);
      v18 = std::string::append(Src, " Details=\"", 0xAuLL);
      *(_OWORD *)v32 = 0LL;
      v33 = 0LL;
      v19 = (_QWORD *)ExceptionDetails::ToString(v47, &v35, v32);
      v20 = v19[2];
      if ( v19[3] >= 0x10uLL )
        v19 = (_QWORD *)*v19;
      v21 = std::string::append(v18, v19, v20);
      std::string::append(v21, "\"", 1uLL);
      std::string::_Tidy_deallocate((__int64)v47);
      std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Tidy((__int64)v32);
      v22 = std::string::append(Src, " HRESULT=", 9uLL);
      std::_Integral_to_string<char,long>((__int64)v32, v14);
      v23 = v32;
      if ( v34 >= 0x10 )
        v23 = (std::_Ref_count_base **)v32[0];
      std::string::append(v22, v23, v33);
      std::string::_Tidy_deallocate((__int64)v32);
      v24 = Src;
      if ( Src[3] >= (void *)0x10 )
        v24 = (void **)Src[0];
      std::string::string(v48, (__int64)v24);
      v25 = std::string::string(
              v47,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v25, v26, v14, (const char *)v48, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    Microsoft::WRL::ComPtr<ID3D11Texture2D>::operator=(v11, &v28);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v29);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
  }
  *a2 = *v11;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(a2);
  return a2;
}
