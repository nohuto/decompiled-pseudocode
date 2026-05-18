/*
 * XREFs of ?Render@Scene@Engine@Spectre@@QEBAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@AEBV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@5@_K@Z @ 0x180041CD0
 * Callers:
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXXZ @ 0x1800105A8 (-_Tidy@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@AEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC (-VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@J@std@@@std@@YAPECHAEAU?$_Atomic_padded@J@0@@Z @ 0x18002E088 (--$_Atomic_address_as@HU-$_Atomic_padded@J@std@@@std@@YAPECHAEAU-$_Atomic_padded@J@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z @ 0x18002E094 (--$_Atomic_reinterpret_as@HJ@std@@YAHAEBJ@Z.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 *     ?Render@SceneNode@Engine@Spectre@@QEBAX_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18003D264 (-Render@SceneNode@Engine@Spectre@@QEBAX_KAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEB.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?GetLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180041040 (-GetLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basic_s.c)
 *     ?GetParent@IConfigurationManager@Utils@Spectre@@QEBA?AV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@XZ @ 0x180041390 (-GetParent@IConfigurationManager@Utils@Spectre@@QEBA-AV-$shared_ptr@VIConfigurationManager@Utils.c)
 *     ?GetShaderOptions@SceneLayer@Engine@Spectre@@QEBA_KXZ @ 0x1800413B4 (-GetShaderOptions@SceneLayer@Engine@Spectre@@QEBA_KXZ.c)
 *     ?IsVisible@SceneLayer@Engine@Spectre@@QEBA_NXZ @ 0x180041810 (-IsVisible@SceneLayer@Engine@Spectre@@QEBA_NXZ.c)
 *     ?GetShaderOptions@Camera@Engine@Spectre@@QEBA_KXZ @ 0x18005BB24 (-GetShaderOptions@Camera@Engine@Spectre@@QEBA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Spectre::Engine::Scene::Render(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        Spectre::Engine::Camera **a4,
        _QWORD *a5,
        __int64 a6)
{
  std::_Ref_count_base *v10; // rax
  __int64 v11; // rdx
  volatile __int32 *v12; // rax
  __int32 v13; // r8d
  Spectre::Engine::SceneLayer *v14; // rbx
  Spectre::Engine::SceneLayer *v15; // rcx
  unsigned __int64 ShaderOptions; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  _QWORD *Parent; // rax
  bool v20; // di
  __int64 v21; // rbx
  Spectre::Engine::SceneNode **v22; // r15
  Spectre::Engine::SceneNode **i; // rdi
  Spectre::Engine::SceneNode *v24; // rbx
  int v25; // eax
  _DWORD *v26; // rdx
  unsigned int v28; // [rsp+30h] [rbp-89h] BYREF
  __int64 v29; // [rsp+38h] [rbp-81h]
  Spectre::Engine::SceneLayer *v30; // [rsp+40h] [rbp-79h] BYREF
  std::_Ref_count_base *v31; // [rsp+48h] [rbp-71h]
  _QWORD v32[3]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v33; // [rsp+68h] [rbp-51h] BYREF
  std::_Ref_count_base *v34; // [rsp+70h] [rbp-49h]
  __int64 v35; // [rsp+78h] [rbp-41h] BYREF
  std::_Ref_count_base *v36; // [rsp+80h] [rbp-39h]
  _QWORD v37[5]; // [rsp+88h] [rbp-31h] BYREF

  v37[4] = a2;
  Spectre::Engine::Lockable::VerifyReadAccess((Spectre::Engine::Lockable *)(a1 + 16));
  v10 = (std::_Ref_count_base *)std::wstring::wstring(v37, a2);
  Spectre::Engine::Scene::GetLayer(a1, &v30, v10);
  v29 = (__int64)v30 + 76;
  v28 = 1;
  std::_Atomic_reinterpret_as<long,long>(&v28);
  v12 = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v11);
  while ( _InterlockedExchange(v12, v13) )
    ;
  v14 = v30;
  if ( Spectre::Engine::SceneLayer::IsVisible(v30) )
  {
    Spectre::Engine::SceneLayer::GetShaderOptions(v15);
    ShaderOptions = Spectre::Engine::Camera::GetShaderOptions(*a4);
    v18 = a6 | v17 | ShaderOptions;
    Parent = (_QWORD *)Spectre::Utils::IConfigurationManager::GetParent((__int64)v14, &v33);
    v20 = std::operator!=<Spectre::Engine::Scene>(Parent);
    if ( v34 )
      std::_Ref_count_base::_Decref(v34);
    if ( v20 )
    {
      v21 = *(_QWORD *)Spectre::Utils::IConfigurationManager::GetParent((__int64)v14, &v35);
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
      (**(void (__fastcall ***)(_QWORD, _QWORD *, __int64, Spectre::Engine::Camera *))*a5)(*a5, v32, v21, *a4);
      v22 = (Spectre::Engine::SceneNode **)v32[1];
      for ( i = (Spectre::Engine::SceneNode **)v32[0]; i != v22; ++i )
      {
        v24 = *i;
        Spectre::Engine::SceneNode::VerifyReadAccess(*i);
        if ( (*((_QWORD *)v24 + 56) & *((_QWORD *)*a4 + 64)) == *((_QWORD *)*a4 + 63) )
          Spectre::Engine::SceneNode::Render(*i, v18, a3, (__int64 *)a4);
      }
      std::vector<std::pair<unsigned int,unsigned int>>::_Tidy((__int64)v32);
    }
  }
  v28 = 0;
  std::_Atomic_address_as<int,std::_Atomic_padded<long>>(v29);
  v25 = std::_Atomic_reinterpret_as<int,long>(&v28);
  *v26 = v25;
  if ( v31 )
    std::_Ref_count_base::_Decref(v31);
  return std::wstring::_Tidy_deallocate(a2);
}
