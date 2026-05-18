/*
 * XREFs of ??$dynamic_pointer_cast@VDomainShaderD3D11@D3D11@Engine@Spectre@@VDeviceShader@34@@std@@YA?AV?$shared_ptr@VDomainShaderD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceShader@Engine@Spectre@@@0@@Z @ 0x1800CF5AC
 * Callers:
 *     ?SubmitShaderPipeline@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@Z @ 0x1800D1B20 (-SubmitShaderPipeline@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VShaderPipeli.c)
 * Callees:
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

__int64 *__fastcall std::dynamic_pointer_cast<Spectre::Engine::D3D11::DomainShaderD3D11,Spectre::Engine::DeviceShader>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast_0(
         *a2,
         0LL,
         &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::DomainShaderD3D11 `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *a1 = v4;
    a1[1] = a2[1];
  }
  return a1;
}
