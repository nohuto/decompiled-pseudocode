/*
 * XREFs of ?Create@CommandListD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVState@34@@Z @ 0x1800CFED0
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
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?Create@CommandList@Engine@Spectre@@UEAA_NAEBVState@23@@Z @ 0x1800391E0 (-Create@CommandList@Engine@Spectre@@UEAA_NAEBVState@23@@Z.c)
 *     ??$spectre_safe_pointer_cast@$$CBVCamera@Engine@Spectre@@VComponent@23@@Utils@Spectre@@YA?AV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@std@@V?$shared_ptr@VComponent@Engine@Spectre@@@3@@Z @ 0x180097888 (--$spectre_safe_pointer_cast@$$CBVCamera@Engine@Spectre@@VComponent@23@@Utils@Spectre@@YA-AV-$sh.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??$?8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11DepthStencilView@@@01@$$T@Z @ 0x1800CC1D8 (--$-8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11DepthStencilView@@@01@$$T@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall Spectre::Engine::D3D11::CommandListD3D11::Create(
        Spectre::Engine::D3D11::CommandListD3D11 *this,
        const struct Spectre::Engine::State *a2)
{
  struct ID3D11DeviceChild **v4; // rsi
  __int64 *v5; // rax
  __int64 *v6; // rbx
  char v7; // al
  __int64 *v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  void (__fastcall *v11)(__int64 *, char *); // rdi
  __int64 (__fastcall *v12)(__int64 *, _QWORD, char *); // rdi
  int v13; // ebx
  const char *Name; // rax
  _QWORD *v15; // r14
  __int64 *v16; // rcx
  struct ID3D11DeviceChild *v17; // rdi
  HRESULT (__stdcall *QueryInterface)(ID3D11DeviceChild *, const IID *const, void **); // rbx
  __int64 v19[2]; // [rsp+20h] [rbp-60h] BYREF
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v20; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v23; // [rsp+48h] [rbp-38h]
  _QWORD v24[4]; // [rsp+50h] [rbp-30h] BYREF

  if ( !Spectre::Engine::CommandList::Create(this, a2) )
  {
    Trace::LevelSettingsWrapper::Output(&gTraceLevelsCommandListD3D11, 3, "Failed to create CommandList object");
    return 0;
  }
  v4 = (struct ID3D11DeviceChild **)((char *)this + 144);
  if ( Microsoft::WRL::operator==<ID3D11DepthStencilView>((_QWORD *)this + 18) )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 72, &v22);
    v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v19,
           &v22);
    Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::Camera const,Spectre::Engine::Component>(&v20, v5);
    Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v20, v19);
    v6 = (__int64 *)v19[0];
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19[0] + 304LL))(v19[0]);
    v8 = (__int64 *)((char *)this + 144);
    v9 = (v7 & 1) == 0;
    v10 = *v6;
    if ( v9 )
    {
      v12 = *(__int64 (__fastcall **)(__int64 *, _QWORD, char *))(v10 + 352);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
      v13 = v12(v6, 0LL, (char *)this + 144);
      Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v20, v13);
      if ( v13 < 0 )
      {
        Trace::LevelSettingsWrapper::Output(
          &gTraceLevelsCommandListD3D11,
          3,
          "Failed to create DeferredContext with HRESULT error 0x%.8x",
          v13);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
        if ( v21 )
          std::_Ref_count_base::_Decref(v21);
        if ( v23 )
          std::_Ref_count_base::_Decref(v23);
        return 0;
      }
      Name = (const char *)Spectre::Engine::RendererResource::GetName((__int64)this, v24);
      if ( *((_QWORD *)Name + 3) >= 0x10uLL )
        Name = *(const char **)Name;
      D3D11_SetDebugName(*v4, Name);
      std::string::_Tidy_deallocate((__int64)v24);
    }
    else
    {
      v11 = *(void (__fastcall **)(__int64 *, char *))(v10 + 344);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
      v11(v6, (char *)this + 144);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
  }
  v15 = (_QWORD *)((char *)this + 152);
  if ( !Microsoft::WRL::operator==<ID3D11DepthStencilView>(v15) )
    return 1;
  v17 = *v4;
  QueryInterface = (*v4)->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
  return ((int (__fastcall *)(struct ID3D11DeviceChild *, GUID *, _QWORD *))QueryInterface)(
           v17,
           &GUID_b2daad8b_03d4_4dbf_95eb_32ab4b63d0ab,
           v15) >= 0;
}
