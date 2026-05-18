/*
 * XREFs of ??0RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@QEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8D28
 * Callers:
 *     ??$make_shared@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@AEAUOutputDescription@34@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@7@@std@@YA?AV?$shared_ptr@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@@0@AEAUOutputDescription@Engine@Spectre@@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@AEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@0@@Z @ 0x1800C3BEC (--$make_shared@VRenderOutputD3D11Gdi@D3D11@Engine@Spectre@@AEAUOutputDescription@34@V-$shared_pt.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0RenderOutputD3D11@D3D11@Engine@Spectre@@IEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8B40 (--0RenderOutputD3D11@D3D11@Engine@Spectre@@IEAA@UOutputDescription@23@V-$shared_ptr@VRenderDevic.c)
 */

_QWORD *__fastcall Spectre::Engine::D3D11::RenderOutputD3D11Gdi::RenderOutputD3D11Gdi(
        _QWORD *a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  __int64 v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF

  v10[0] = *a4;
  v10[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v11[0] = *a3;
  v11[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v12[0] = *a2;
  v12[1] = a2[1];
  Spectre::Engine::D3D11::RenderOutputD3D11::RenderOutputD3D11((__int64)a1, (__int64)v12, v11, v10);
  *a1 = &Spectre::Engine::D3D11::RenderOutputD3D11Gdi::`vftable';
  a1[212] = 0LL;
  a1[213] = 0LL;
  a1[214] = 0LL;
  a1[215] = 0LL;
  v7 = (std::_Ref_count_base *)a3[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = (std::_Ref_count_base *)a4[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a1;
}
