/*
 * XREFs of ?CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture2D@@II@Z @ 0x1800CDBD8
 * Callers:
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?EnsureResourceView@TextureD3D11@D3D11@Engine@Spectre@@IEAAXXZ @ 0x1800CE020 (-EnsureResourceView@TextureD3D11@D3D11@Engine@Spectre@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z @ 0x18001145C (-D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@YA?AV?$shared_ptr@VTextureD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@0@@Z @ 0x18001FC04 (--$static_pointer_cast@VTextureD3D11@D3D11@Engine@Spectre@@VDeviceTexture@34@@std@@_ea_18001FC04.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
struct ID3D11DeviceChild **__fastcall Spectre::Engine::D3D11::TextureD3D11::CreateResourceView2D(
        __int64 a1,
        struct ID3D11DeviceChild **a2,
        __int64 a3,
        __int16 a4,
        int a5)
{
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rbx
  struct ID3D11DeviceChildVtbl *lpVtbl; // rdi
  int v14; // eax
  ULONG_PTR v15; // rbx
  const char *Name; // rax
  struct ID3D11DeviceChild *v18; // [rsp+30h] [rbp-D0h] BYREF
  struct ID3D11DeviceChild **v19; // [rsp+38h] [rbp-C8h] BYREF
  std::_Ref_count_base *v20; // [rsp+40h] [rbp-C0h]
  unsigned int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h]
  int v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+54h] [rbp-ACh]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v26; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v27; // [rsp+70h] [rbp-90h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  char v29[16]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v30; // [rsp+130h] [rbp+30h]
  unsigned int v31; // [rsp+134h] [rbp+34h]
  _QWORD v32[4]; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v19 = a2;
  if ( (a4 & 1) != 0 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 80LL))(a3, v29);
    v9 = v30;
    if ( v30 == 44 )
    {
      v9 = (a4 & 0x400 | 0xB800u) >> 10;
    }
    else if ( v30 == 39 )
    {
      v9 = 41;
    }
    v21 = v9;
    v10 = 4;
    if ( v31 > 1 )
      v10 = 6;
    v23 = 0;
    v11 = -1;
    v22 = 9;
    if ( (a4 & 0x10) == 0 )
      v22 = v10;
    if ( a5 )
      v11 = a5;
    v24 = v11;
    v18 = 0LL;
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v19);
    std::static_pointer_cast<Spectre::Engine::D3D11::TextureD3D11,Spectre::Engine::DeviceTexture>(&v26, (__int64 *)&v19);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v26, &v19);
    v12 = (__int64)v19;
    lpVtbl = (*v19)[7].lpVtbl;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    v14 = ((__int64 (__fastcall *)(__int64, __int64, unsigned int *, struct ID3D11DeviceChild **))lpVtbl)(
            v12,
            a3,
            &v21,
            &v18);
    v15 = v14;
    Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v26, v14);
    if ( (v15 & 0x80000000) != 0LL )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v15;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    Name = (const char *)Spectre::Engine::RendererResource::GetName(a1, v32);
    if ( *((_QWORD *)Name + 3) >= 0x10uLL )
      Name = *(const char **)Name;
    D3D11_SetDebugName(v18, Name);
    std::string::_Tidy_deallocate((__int64)v32);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    *a2 = 0LL;
    if ( a2 != &v18 )
    {
      *a2 = v18;
      v18 = 0LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
