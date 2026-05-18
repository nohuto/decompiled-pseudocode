/*
 * XREFs of ?UpdateAllLayerBoundingBoxes@Scene@Engine@Spectre@@AEAAXXZ @ 0x1800424E8
 * Callers:
 *     ?Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z @ 0x18004226C (-Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@J@std@@@std@@YAPECHAEAU?$_Atomic_padded@J@0@@Z @ 0x18002E088 (--$_Atomic_address_as@HU-$_Atomic_padded@J@std@@@std@@YAPECHAEAU-$_Atomic_padded@J@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094 (--$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 *     ?UpdateLayerBoundingBox@Scene@Engine@Spectre@@QEAAXAEAVSceneLayer@23@@Z @ 0x180042654 (-UpdateLayerBoundingBox@Scene@Engine@Spectre@@QEAAXAEAVSceneLayer@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Scene::UpdateAllLayerBoundingBoxes(Spectre::Engine::Scene *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  volatile __int32 *v4; // rax
  __int32 v5; // r8d
  struct Spectre::Engine::SceneLayer *v6; // r9
  _DWORD *v7; // rax
  int v8; // edx
  __int64 v9; // [rsp+20h] [rbp-18h]
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v2 = **((_QWORD **)this + 11);
  v12 = v2;
  while ( !*(_BYTE *)(v2 + 25) )
  {
    v9 = *(_QWORD *)(v2 + 64) + 76LL;
    v10 = 1;
    std::_Atomic_reinterpret_as<long,long>(&v10);
    v4 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v3);
    while ( _InterlockedExchange(v4, v5) )
      ;
    Spectre::Engine::Scene::UpdateLayerBoundingBox(this, v6);
    v11 = 0;
    std::_Atomic_reinterpret_as<int,long>(&v11);
    v7 = (_DWORD *)std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v9);
    *v7 = v8;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v12);
    v2 = v12;
  }
}
