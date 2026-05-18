/*
 * XREFs of ?ResetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@@Z @ 0x1800874E4
 * Callers:
 *     ?SetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180087710 (-SetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@V-$basic_string@DU-$char_traits@.c)
 *     ?SetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@V?$shared_ptr@VShader@Engine@Spectre@@@std@@@Z @ 0x180087774 (-SetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@V-$shared_ptr@VShader@Engine@Spe.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180054C00 (-clear@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Eng.c)
 */

void __fastcall Spectre::Engine::ShaderPipeline::ResetShader(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  std::_Ref_count_base *v4; // rcx

  v2 = a2;
  if ( a2 == 1 )
  {
    a1[22] = 0LL;
    v4 = (std::_Ref_count_base *)a1[23];
    a1[23] = 0LL;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::clear(a1 + 60);
  std::shared_ptr<Spectre::Engine::Shader>::reset(&a1[2 * v2 + 48]);
}
