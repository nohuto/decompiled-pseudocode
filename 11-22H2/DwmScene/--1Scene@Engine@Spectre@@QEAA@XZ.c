/*
 * XREFs of ??1Scene@Engine@Spectre@@QEAA@XZ @ 0x18003FFBC
 * Callers:
 *     ??_GScene@Engine@Spectre@@QEAAPEAXI@Z @ 0x180040204 (--_GScene@Engine@Spectre@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1Lockable@Engine@Spectre@@QEAA@XZ @ 0x180025B30 (--1Lockable@Engine@Spectre@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18003FD74 (--1-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V-$_Uhash_compare@_KU-.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18003FE84 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$s.c)
 *     ??1?$_Tree@V?$_Tmap_traits@HV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18003FEB4 (--1-$_Tree@V-$_Tmap_traits@HV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@U-$less@H@2@V-$alloc.c)
 *     ??1SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0D30 (--1SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Scene::~Scene(void **this)
{
  void *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  std::_Tree<std::_Tmap_traits<int,std::shared_ptr<Spectre::Engine::LightProbe>,std::less<int>,std::allocator<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>>,0>>::~_Tree<std::_Tmap_traits<int,std::shared_ptr<Spectre::Engine::LightProbe>,std::less<int>,std::allocator<std::pair<int const,std::shared_ptr<Spectre::Engine::LightProbe>>>,0>>(this + 25);
  Spectre::Utils::SharedMutex::~SharedMutex((Spectre::Utils::SharedMutex *)(this + 23));
  std::_Hash<std::_Umap_traits<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>,0>>::~_Hash<std::_Umap_traits<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>,0>>((__int64)(this + 15));
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Spectre::Engine::SceneLayer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Spectre::Engine::SceneLayer>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Spectre::Engine::SceneLayer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Spectre::Engine::SceneLayer>>>,0>>(this + 11);
  v2 = this[10];
  if ( v2 )
  {
    this[10] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Spectre::Engine::Lockable::~Lockable((Spectre::Engine::Lockable *)(this + 2));
  v3 = (std::_Ref_count_base *)this[1];
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
}
