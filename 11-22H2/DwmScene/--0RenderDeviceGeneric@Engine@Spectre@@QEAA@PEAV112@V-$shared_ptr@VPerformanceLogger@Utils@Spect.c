/*
 * XREFs of ??0RenderDeviceGeneric@Engine@Spectre@@QEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x1800526F0
 * Callers:
 *     ??$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015C10 (--$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@VRend.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18001E6E8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518 (--0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@st.c)
 *     ?RegisterResources@RenderDeviceGeneric@Engine@Spectre@@UEAAXXZ @ 0x1800535E0 (-RegisterResources@RenderDeviceGeneric@Engine@Spectre@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
Spectre::Engine::RenderDeviceGeneric *__fastcall Spectre::Engine::RenderDeviceGeneric::RenderDeviceGeneric(
        Spectre::Engine::RenderDeviceGeneric *this,
        __int64 a2,
        _QWORD *a3)
{
  std::_Ref_count_base *v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = *a3;
  v7[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  Spectre::Engine::RenderDevice::RenderDevice(this, a2, v7);
  *(_QWORD *)this = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  *((_DWORD *)this + 61) = 0;
  std::wstring::assign((char *)this + 112, L"RenderDeviceGeneric", 0x13uLL);
  std::wstring::assign((char *)this + 80, L"Universal", 9uLL);
  Spectre::Engine::RenderDeviceGeneric::RegisterResources(this);
  v5 = (std::_Ref_count_base *)a3[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return this;
}
