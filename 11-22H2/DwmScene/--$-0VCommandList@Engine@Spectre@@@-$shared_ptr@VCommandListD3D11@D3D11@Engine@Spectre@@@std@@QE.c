/*
 * XREFs of ??$?0VCommandList@Engine@Spectre@@@?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@1@PEAVCommandListD3D11@D3D11@Engine@Spectre@@@Z @ 0x1800C1FD0
 * Callers:
 *     ??$static_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@0@@Z @ 0x1800C40D8 (--$static_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA-AV-$shar.c)
 *     ??$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@0@@Z @ 0x1800C8AB8 (--$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA-AV-$sha.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<Spectre::Engine::D3D11::CommandListD3D11>::shared_ptr<Spectre::Engine::D3D11::CommandListD3D11>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a1 = a3;
  a1[1] = *(_QWORD *)(a2 + 8);
  return a1;
}
