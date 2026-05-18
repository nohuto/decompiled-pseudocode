/*
 * XREFs of ?reset@?$shared_ptr@VShader@Engine@Spectre@@@std@@QEAAXXZ @ 0x180050C88
 * Callers:
 *     ?ResetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@@Z @ 0x1800874E4 (-ResetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@@Z.c)
 *     ?Reset@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D8380 (-Reset@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<Spectre::Engine::Shader>::reset(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax

  *a1 = 0LL;
  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
