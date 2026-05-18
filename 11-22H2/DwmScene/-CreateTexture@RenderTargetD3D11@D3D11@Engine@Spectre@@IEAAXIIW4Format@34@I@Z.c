/*
 * XREFs of ?CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z @ 0x1800CBF28
 * Callers:
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800CB930 (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180011BA0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@XZ @ 0x180015EE4 (--$CreateResource@VDeviceTexture@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_p.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x18001C600 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C600.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ??0TextureDesc@Engine@Spectre@@QEAA@IIW4Format@12@IW4Usage@12@@Z @ 0x180055388 (--0TextureDesc@Engine@Spectre@@QEAA@IIW4Format@12@IW4Usage@12@@Z.c)
 *     ?Create@DeviceTexture@Engine@Spectre@@QEAAXAEBUTextureDesc@23@@Z @ 0x180055CFC (-Create@DeviceTexture@Engine@Spectre@@QEAAXAEBUTextureDesc@23@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::D3D11::RenderTargetD3D11::CreateTexture(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v7; // r14d
  int v8; // r15d
  __int64 *v9; // rax
  Spectre::Engine::DeviceTexture **v10; // r12
  Spectre::Engine::DeviceTexture *v11; // rbx
  void **v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // [rsp+38h] [rbp-71h] BYREF
  std::_Ref_count_base *v17; // [rsp+40h] [rbp-69h]
  __int64 v18; // [rsp+58h] [rbp-51h] BYREF
  std::_Ref_count_base *v19; // [rsp+60h] [rbp-49h]
  _QWORD v20[4]; // [rsp+68h] [rbp-41h] BYREF
  _DWORD v21[8]; // [rsp+88h] [rbp-21h] BYREF
  void *v22[4]; // [rsp+A8h] [rbp-1h] BYREF

  v7 = 1;
  v8 = 1;
  if ( a2 )
    v8 = a2;
  if ( a3 )
    v7 = a3;
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v18);
  v9 = Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceTexture>(v18, &v16);
  v10 = (Spectre::Engine::DeviceTexture **)(a1 + 96);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 96), v9);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  Spectre::Engine::RendererResource::GetName(a1, v22);
  if ( std::string::empty((__int64)v22) )
    std::string::assign(v22, "RenderTargetD3D11", 0x11uLL);
  v11 = *v10;
  v12 = (void **)std::string::string(v20, (__int64)v22);
  Spectre::Engine::RendererResource::SetName((__int64)v11, v12);
  Spectre::Engine::TextureDesc::TextureDesc(v21, v8, v7, a4, a5 & 0xFFFFFF7C | 3, 0);
  Spectre::Engine::DeviceTexture::Create(*v10, (const struct Spectre::Engine::TextureDesc *)v21);
  if ( (a5 & 0x80u) != 0 )
  {
    if ( !*(_QWORD *)(a1 + 112) )
    {
      v13 = Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceTexture>(v18, &v16);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 112), v13);
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
    }
    v14 = *(_QWORD *)(a1 + 112);
    v15 = std::operator+<char>((char *)&v16, v22, " (staging)");
    Spectre::Engine::RendererResource::SetName(v14, (void **)v15);
    Spectre::Engine::TextureDesc::TextureDesc(v20, v8, v7, a4, a5 & 0xFFFFFF7C | 0x80, 3);
    Spectre::Engine::DeviceTexture::Create(
      *(Spectre::Engine::DeviceTexture **)(a1 + 112),
      (const struct Spectre::Engine::TextureDesc *)v20);
  }
  std::string::_Tidy_deallocate((__int64)v22);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
}
