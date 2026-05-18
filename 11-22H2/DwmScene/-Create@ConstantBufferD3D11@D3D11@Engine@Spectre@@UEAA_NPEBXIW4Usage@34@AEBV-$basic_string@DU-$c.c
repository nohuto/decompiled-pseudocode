/*
 * XREFs of ?Create@ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA_NPEBXIW4Usage@34@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800D7170
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x18001FC04 (--$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@_ea_18001FC04.c)
 *     ?SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@@Z @ 0x180029730 (-SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@.c)
 *     ?Create@DeviceConstantBuffer@Engine@Spectre@@UEAA_NPEBXIW4Usage@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009BC90 (-Create@DeviceConstantBuffer@Engine@Spectre@@UEAA_NPEBXIW4Usage@23@AEBV-$basic_string@DU-$char_t.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Spectre::Engine::D3D11::ConstantBufferD3D11::Create(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char *String)
{
  __int64 v6; // rdi
  const char *v9; // rsi
  char result; // al
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, int *, __int64 *, __int64, char *); // rdi
  int v15; // r15d
  bool v16; // zf
  __int64 v17; // rbx
  void (__fastcall *v18)(__int64, const GUID *, _QWORD, const char *); // rdi
  unsigned int v19; // eax
  bool v20; // bl
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v22; // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  int v24; // [rsp+48h] [rbp-38h]
  int v25; // [rsp+4Ch] [rbp-34h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v26; // [rsp+50h] [rbp-30h] BYREF
  std::_Ref_count_base *v27; // [rsp+58h] [rbp-28h]
  int v28; // [rsp+60h] [rbp-20h] BYREF
  int v29; // [rsp+64h] [rbp-1Ch]
  int v30; // [rsp+68h] [rbp-18h]
  int v31; // [rsp+6Ch] [rbp-14h]
  int v32; // [rsp+70h] [rbp-10h]
  int v33; // [rsp+74h] [rbp-Ch]

  v6 = a3;
  v9 = String;
  result = Spectre::Engine::DeviceConstantBuffer::Create(a1, a2, a3);
  if ( !result )
    return result;
  v31 = 0;
  if ( !a4 )
    goto LABEL_9;
  v11 = a4 - 1;
  if ( !v11 )
  {
    v29 = 1;
    goto LABEL_11;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v29 = 2;
LABEL_10:
    v31 = 0x10000;
    goto LABEL_11;
  }
  if ( v12 != 1 )
  {
LABEL_9:
    v29 = 0;
    goto LABEL_10;
  }
  v29 = 3;
  v31 = 196608;
LABEL_11:
  v30 = 4;
  v28 = v6;
  v32 = 0;
  v33 = 0;
  Spectre::Engine::RendererResource::SetMemoryTrackingData(a1, v6, 7);
  v23 = a2;
  v24 = 0;
  v25 = 0;
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v21);
  std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v26, &v21);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v26, &v21);
  v13 = v21;
  v14 = *(__int64 (__fastcall **)(__int64, int *, __int64 *, __int64, char *))(*(_QWORD *)v21 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 120));
  v15 = v14(v13, &v28, &v23, a1 + 120, String);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v26, v15);
  v16 = v15 == 0;
  if ( v15 >= 0 )
  {
    if ( *((_QWORD *)String + 3) >= 0x10uLL )
      v9 = *(const char **)String;
    v17 = *(_QWORD *)(a1 + 120);
    if ( v17 )
    {
      v18 = *(void (__fastcall **)(__int64, const GUID *, _QWORD, const char *))(*(_QWORD *)v17 + 40LL);
      if ( v9 )
        v19 = strnlen(v9, 0x7FFFFFFFuLL);
      else
        v19 = 0;
      v18(v17, &WKPDID_D3DDebugObjectName, v19, v9);
    }
    v16 = v15 == 0;
  }
  v20 = v16;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  return v20;
}
