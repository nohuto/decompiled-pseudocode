/*
 * XREFs of ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800CB930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z @ 0x18001145C (-D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectre@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceTexture@Engine@Spectre@@@3@@Z @ 0x180017600 (--$spectre_safe_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@Utils@Spectr.c)
 *     ?SetActiveSize@DeviceFrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x180028A34 (-SetActiveSize@DeviceFrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ??$spectre_safe_pointer_cast@$$CBVCamera@Engine@Spectre@@VComponent@23@@Utils@Spectre@@YA?AV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@std@@V?$shared_ptr@VComponent@Engine@Spectre@@@3@@Z @ 0x180097888 (--$spectre_safe_pointer_cast@$$CBVCamera@Engine@Spectre@@VComponent@23@@Utils@Spectre@@YA-AV-$sh.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA?AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z @ 0x1800C9E48 (-GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA-AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z.c)
 *     ?CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z @ 0x1800CBF28 (-CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z.c)
 *     ?GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CF048 (-GetTexture@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Spectre::Engine::D3D11::RenderTargetD3D11::Create(__int64 a1, int a2, int a3, int a4, char a5)
{
  int v7; // r15d
  int v8; // r12d
  __int64 *v9; // rax
  bool v10; // di
  int v11; // edx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, _DWORD *, __int64); // rdi
  int v14; // eax
  const char *Name; // rax
  __m128 v16; // xmm2
  __m128 v17; // xmm0
  __int64 v18; // [rsp+30h] [rbp-91h] BYREF
  __int64 v19; // [rsp+38h] [rbp-89h] BYREF
  __int64 v20[2]; // [rsp+40h] [rbp-81h] BYREF
  __int64 v21; // [rsp+50h] [rbp-71h] BYREF
  std::_Ref_count_base *v22; // [rsp+58h] [rbp-69h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v23; // [rsp+60h] [rbp-61h] BYREF
  std::_Ref_count_base *v24; // [rsp+68h] [rbp-59h]
  _DWORD v25[3]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v26; // [rsp+7Ch] [rbp-45h]
  __int64 v27; // [rsp+88h] [rbp-39h] BYREF
  std::_Ref_count_base *v28; // [rsp+90h] [rbp-31h]
  _QWORD v29[4]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v30[20]; // [rsp+B8h] [rbp-9h] BYREF
  unsigned int v31; // [rsp+CCh] [rbp+Bh]

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  Spectre::Engine::D3D11::RenderTargetD3D11::CreateTexture(a1, (unsigned int)v7, (unsigned int)v8);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v27);
  v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v21,
         &v27);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::Camera const,Spectre::Engine::Component>(&v23, v9);
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v23, &v18);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    v20,
    (_QWORD *)(a1 + 96));
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>((__int64)&v21);
  Spectre::Engine::D3D11::TextureD3D11::GetTexture(v21, v20);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20[0] + 80LL))(v20[0], v30);
  v10 = v31 > 1;
  v26 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v11 = 2;
  else
    v11 = (a5 & 8) != 0;
  v25[0] = Spectre::Engine::D3D11::D3DUtils::GetFormat(a4, v11);
  v25[1] = v10 ? 6 : 4;
  v25[2] = 0;
  Spectre::Engine::D3D11::TextureD3D11::GetTexture(v21, &v19);
  v12 = v18;
  v13 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)v18 + 72LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 128));
  v14 = v13(v12, v19, v25, a1 + 128);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v23, v14);
  Name = (const char *)Spectre::Engine::RendererResource::GetName(a1, v29);
  if ( *((_QWORD *)Name + 3) >= 0x10uLL )
    Name = *(const char **)Name;
  D3D11_SetDebugName(*(struct ID3D11DeviceChild **)(a1 + 128), Name);
  std::string::_Tidy_deallocate((__int64)v29);
  v16 = 0LL;
  v16.m128_f32[0] = (float)v8;
  v17 = 0LL;
  v17.m128_f32[0] = (float)v7;
  Spectre::Engine::DeviceFrameBuffer::SetActiveSize(a1, _mm_unpacklo_ps(v17, v16).m128_i64[0]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v20);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
}
