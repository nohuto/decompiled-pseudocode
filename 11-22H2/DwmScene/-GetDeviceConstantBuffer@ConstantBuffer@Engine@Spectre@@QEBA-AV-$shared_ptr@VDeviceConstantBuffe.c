/*
 * XREFs of ?GetDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x1800D0488
 * Callers:
 *     ?SubmitShaderConstantBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800D19A0 (-SubmitShaderConstantBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV-$s.c)
 *     ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2900 (-SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VConstantBuffer.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@@2@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180085EB8 (-find@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceConstantBuff.c)
 */

_QWORD *__fastcall Spectre::Engine::ConstantBuffer::GetDeviceConstantBuffer(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 112);
  v7 = a3;
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>,0>>::find(
    (__int64 *)(a1 + 112),
    (__int64)&v6,
    &v7);
  if ( v6 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      a2,
      (_QWORD *)(v6 + 40));
  }
  return a2;
}
