/*
 * XREFs of ?GetDeviceBuffer@ArrayBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180088B9C
 * Callers:
 *     ?SubmitIndexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VIndexBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800D0FC0 (-SubmitIndexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VIndexBuffer@Eng.c)
 *     ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VArrayBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D27D0 (-SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VArrayBuffer@En.c)
 *     ?SubmitVertexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@III@Z @ 0x1800D3260 (-SubmitVertexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VVertexBuffer@E.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Find@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180043548 (--$_Find@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spect.c)
 */

_QWORD *__fastcall Spectre::Engine::ArrayBuffer::GetDeviceBuffer(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 120);
  v7 = a3;
  v5 = std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find<enum Spectre::Engine::RenderDeviceID>(
         a1 + 120,
         (__int64)&v7);
  if ( v5 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      a2,
      (_QWORD *)(v5 + 40));
  }
  return a2;
}
