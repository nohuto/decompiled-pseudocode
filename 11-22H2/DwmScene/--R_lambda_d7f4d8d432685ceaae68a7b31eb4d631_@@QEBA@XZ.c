/*
 * XREFs of ??R_lambda_d7f4d8d432685ceaae68a7b31eb4d631_@@QEBA@XZ @ 0x1800C4494
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_d7f4d8d432685ceaae68a7b31eb4d631_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C8230 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_d7f4d8d432685ceaae68a7b31eb4d631_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$dynamic_pointer_cast@VRendererResource@Engine@Spectre@@VDeviceShaderPipeline@23@@std@@YA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceShaderPipeline@Engine@Spectre@@@0@@Z @ 0x1800526BC (--$dynamic_pointer_cast@VRendererResource@Engine@Spectre@@VDeviceShaderPipeline@23@@std@@YA-AV-$.c)
 *     ??0DeviceIndexBuffer@Engine@Spectre@@QEAA@XZ @ 0x180089A94 (--0DeviceIndexBuffer@Engine@Spectre@@QEAA@XZ.c)
 */

_QWORD *__fastcall _lambda_d7f4d8d432685ceaae68a7b31eb4d631_::operator()(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = operator new(0x80uLL);
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 2;
    *((_DWORD *)v3 + 2) = 1;
    *((_DWORD *)v3 + 3) = 1;
    *v3 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::IndexBufferD3D11>::`vftable';
    memset_0(v3 + 2, 0, 0x70uLL);
    Spectre::Engine::DeviceIndexBuffer::DeviceIndexBuffer((Spectre::Engine::DeviceIndexBuffer *)(v4 + 2));
    *v5 = &Spectre::Engine::D3D11::IndexBufferD3D11::`vftable';
    v4[15] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  v7[1] = (__int64)v4;
  v7[0] = (__int64)(v4 + 2);
  std::dynamic_pointer_cast<Spectre::Engine::RendererResource,Spectre::Engine::DeviceShaderPipeline>(a2, v7);
  if ( v4 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
  return a2;
}
