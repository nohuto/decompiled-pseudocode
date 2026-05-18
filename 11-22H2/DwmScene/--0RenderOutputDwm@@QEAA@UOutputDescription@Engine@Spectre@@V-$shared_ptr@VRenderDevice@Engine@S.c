/*
 * XREFs of ??0RenderOutputDwm@@QEAA@UOutputDescription@Engine@Spectre@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@5@IIIM@Z @ 0x180010E24
 * Callers:
 *     ??$_Construct_in_place@VRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@AEBKAEBKAEBKAEBM@std@@YAXAEAVRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@AEBK44AEBM@Z @ 0x180016CC8 (--$_Construct_in_place@VRenderOutputDwm@@AEAUOutputDescription@Engine@Spectre@@AEBV-$shared_ptr@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Clamp@Math@Utils@Spectre@@YAMMMM@Z @ 0x18001112C (-Clamp@Math@Utils@Spectre@@YAMMMM@Z.c)
 *     ??0RenderOutputD3D11@D3D11@Engine@Spectre@@IEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8B40 (--0RenderOutputD3D11@D3D11@Engine@Spectre@@IEAA@UOutputDescription@23@V-$shared_ptr@VRenderDevic.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RenderOutputDwm::RenderOutputDwm(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        int a5,
        int a6,
        unsigned int a7)
{
  float v7; // xmm3_4
  int v11; // ebx
  Spectre::Utils::Math *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v14; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v18[2]; // [rsp+40h] [rbp-20h] BYREF

  v11 = a7;
  v16[0] = *a4;
  v16[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v17[0] = *a3;
  v17[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v18[0] = *a2;
  v18[1] = a2[1];
  ((void (__fastcall *)(__int64, _OWORD *, _QWORD *, _QWORD *))Spectre::Engine::D3D11::RenderOutputD3D11::RenderOutputD3D11)(
    a1,
    v18,
    v17,
    v16);
  *(_QWORD *)a1 = &RenderOutputDwm::`vftable';
  *(_QWORD *)(a1 + 1696) = 0LL;
  *(_DWORD *)(a1 + 1704) = a5;
  *(_DWORD *)(a1 + 1708) = a6;
  if ( a7 <= 1 )
    v11 = 1;
  *(_DWORD *)(a1 + 1712) = v11;
  *(float *)(a1 + 1716) = Spectre::Utils::Math::Clamp(v12, 0.0, 1.0, v7);
  v13 = (std::_Ref_count_base *)a3[1];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v14 = (std::_Ref_count_base *)a4[1];
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  return a1;
}
