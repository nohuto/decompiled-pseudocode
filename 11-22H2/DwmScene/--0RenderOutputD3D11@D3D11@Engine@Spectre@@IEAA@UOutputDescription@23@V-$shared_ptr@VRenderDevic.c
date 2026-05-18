/*
 * XREFs of ??0RenderOutputD3D11@D3D11@Engine@Spectre@@IEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8B40
 * Callers:
 *     ??0RenderOutputDwm@@QEAA@UOutputDescription@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@5@IIIM@Z @ 0x180010E24 (--0RenderOutputDwm@@QEAA@UOutputDescription@Engine@Spectre@@V-$shared_ptr@VRenderDevice@Engine@S.c)
 *     ??0RenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@QEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8C74 (--0RenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@QEAA@UOutputDescription@23@V-$shared_ptr@VR.c)
 *     ??0RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@QEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8D28 (--0RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@QEAA@UOutputDescription@23@V-$shared_ptr@VRenderDe.c)
 *     ??0RenderOutputD3D11Window@D3D11@Engine@Spectre@@QEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8DFC (--0RenderOutputD3D11Window@D3D11@Engine@Spectre@@QEAA@UOutputDescription@23@V-$shared_ptr@VRende.c)
 *     ??0RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@QEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8EB0 (--0RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@QEAA@UOutputDescription@23@V-$shared_ptr@VRenderD.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002945C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@5@@Z @ 0x18002B424 (--0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@QEAA@XZ @ 0x180030E6C (--0-$map@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@s.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::RenderOutputD3D11(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  struct Spectre::Engine::RenderDevice **v7; // rax
  _OWORD *v8; // r10
  _QWORD *v9; // rax
  std::_Ref_count_base *v10; // rcx
  std::_Ref_count_base *v11; // rcx
  __int64 v13[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF

  v13[0] = *a4;
  v13[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v7 = (struct Spectre::Engine::RenderDevice **)std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                                                  &v14,
                                                  a3);
  v15[0] = *v8;
  v15[1] = v8[1];
  Spectre::Engine::RenderOutput::RenderOutput(a1, (__int64)v15, v7, v13);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_DWORD *)(a1 + 512) = 0;
  `vector constructor iterator'(
    (char *)(a1 + 520),
    56LL,
    20LL,
    (void (__fastcall *)(char *))Spectre::Engine::D3D11::RenderOutputD3D11::PresentData::PresentData);
  *(_DWORD *)(a1 + 1640) = 0;
  *(_DWORD *)(a1 + 1644) = 0;
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  v9 = operator new(0x48uLL);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  *(_QWORD *)(a1 + 1648) = v9;
  std::map<unsigned int,_LARGE_INTEGER>::map<unsigned int,_LARGE_INTEGER>((_QWORD *)(a1 + 1664));
  std::map<unsigned int,_LARGE_INTEGER>::map<unsigned int,_LARGE_INTEGER>((_QWORD *)(a1 + 1680));
  v10 = (std::_Ref_count_base *)a3[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v11 = (std::_Ref_count_base *)a4[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return a1;
}
