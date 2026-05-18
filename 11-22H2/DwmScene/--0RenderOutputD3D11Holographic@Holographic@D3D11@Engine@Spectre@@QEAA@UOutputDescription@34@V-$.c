/*
 * XREFs of ??0RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@QEAA@UOutputDescription@34@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@7@@Z @ 0x1800D8C34
 * Callers:
 *     ??$make_shared@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAUOutputDescription@45@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@8@@std@@YA?AV?$shared_ptr@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@@0@AEAUOutputDescription@Engine@Spectre@@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@@Z @ 0x1800C3D1C (--$make_shared@VRenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAUOutputDescrip.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@5@@Z @ 0x18002B424 (--0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V-$shared_ptr@VRenderDevice@Engine@Sp.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::RenderOutputD3D11Holographic(
        __int64 a1,
        _OWORD *a2,
        struct Spectre::Engine::RenderDevice **a3,
        __int64 *a4)
{
  _QWORD *v7; // rax
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  __int64 v11[2]; // [rsp+20h] [rbp-48h] BYREF
  struct Spectre::Engine::RenderDevice *v12[2]; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v11[0] = *a4;
  v11[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v12[0] = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v13[0] = *a2;
  v13[1] = a2[1];
  Spectre::Engine::RenderOutput::RenderOutput(a1, (__int64)v13, v12, v11);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::`vftable';
  *(_BYTE *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *(_QWORD *)(a1 + 552) = v7;
  v8 = a3[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v9 = (std::_Ref_count_base *)a4[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a1;
}
