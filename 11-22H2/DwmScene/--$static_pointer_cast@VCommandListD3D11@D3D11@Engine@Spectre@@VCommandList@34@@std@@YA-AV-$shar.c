/*
 * XREFs of ??$static_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@0@@Z @ 0x1800C40D8
 * Callers:
 *     ??$spectre_safe_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@Utils@Spectre@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@3@@Z @ 0x1800C40AC (--$spectre_safe_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@Utils@Spec.c)
 * Callees:
 *     ??$?0VCommandList@Engine@Spectre@@@?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@1@PEAVCommandListD3D11@D3D11@Engine@Spectre@@@Z @ 0x1800C1FD0 (--$-0VCommandList@Engine@Spectre@@@-$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@std@@QE.c)
 */

__int64 __fastcall std::static_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rcx

  std::shared_ptr<Spectre::Engine::D3D11::CommandListD3D11>::shared_ptr<Spectre::Engine::D3D11::CommandListD3D11>(
    a1,
    (__int64)a2,
    *a2);
  return v2;
}
