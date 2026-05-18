/*
 * XREFs of ??$make_shared@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@AEAUOutputDescription@34@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@7@@std@@YA?AV?$shared_ptr@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@@0@AEAUOutputDescription@Engine@Spectre@@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@@Z @ 0x1800C3ABC
 * Callers:
 *     ??$CreateOutput@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@@std@@UOutputDescription@12@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@@Z @ 0x1800C3040 (--$CreateOutput@VRenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@V-$shared_ptr@VRenderDevice@E.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0RenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@QEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8C74 (--0RenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@QEAA@UOutputDescription@23@V-$shared_ptr@VR.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow,Spectre::Engine::OutputDescription &,std::shared_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Utils::PerformanceLogger> &>(
        _QWORD *a1,
        _OWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  std::_Ref_count_base *v16; // rcx
  _QWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+40h] [rbp-48h] BYREF
  _OWORD v20[2]; // [rsp+50h] [rbp-38h] BYREF

  v8 = operator new(0x6B0uLL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow>::`vftable';
    v10 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v19,
            a4);
    v18[0] = *a3;
    v18[1] = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v20[0] = *a2;
    v20[1] = a2[1];
    Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow::RenderOutputD3D11CoreWindow(v9 + 4, v20, v18, v10);
  }
  else
  {
    v9 = 0LL;
  }
  v11 = v9 + 4;
  *a1 = v9 + 4;
  a1[1] = v9;
  if ( v9 != (_DWORD *)-16LL )
  {
    v12 = *((_QWORD *)v9 + 11);
    if ( !v12 || !*(_DWORD *)(v12 + 8) )
    {
      if ( v9 )
        _InterlockedIncrement(v9 + 2);
      v13 = (volatile signed __int32 *)a1[1];
      v14 = 0LL;
      v15 = 0LL;
      if ( v13 )
      {
        v14 = v11;
        v15 = a1[1];
        _InterlockedIncrement(v13 + 3);
      }
      *((_QWORD *)v11 + 8) = v14;
      v16 = (std::_Ref_count_base *)*((_QWORD *)v11 + 9);
      *((_QWORD *)v11 + 9) = v15;
      if ( v16 )
        std::_Ref_count_base::_Decwref(v16);
      if ( v13 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
    }
  }
  return a1;
}
