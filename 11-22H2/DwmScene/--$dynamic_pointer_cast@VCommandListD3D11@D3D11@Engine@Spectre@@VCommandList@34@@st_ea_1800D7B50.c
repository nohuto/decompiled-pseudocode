/*
 * XREFs of ??$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VCommandList@Engine@Spectre@@@0@@Z @ 0x1800D7B50
 * Callers:
 *     ?End@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z @ 0x1800D7E20 (-End@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@0.c)
 * Callees:
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

__int64 *__fastcall std::dynamic_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast_0(
         *a2,
         0LL,
         &Spectre::Engine::CommandList `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::CommandListD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    *a1 = v4;
    a1[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
