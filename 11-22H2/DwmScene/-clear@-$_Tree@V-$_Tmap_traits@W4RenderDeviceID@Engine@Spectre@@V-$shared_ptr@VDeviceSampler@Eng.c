/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180054C00
 * Callers:
 *     ??1Sampler@Engine@Spectre@@UEAA@XZ @ 0x1800544F4 (--1Sampler@Engine@Spectre@@UEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180054C40 (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VCommandList@Engin.c)
 *     ??1Texture@Engine@Spectre@@UEAA@XZ @ 0x180055760 (--1Texture@Engine@Spectre@@UEAA@XZ.c)
 *     ?Shutdown@Camera@Engine@Spectre@@UEAAXXZ @ 0x18005D590 (-Shutdown@Camera@Engine@Spectre@@UEAAXXZ.c)
 *     ?ResetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@@Z @ 0x1800874E4 (-ResetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@@Z.c)
 *     ?NotifyModified@ArrayBuffer@Engine@Spectre@@UEAAXXZ @ 0x180088C00 (-NotifyModified@ArrayBuffer@Engine@Spectre@@UEAAXXZ.c)
 *     ?UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x180088D78 (-UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@1@@Z @ 0x180027AF0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEBEV-$shared_ptr@VShader@Engine@Spectre@@@std.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::clear(
        _QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned char const * const,std::shared_ptr<Spectre::Engine::Shader>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned char const * const,std::shared_ptr<Spectre::Engine::Shader>>,void *>>>(
             (__int64)a1,
             (__int64)a1,
             *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
