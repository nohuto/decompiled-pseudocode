/*
 * XREFs of ??R_lambda_76eddb9b03c24eac3632c1cece1b494c_@@QEBA@XZ @ 0x180052884
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_76eddb9b03c24eac3632c1cece1b494c_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x180053D60 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_76eddb9b03c24eac3632c1cece1b494c_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$dynamic_pointer_cast@VRendererResource@Engine@Spectre@@VDeviceShaderPipeline@23@@std@@YA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceShaderPipeline@Engine@Spectre@@@0@@Z @ 0x1800526BC (--$dynamic_pointer_cast@VRendererResource@Engine@Spectre@@VDeviceShaderPipeline@23@@std@@YA-AV-$.c)
 *     ??0DeviceVertexBuffer@Engine@Spectre@@IEAA@XZ @ 0x18008941C (--0DeviceVertexBuffer@Engine@Spectre@@IEAA@XZ.c)
 */

_QWORD *__fastcall _lambda_76eddb9b03c24eac3632c1cece1b494c_::operator()(__int64 a1, _QWORD *a2)
{
  char *v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (char *)operator new(0x78uLL);
  v4 = (__int64)v3;
  if ( v3 )
  {
    v5 = v3 + 16;
    *((_DWORD *)v3 + 2) = 1;
    *((_DWORD *)v3 + 3) = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<Spectre::Engine::VertexBufferGeneric>::`vftable';
    memset_0(v3 + 16, 0, 0x68uLL);
    Spectre::Engine::DeviceVertexBuffer::DeviceVertexBuffer((Spectre::Engine::DeviceVertexBuffer *)(v4 + 16));
    *v5 = &Spectre::Engine::VertexBufferGeneric::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  v7[1] = v4;
  v7[0] = v4 + 16;
  std::dynamic_pointer_cast<Spectre::Engine::RendererResource,Spectre::Engine::DeviceShaderPipeline>(a2, v7);
  if ( v4 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
  return a2;
}
