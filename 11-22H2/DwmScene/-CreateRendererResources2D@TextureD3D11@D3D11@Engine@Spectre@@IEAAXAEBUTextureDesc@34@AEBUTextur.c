/*
 * XREFs of ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218
 * Callers:
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@UEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD130 (-Create@TextureD3D11@D3D11@Engine@Spectre@@UEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18001DDE0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x18001FC04 (--$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@_ea_18001FC04.c)
 *     ?SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@@Z @ 0x180029730 (-SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@.c)
 *     ?_Tidy@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@AEAAXXZ @ 0x18002A47C (-_Tidy@-$vector@U-$pair@PEBVMutex@Engine@Spectre@@_N@std@@V-$allocator@U-$pair@PEBVMutex@Engine@.c)
 *     ??$pow@HI$0A@@@YANHI@Z @ 0x1800551CC (--$pow@HI$0A@@@YANHI@Z.c)
 *     ??1?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800556B4 (--1-$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U-$default_delete@UDeviceTextureDesc@Engine@S.c)
 *     Spectre::Engine::GetFormatRowPitch @ 0x1800566E4 (Spectre--Engine--GetFormatRowPitch.c)
 *     ?GetImageDescriptor@TextureImageSetView@Engine@Spectre@@QEBAPEBUTextureImageDesc@23@UTextureImageIndex@23@@Z @ 0x1800567E8 (-GetImageDescriptor@TextureImageSetView@Engine@Spectre@@QEBAPEBUTextureImageDesc@23@UTextureImag.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HJAEBV34@_N@Z @ 0x18006ED68 (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$a_ea_18006ED68.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??4?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CB668 (--4-$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$?4U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CC148 (--$-4U-$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@$0A@@-$unique_ptr@UDeviceTexture.c)
 *     ??$_Emplace_reallocate@AEBUD3D11_SUBRESOURCE_DATA@@@?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@std@@QEAAPEAUD3D11_SUBRESOURCE_DATA@@QEAU2@AEBU2@@Z @ 0x1800CC544 (--$_Emplace_reallocate@AEBUD3D11_SUBRESOURCE_DATA@@@-$vector@UD3D11_SUBRESOURCE_DATA@@V-$allocat.c)
 *     ??$_Integral_to_string@DJ@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@J@Z @ 0x1800CC650 (--$_Integral_to_string@DJ@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@J@.c)
 *     ??$make_unique@UDeviceTextureDesc@Engine@Spectre@@AEBUTextureDesc@23@AEAIAEAI$0A@@std@@YA?AV?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@0@AEBUTextureDesc@Engine@Spectre@@AEAI1@Z @ 0x1800CC734 (--$make_unique@UDeviceTextureDesc@Engine@Spectre@@AEBUTextureDesc@23@AEAIAEAI$0A@@std@@YA-AV-$un.c)
 *     _anonymous_namespace_::ApplyCreationOptions2D @ 0x1800CCE7C (_anonymous_namespace_--ApplyCreationOptions2D.c)
 *     ?CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture2D@@II@Z @ 0x1800CDBD8 (-CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 *     Spectre::Engine::GetFormatSlicePitch_0 @ 0x1800CEB78 (Spectre--Engine--GetFormatSlicePitch_0.c)
 *     ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUD3D11_TEXTURE2D_DESC@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF074 (-ToString@ExceptionDetails@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AE.c)
 *     ?_Reallocate_exactly@?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@std@@AEAAX_K@Z @ 0x1800CF46C (-_Reallocate_exactly@-$vector@UD3D11_SUBRESOURCE_DATA@@V-$allocator@UD3D11_SUBRESOURCE_DATA@@@st.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Spectre::Engine::D3D11::TextureD3D11::CreateRendererResources2D(
        Spectre::Engine::D3D11::TextureD3D11 *this,
        const struct Spectre::Engine::TextureDesc *a2,
        const struct Spectre::Engine::TextureImageSetView *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // r15d
  _OWORD *v10; // rsi
  unsigned int i; // ebx
  __int64 v12; // rcx
  __int64 ImageDescriptor; // r10
  __int64 v14; // rax
  int FormatSlicePitch_0; // eax
  unsigned int v16; // eax
  unsigned int v17; // r12d
  _QWORD *v18; // rax
  std::_Ref_count_base *v19; // r10
  __int64 v20; // rcx
  std::_Ref_count_base *v21; // rcx
  unsigned int v22; // r11d
  _QWORD *v23; // rax
  __int64 v24; // r8
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r8
  _OWORD *v28; // r12
  __int64 j; // rcx
  __int64 v30; // rdx
  _QWORD *Device; // rax
  __int64 v32; // rdi
  __int64 (__fastcall *v33)(__int64, __int128 *, _OWORD *, __int64 *); // rbx
  int v34; // edi
  void **v35; // rax
  void **v36; // rax
  void **v37; // rax
  void **v38; // rbx
  _QWORD *v39; // rax
  unsigned __int64 v40; // r8
  void **v41; // rax
  void **v42; // rbx
  _QWORD *v43; // rdx
  std::_Ref_count_base **v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // r8
  __int64 *ResourceView2D; // rax
  void ***v48; // rax
  __int64 v49; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v51; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD *v52; // [rsp+50h] [rbp-B0h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v53; // [rsp+58h] [rbp-A8h] BYREF
  std::_Ref_count_base *v54; // [rsp+60h] [rbp-A0h]
  __int128 v55; // [rsp+68h] [rbp-98h] BYREF
  __int128 v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+90h] [rbp-70h]
  std::_Ref_count_base *Src[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+B0h] [rbp-50h]
  _QWORD v61[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v63[7]; // [rsp+110h] [rbp+10h] BYREF

  v51 = 0LL;
  v52 = 0LL;
  if ( (*((_BYTE *)a2 + 20) & 1) != 0 && *((_DWORD *)a2 + 4) == 17 )
  {
    std::string::string(
      Src,
      (__int64)"Unsupported texture options: Format::UInt8_RGBA cannot be used with BindToShader");
    v6 = std::string::string(
           v61,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v6, v7, (const char *)Src, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v8 = anonymous_namespace_::ApplyCreationOptions2D((__int64)pExceptionObject, a2, *((_DWORD *)a3 + 12));
  v55 = *(_OWORD *)v8;
  v56 = *(_OWORD *)(v8 + 16);
  v57 = *(_QWORD *)(v8 + 32);
  v58 = *(_DWORD *)(v8 + 40);
  if ( *((_QWORD *)a3 + 1) )
  {
    if ( DWORD2(v55) * HIDWORD(v55) )
      std::vector<D3D11_SUBRESOURCE_DATA>::_Reallocate_exactly(&v51, (unsigned int)(DWORD2(v55) * HIDWORD(v55)));
    v9 = 0;
    v10 = (_OWORD *)*((_QWORD *)&v51 + 1);
    while ( v9 < HIDWORD(v55) )
    {
      for ( i = 0; i < DWORD2(v55); ++i )
      {
        v53 = (Spectre::Engine::D3D11::RenderDeviceD3D11 *)__PAIR64__(i, v9);
        ImageDescriptor = Spectre::Engine::TextureImageSetView::GetImageDescriptor((__int64)a3, __SPAIR64__(i, v9));
        if ( ImageDescriptor )
        {
          v14 = *((_QWORD *)a3 + 1);
          if ( v14 )
            Src[0] = (std::_Ref_count_base *)(v14 + *(_QWORD *)ImageDescriptor);
          else
            Src[0] = 0LL;
          LODWORD(Src[1]) = *(_DWORD *)(ImageDescriptor + 20);
          FormatSlicePitch_0 = *(_DWORD *)(ImageDescriptor + 24);
        }
        else
        {
          if ( !i )
          {
            std::string::string(Src, (__int64)"Error, there is no top-level image available");
            v23 = std::string::string(
                    v61,
                    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
            Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v23, v24, (const char *)Src, 0);
            throw (Spectre::Engine::EngineException *)pExceptionObject;
          }
          v16 = (int)((double)*((int *)a2 + 1) / pow<int,unsigned int,0>(v12, i));
          v17 = 1;
          if ( v16 > 1 )
            v17 = v16;
          v49 = v9;
          v18 = (_QWORD *)Spectre::Engine::TextureImageSetView::GetImageDescriptor((__int64)a3, v9);
          if ( v18 && (v20 = *((_QWORD *)a3 + 1)) != 0 )
            v21 = (std::_Ref_count_base *)(*v18 + v20);
          else
            v21 = v19;
          Src[0] = v21;
          LODWORD(Src[1]) = Spectre::Engine::GetFormatRowPitch(*((_DWORD *)a2 + 4));
          FormatSlicePitch_0 = Spectre::Engine::GetFormatSlicePitch_0(*((unsigned int *)a2 + 4), v22, v17, 0LL);
        }
        HIDWORD(Src[1]) = FormatSlicePitch_0;
        if ( v10 == v52 )
        {
          std::vector<D3D11_SUBRESOURCE_DATA>::_Emplace_reallocate<D3D11_SUBRESOURCE_DATA const &>(
            (__int64 *)&v51,
            (__int64)v10,
            Src);
          v10 = (_OWORD *)*((_QWORD *)&v51 + 1);
        }
        else
        {
          *v10++ = *(_OWORD *)Src;
          *((_QWORD *)&v51 + 1) = v10;
        }
      }
      ++v9;
    }
  }
  else
  {
    v10 = (_OWORD *)*((_QWORD *)&v51 + 1);
  }
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 72, Src);
  std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v53, (__int64 *)Src);
  if ( Src[1] )
    std::_Ref_count_base::_Decref(Src[1]);
  v25 = v53;
  if ( (*((_BYTE *)a2 + 20) & 0x40) != 0 )
  {
    (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderDeviceD3D11 *, char *, char *))(*(_QWORD *)v53 + 80LL))(
      v53,
      (char *)&v56 + 4,
      (char *)&v56 + 8);
    v26 = DWORD1(v56);
  }
  else
  {
    v26 = 1LL;
    *(_QWORD *)((char *)&v56 + 4) = 1LL;
  }
  v27 = 0LL;
  v28 = (_OWORD *)v51;
  for ( j = v51; (_OWORD *)j != v10; j += 16LL )
    v27 += *(unsigned int *)(j + 12);
  v30 = v27 * v26;
  *((_QWORD *)this + 25) = v30;
  Spectre::Engine::RendererResource::SetMemoryTrackingData((__int64)this, v30, (*((_DWORD *)a2 + 5) & 6) != 0 ? 3 : 11);
  v50 = 0LL;
  Device = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v25, &v49);
  v32 = *Device;
  v33 = *(__int64 (__fastcall **)(__int64, __int128 *, _OWORD *, __int64 *))(*(_QWORD *)*Device + 40LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
  if ( v28 == v10 )
    v28 = 0LL;
  v34 = v33(v32, &v55, v28, &v50);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v25, v34);
  if ( v34 < 0 )
  {
    std::string::string(Src, (__int64)"THROW_IF_FAILED_DETAILED. ");
    v35 = std::string::append((void **)Src, " File=", 6uLL);
    std::string::append(
      v35,
      "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
      0x5CuLL);
    v36 = std::string::append((void **)Src, " Line=", 6uLL);
    std::string::append(v36, "626", 3uLL);
    v37 = std::string::append((void **)Src, " Message=", 9uLL);
    std::string::append(v37, "\"TextureD3D11::CreateRendererResources2D(): unable to create texture(2D)\"", 0x49uLL);
    v38 = std::string::append((void **)Src, " Details=\"", 0xAuLL);
    v39 = (_QWORD *)ExceptionDetails::ToString(v61, &v55, &v51);
    v40 = v39[2];
    if ( v39[3] >= 0x10uLL )
      v39 = (_QWORD *)*v39;
    v41 = std::string::append(v38, v39, v40);
    std::string::append(v41, "\"", 1uLL);
    std::string::_Tidy_deallocate((__int64)v61);
    v42 = std::string::append((void **)Src, " HRESULT=", 9uLL);
    std::_Integral_to_string<char,long>((__int64)v61, v34);
    v43 = v61;
    if ( v61[3] >= 0x10uLL )
      v43 = (_QWORD *)v61[0];
    std::string::append(v42, v43, v61[2]);
    std::string::_Tidy_deallocate((__int64)v61);
    v44 = Src;
    if ( v60 >= 0x10 )
      v44 = (std::_Ref_count_base **)Src[0];
    std::string::string(pExceptionObject, (__int64)v44);
    v45 = std::string::string(
            v61,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    Spectre::Engine::EngineException::EngineException(v63, (__int64)v45, v46, v34, (const char *)pExceptionObject, 0);
    throw (Spectre::Engine::EngineException *)v63;
  }
  ResourceView2D = (__int64 *)Spectre::Engine::D3D11::TextureD3D11::CreateResourceView2D(
                                (_DWORD)this,
                                (unsigned int)&v49,
                                v50,
                                *((_DWORD *)a2 + 5),
                                DWORD2(v55));
  Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=((__int64 *)this + 20, ResourceView2D);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
  Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=((__int64 *)this + 21, &v50);
  v48 = (void ***)std::make_unique<Spectre::Engine::DeviceTextureDesc,Spectre::Engine::TextureDesc const &,unsigned int &,unsigned int &,0>(
                    &v49,
                    (__int64)a2,
                    (int *)&v55 + 2,
                    (int *)&v56 + 1);
  std::unique_ptr<Spectre::Engine::DeviceTextureDesc>::operator=<std::default_delete<Spectre::Engine::DeviceTextureDesc>,0>(
    (void ***)this + 14,
    v48);
  std::unique_ptr<Spectre::Engine::DeviceTextureDesc>::~unique_ptr<Spectre::Engine::DeviceTextureDesc>(&v49);
  *((_BYTE *)this + 208) = (*((_DWORD *)a2 + 5) & 0x20) != 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
  if ( v54 )
    std::_Ref_count_base::_Decref(v54);
  std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Tidy((__int64)&v51);
}
