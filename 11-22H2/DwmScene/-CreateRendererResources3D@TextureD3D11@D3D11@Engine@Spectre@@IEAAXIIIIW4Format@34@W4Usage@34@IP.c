/*
 * XREFs of ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C
 * Callers:
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@UEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD130 (-Create@TextureD3D11@D3D11@Engine@Spectre@@UEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x18001FC04 (--$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@_ea_18001FC04.c)
 *     ?SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@@Z @ 0x180029730 (-SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@.c)
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEAI00AEAW4Format@Engine@Spectre@@0AEAW4Usage@34@@Z @ 0x180054FF0 (--$make_unique@UTextureDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAIAEAW4Usage@23@$0A@@st.c)
 *     ??1?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556B4 (--1-$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U-$default_delete@UDeviceTextureDesc@Engine@S.c)
 *     ??1?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556D4 (--1-$unique_ptr@UTextureDesc@Engine@Spectre@@U-$default_delete@UTextureDesc@Engine@Spectre@@@std.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??4?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CB668 (--4-$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$?4U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CC148 (--$-4U-$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@$0A@@-$unique_ptr@UDeviceTexture.c)
 *     ??$make_unique@UDeviceTextureDesc@Engine@Spectre@@V?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@AEAIH$0A@@std@@YA?AV?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@0@$$QEAV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEAI$$QEAH@Z @ 0x1800CC7AC (--$make_unique@UDeviceTextureDesc@Engine@Spectre@@V-$unique_ptr@UTextureDesc@Engine@Spectre@@U-$.c)
 *     _anonymous_namespace_::ApplyCreationOptions3D @ 0x1800CCFA4 (_anonymous_namespace_--ApplyCreationOptions3D.c)
 *     ?CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture3D@@II@Z @ 0x1800CDE10 (-CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 *     Spectre::Engine::GetFormatSlicePitch_0 @ 0x1800CEB78 (Spectre--Engine--GetFormatSlicePitch_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Spectre::Engine::D3D11::TextureD3D11::CreateRendererResources3D(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        std::_Ref_count_base *a9)
{
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  std::_Ref_count_base *v14; // r12
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // eax
  int v20; // ecx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int128 *, unsigned __int64, __int64 *); // rdi
  int v23; // eax
  ULONG_PTR v24; // rbx
  void ***v25; // rax
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v29[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v34; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v35; // [rsp+88h] [rbp-78h] BYREF
  void *v36; // [rsp+90h] [rbp-70h] BYREF
  std::_Ref_count_base *v37; // [rsp+98h] [rbp-68h]
  __int128 v38; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+E0h] [rbp-20h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v43[5]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+1B8h] [rbp+B8h] BYREF
  void *retaddr; // [rsp+248h] [rbp+148h]

  LODWORD(v30) = a2;
  v12 = a8;
  v13 = a6;
  LODWORD(v31) = a2;
  v27 = a3;
  v35 = a4;
  v34 = a6;
  v32 = a7;
  v33 = a8;
  v14 = a9;
  if ( (a8 & 1) != 0 && a6 == 17 )
  {
    std::string::string(
      v43,
      (__int64)"Unsupported texture options: Format::UInt8_RGBA cannot be used with BindToShader");
    v15 = std::string::string(
            &v36,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v15, v16, (const char *)v43, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v17 = anonymous_namespace_::ApplyCreationOptions3D((__int64)v43, a3, a4, a6, a7, a8);
  v39 = *(_OWORD *)v17;
  v40 = *(_OWORD *)(v17 + 16);
  v18 = *(_DWORD *)(v17 + 32);
  v41 = v18;
  DWORD2(v39) = a5;
  if ( (v12 & 0x20) != 0 )
  {
    v19 = a4;
    if ( a3 >= a4 )
      v19 = a3;
    v20 = 0;
    while ( v19 > 1 )
    {
      v19 >>= 1;
      ++v20;
    }
    HIDWORD(v39) = v20 != -1;
    v41 = v18 | 1;
    DWORD2(v40) |= 0x20u;
    *(_BYTE *)(a1 + 208) = 1;
  }
  v29[0] = v14;
  LODWORD(v29[1]) = v30;
  HIDWORD(v29[1]) = Spectre::Engine::GetFormatSlicePitch_0(v13, a3, a4, &v31);
  if ( (v12 & 0x20) != 0 )
    *(_QWORD *)(a1 + 200) = 4LL * *(_QWORD *)(a1 + 200) / 3uLL;
  Spectre::Engine::RendererResource::SetMemoryTrackingData(a1, *(_QWORD *)(a1 + 200), (v12 & 6) != 0 ? 3 : 11);
  v38 = *(_OWORD *)v29;
  v28 = 0LL;
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v36);
  std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(v29, (__int64 *)&v36);
  if ( v37 )
    std::_Ref_count_base::_Decref(v37);
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v29[0], &v31);
  v21 = v31;
  v22 = *(__int64 (__fastcall **)(__int64, __int128 *, unsigned __int64, __int64 *))(*(_QWORD *)v31 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  v23 = v22(v21, &v39, (unsigned __int64)&v38 & -(__int64)(v14 != 0LL), &v28);
  v24 = v23;
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v29[0], v23);
  if ( (v24 & 0x80000000) != 0LL )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v24;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  if ( v29[1] )
    std::_Ref_count_base::_Decref(v29[1]);
  std::make_unique<Spectre::Engine::TextureDesc,unsigned int &,unsigned int &,unsigned int &,enum Spectre::Engine::Format &,unsigned int &,enum Spectre::Engine::Usage &,0>(
    (__int64 *)&v36,
    &v27,
    &v35,
    &a5,
    &v34,
    &v33,
    &v32);
  Spectre::Engine::D3D11::TextureD3D11::CreateResourceView3D(a1, (unsigned int)&v30, v28, v12, HIDWORD(v39));
  Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=((__int64 *)(a1 + 176), &v28);
  Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=((__int64 *)(a1 + 160), &v30);
  v27 = 1;
  v25 = (void ***)std::make_unique<Spectre::Engine::DeviceTextureDesc,std::unique_ptr<Spectre::Engine::TextureDesc>,unsigned int &,int,0>(
                    v29,
                    (__int64 *)&v36,
                    (int *)&v39 + 3,
                    (int *)&v27);
  std::unique_ptr<Spectre::Engine::DeviceTextureDesc>::operator=<std::default_delete<Spectre::Engine::DeviceTextureDesc>,0>(
    (void ***)(a1 + 112),
    v25);
  std::unique_ptr<Spectre::Engine::DeviceTextureDesc>::~unique_ptr<Spectre::Engine::DeviceTextureDesc>(v29);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
  std::unique_ptr<Spectre::Engine::TextureDesc>::~unique_ptr<Spectre::Engine::TextureDesc>(&v36);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
}
