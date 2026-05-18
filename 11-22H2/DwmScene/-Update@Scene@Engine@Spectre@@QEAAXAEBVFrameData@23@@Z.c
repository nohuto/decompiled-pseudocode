/*
 * XREFs of ?Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z @ 0x18004226C
 * Callers:
 *     ?UpdateScene@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800375F8 (-UpdateScene@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?compare@?$_WChar_traits@_W@std@@SAHQEB_W0_K@Z @ 0x18001F790 (-compare@-$_WChar_traits@_W@std@@SAHQEB_W0_K@Z.c)
 *     ??E?$_Atomic_integral@H$03@std@@QEAAHH@Z @ 0x18002116C (--E-$_Atomic_integral@H$03@std@@QEAAHH@Z.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@J@std@@@std@@YAPECHAEAU?$_Atomic_padded@J@0@@Z @ 0x18002E088 (--$_Atomic_address_as@HU-$_Atomic_padded@J@std@@@std@@YAPECHAEAU-$_Atomic_padded@J@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094 (--$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x18003F5C4 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@$$V@-$map@V-.c)
 *     ?GetParent@IConfigurationManager@Utils@Spectre@@QEBA?AV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@XZ @ 0x180041390 (-GetParent@IConfigurationManager@Utils@Spectre@@QEBA-AV-$shared_ptr@VIConfigurationManager@Utils.c)
 *     ?PostUpdate@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800418A4 (-PostUpdate@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV-$shared_ptr@VSceneNode@Engine@Spect.c)
 *     ?Update@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800421F0 (-Update@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@.c)
 *     ?UpdateAllLayerBoundingBoxes@Scene@Engine@Spectre@@AEAAXXZ @ 0x1800424E8 (-UpdateAllLayerBoundingBoxes@Scene@Engine@Spectre@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Spectre::Engine::Scene::Update(
        Spectre::Engine::Scene *this,
        const struct Spectre::Engine::FrameData *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  volatile __int32 *v6; // rax
  __int64 v7; // r8
  __int32 v8; // r9d
  Spectre::Engine::SceneNode **Parent; // rax
  _DWORD *v10; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdx
  volatile __int32 *v14; // rax
  __int32 v15; // r8d
  Spectre::Engine::SceneNode **v16; // rax
  int v17; // eax
  _DWORD *v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // r10
  __int64 *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  volatile __int32 *v25; // rax
  __int32 v26; // r8d
  __int64 v27; // r10
  Spectre::Engine::SceneNode **v28; // rax
  _DWORD *v29; // rax
  int v30; // edx
  unsigned int v31; // [rsp+20h] [rbp-59h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-51h] BYREF
  unsigned int v33; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v35; // [rsp+40h] [rbp-39h] BYREF
  __int64 v36; // [rsp+48h] [rbp-31h] BYREF
  __int64 v37; // [rsp+50h] [rbp-29h] BYREF
  __int64 v38; // [rsp+58h] [rbp-21h]
  __int64 v39; // [rsp+60h] [rbp-19h]
  __int64 v40; // [rsp+68h] [rbp-11h]
  __int64 v41; // [rsp+70h] [rbp-9h] BYREF
  std::_Ref_count_base *v42; // [rsp+78h] [rbp-1h]
  __int64 v43; // [rsp+80h] [rbp+7h] BYREF
  std::_Ref_count_base *v44; // [rsp+88h] [rbp+Fh]
  __int64 v45; // [rsp+90h] [rbp+17h] BYREF
  std::_Ref_count_base *v46; // [rsp+98h] [rbp+1Fh]
  __int64 v47; // [rsp+A0h] [rbp+27h] BYREF
  std::_Ref_count_base *v48; // [rsp+A8h] [rbp+2Fh]
  _BYTE v49[32]; // [rsp+B0h] [rbp+37h] BYREF
  unsigned int v50; // [rsp+F8h] [rbp+7Fh] BYREF

  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Scene *)((char *)this + 16));
  v4 = **((_QWORD **)this + 11);
  v36 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    v38 = *(_QWORD *)(v4 + 64) + 76LL;
    v50 = 1;
    std::_Atomic_reinterpret_as<long,long>(&v50);
    v6 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v5);
    while ( _InterlockedExchange(v6, v8) )
      ;
    Parent = (Spectre::Engine::SceneNode **)Spectre::Utils::IConfigurationManager::GetParent(*(_QWORD *)(v7 + 64), &v43);
    Spectre::Engine::Scene::Update((__int64)this, (__int64)a2, Parent);
    if ( v44 )
      std::_Ref_count_base::_Decref(v44);
    v31 = 0;
    std::_Atomic_reinterpret_as<int,long>(&v31);
    v10 = (_DWORD *)std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v38);
    *v10 = v11;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v36);
    v4 = v36;
  }
  Spectre::Engine::Scene::UpdateAllLayerBoundingBoxes(this);
  v12 = std::map<std::wstring,std::shared_ptr<Spectre::Engine::SceneLayer>>::_Try_emplace<std::wstring const &,>(
          (__int64 *)this + 11,
          (__int64)v49);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v41,
    (_QWORD *)(*(_QWORD *)v12 + 64LL));
  v39 = v41 + 76;
  v32 = 1;
  std::_Atomic_reinterpret_as<long,long>(&v32);
  v14 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v13);
  while ( _InterlockedExchange(v14, v15) )
    ;
  v16 = (Spectre::Engine::SceneNode **)Spectre::Utils::IConfigurationManager::GetParent(v41, &v45);
  Spectre::Engine::Scene::PostUpdate((__int64)this, (__int64)a2, v16);
  if ( v46 )
    std::_Ref_count_base::_Decref(v46);
  v33 = 0;
  std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v39);
  v17 = std::_Atomic_reinterpret_as<int,long>(&v33);
  *v18 = v17;
  v19 = **((_QWORD **)this + 11);
  v37 = v19;
  while ( !*(_BYTE *)(v19 + 25) )
  {
    v20 = (__int64 *)(v19 + 32);
    v21 = &Spectre::Engine::SceneLayerStandardID::kLights;
    if ( (unsigned __int64)qword_1801D4000 >= 8 )
      v21 = (__int64 *)Spectre::Engine::SceneLayerStandardID::kLights;
    v22 = *(_QWORD *)(v19 + 48);
    v23 = v19 + 32;
    if ( *(_QWORD *)(v19 + 56) >= 8uLL )
      v23 = *v20;
    if ( v22 != qword_1801D3FF8 || (unsigned int)std::_WChar_traits<wchar_t>::compare(v23, v21, v22) )
    {
      v40 = v20[4] + 76;
      v34 = 1;
      std::_Atomic_reinterpret_as<long,long>(&v34);
      v25 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v24);
      while ( _InterlockedExchange(v25, v26) )
        ;
      v28 = (Spectre::Engine::SceneNode **)Spectre::Utils::IConfigurationManager::GetParent(*(_QWORD *)(v27 + 32), &v47);
      Spectre::Engine::Scene::PostUpdate((__int64)this, (__int64)a2, v28);
      if ( v48 )
        std::_Ref_count_base::_Decref(v48);
      v35 = 0;
      std::_Atomic_reinterpret_as<int,long>(&v35);
      v29 = (_DWORD *)std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v40);
      *v29 = v30;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v37);
    v19 = v37;
  }
  std::_Atomic_integral<int,4>::operator++((__int64)this + 192);
  if ( v42 )
    std::_Ref_count_base::_Decref(v42);
}
