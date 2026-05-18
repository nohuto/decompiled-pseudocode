/*
 * XREFs of ??0RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAA@PEAV223@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x1800C40F4
 * Callers:
 *     ??$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015AE0 (--$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@V.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18001E6E8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518 (--0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@st.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180028FD4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?RegisterResources@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C6B70 (-RegisterResources@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=11
Spectre::Engine::D3D11::RenderDeviceD3D11 *__fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::RenderDeviceD3D11(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 size_of; // rax
  _QWORD *v6; // rax
  unsigned __int64 v7; // rax
  _QWORD *v8; // rax
  int ID; // eax
  std::_Ref_count_base *v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v12[0] = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  Spectre::Engine::RenderDevice::RenderDevice(this, a2, v12);
  *(_QWORD *)this = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  *((_QWORD *)this + 517) = 0LL;
  *((_QWORD *)this + 518) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *((_QWORD *)this + 517) = v6;
  *((_QWORD *)this + 519) = 0LL;
  *((_QWORD *)this + 520) = 0LL;
  v7 = std::_Get_size_of_n<40>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  *((_QWORD *)this + 519) = v8;
  _Mtx_init_in_situ((Spectre::Engine::D3D11::RenderDeviceD3D11 *)((char *)this + 4168), 2);
  *((_QWORD *)this + 531) = 6LL;
  *((_QWORD *)this + 532) = 0LL;
  *((_QWORD *)this + 533) = 0LL;
  *((_QWORD *)this + 534) = 0LL;
  *((_QWORD *)this + 535) = 0LL;
  *((_QWORD *)this + 575) = 0LL;
  *((_QWORD *)this + 577) = 0LL;
  *((_QWORD *)this + 578) = 7LL;
  *((_WORD *)this + 2300) = 0;
  *((_QWORD *)this + 580) = 0LL;
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_RendererD3D11,
    3,
    "-------------------------------------------------");
  ID = Spectre::Engine::RenderDevice::GetID((__int64)this);
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_RendererD3D11,
    3,
    "RenderDeviceD3D11 constructor -- RenderDeviceID=%d",
    ID);
  std::wstring::assign((char *)this + 112, L"RenderDeviceD3D11", 0x11uLL);
  std::wstring::assign((char *)this + 80, L"<detached>", 0xAuLL);
  *((_QWORD *)this + 536) = 0LL;
  Spectre::Engine::D3D11::RenderDeviceD3D11::RegisterResources(this);
  v10 = (std::_Ref_count_base *)a3[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return this;
}
