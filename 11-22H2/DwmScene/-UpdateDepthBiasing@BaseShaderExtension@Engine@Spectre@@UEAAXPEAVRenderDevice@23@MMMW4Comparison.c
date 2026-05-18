/*
 * XREFs of ?UpdateDepthBiasing@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVRenderDevice@23@MMMW4ComparisonFunction@23@@Z @ 0x18009B5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?UpdateRenderStateDepthSettings@ShaderPipeline@Engine@Spectre@@QEAAXMMM_NW4ComparisonFunction@23@@Z @ 0x180087C20 (-UpdateRenderStateDepthSettings@ShaderPipeline@Engine@Spectre@@QEAAXMMM_NW4ComparisonFunction@23.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::BaseShaderExtension::UpdateDepthBiasing(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        float a5,
        int a6)
{
  _QWORD *v6; // rbx
  _QWORD *i; // rdi
  __int64 v8; // [rsp+20h] [rbp-48h]
  _QWORD *v9; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-30h]

  v6 = *(_QWORD **)(a1 + 128);
  for ( i = *(_QWORD **)(a1 + 136); v6 != i; v6 += 2 )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v9, v6);
    Spectre::Engine::ShaderPipeline::UpdateRenderStateDepthSettings(v9, a3, a4, a5, v8, a6);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
}
