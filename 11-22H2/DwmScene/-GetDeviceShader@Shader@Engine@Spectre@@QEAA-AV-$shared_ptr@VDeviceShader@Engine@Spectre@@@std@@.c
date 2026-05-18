/*
 * XREFs of ?GetDeviceShader@Shader@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x18008AF20
 * Callers:
 *     ?SubmitShaderPipeline@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@Z @ 0x1800D1B20 (-SubmitShaderPipeline@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VShaderPipeli.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetDeviceFromID@Engine@1Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@W4RenderDeviceID@12@@Z @ 0x18003422C (-GetDeviceFromID@Engine@1Spectre@@QEAA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@W4Rend.c)
 *     ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548 (--$_Find@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spect.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::Shader::GetDeviceShader(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v6 = a1 + 17;
  v12 = a3;
  if ( std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
         (__int64)(a1 + 17),
         (__int64)&v12) == a1[17] )
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    Spectre::Engine::Engine::GetDeviceFromID(v7, &v10, a3);
    (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 16LL))(a1, &v10);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  v12 = a3;
  v8 = std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
         (__int64)v6,
         (__int64)&v12);
  if ( v8 == *v6 )
  {
    *(_OWORD *)a2 = 0LL;
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      a2,
      (_QWORD *)(v8 + 40));
  }
  return a2;
}
