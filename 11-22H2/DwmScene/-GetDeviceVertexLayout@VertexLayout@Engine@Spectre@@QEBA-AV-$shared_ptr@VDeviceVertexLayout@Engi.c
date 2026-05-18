/*
 * XREFs of ?GetDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x18008C334
 * Callers:
 *     ?SubmitVertexLayout@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@@Z @ 0x1800D3390 (-SubmitVertexLayout@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VVertexLayout@E.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@@2@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180085EB8 (-find@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceConstantBuff.c)
 */

_QWORD *__fastcall Spectre::Engine::VertexLayout::GetDeviceVertexLayout(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 144);
  v11 = a3;
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>,0>>::find(
    (__int64 *)(a1 + 144),
    (__int64)&v10,
    &v11);
  v5 = v10;
  v6 = 0LL;
  a2[1] = 0LL;
  if ( v5 == *v3 )
  {
    v8 = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 48);
    *a2 = 0LL;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v6 = *(_QWORD *)(v5 + 48);
    v8 = *(_QWORD *)(v5 + 40);
  }
  *a2 = v8;
  result = a2;
  a2[1] = v6;
  return result;
}
