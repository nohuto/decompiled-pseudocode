/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_075568019f0ba5dd51131882019b8c39_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C7B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$dynamic_pointer_cast@VRendererResource@Engine@Spectre@@VDeviceShaderPipeline@23@@std@@YA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceShaderPipeline@Engine@Spectre@@@0@@Z @ 0x1800526BC (--$dynamic_pointer_cast@VRendererResource@Engine@Spectre@@VDeviceShaderPipeline@23@@std@@YA-AV-$.c)
 *     ??0CommandListD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800CFA3C (--0CommandListD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc<_lambda_075568019f0ba5dd51131882019b8c39_,std::shared_ptr<Spectre::Engine::RendererResource>,>::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  char *v3; // rax
  std::_Ref_count_base *v4; // rbx
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (char *)operator new(0xB0uLL);
  v4 = (std::_Ref_count_base *)v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 2) = 1;
    *((_DWORD *)v3 + 3) = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::CommandListD3D11>::`vftable';
    Spectre::Engine::D3D11::CommandListD3D11::CommandListD3D11((Spectre::Engine::D3D11::CommandListD3D11 *)(v3 + 16));
  }
  else
  {
    v4 = 0LL;
  }
  v6[1] = (__int64)v4;
  v6[0] = (__int64)v4 + 16;
  std::dynamic_pointer_cast<Spectre::Engine::RendererResource,Spectre::Engine::DeviceShaderPipeline>(a2, v6);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return a2;
}
