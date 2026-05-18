/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@@2@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180085EB8
 * Callers:
 *     ?Contains@ConstantBuffer@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z @ 0x180084D00 (-Contains@ConstantBuffer@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z.c)
 *     ?Contains@VertexLayout@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z @ 0x18008C0E4 (-Contains@VertexLayout@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z.c)
 *     ?GetDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x18008C334 (-GetDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceVertexLayout@Engi.c)
 *     ?GetDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x1800D0488 (-GetDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceConstantBuffe.c)
 * Callees:
 *     ??$_Find_lower_bound@W4RenderDeviceID@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800435C0 (--$_Find_lower_bound@W4RenderDeviceID@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4Re_ea_1800435C0.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>,0>>::find(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::_Find_lower_bound<enum Spectre::Engine::RenderDeviceID>(
    a1,
    (__int64)v8,
    a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *a3 < *(_DWORD *)(v9 + 32) )
    v6 = *a1;
  result = v5;
  *v5 = v6;
  return result;
}
