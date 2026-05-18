/*
 * XREFs of ??1SceneNode@Engine@Spectre@@UEAA@XZ @ 0x18003B364
 * Callers:
 *     ??_ESceneNode@Engine@Spectre@@UEAAPEAXI@Z @ 0x18003B620 (--_ESceneNode@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 *     ?_Tidy@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18001B850 (-_Tidy@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@TValueElement@Sh.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800317AC (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V12@U-$.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180038548 (-_Tidy@-$vector@V-$shared_ptr@VComponent@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VCompo.c)
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?TryDetachFromScene@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x18003E048 (-TryDetachFromScene@SceneNode@Engine@Spectre@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::SceneNode::~SceneNode(void **this)
{
  Spectre::Engine::SceneNode **v2; // rsi
  Spectre::Engine::SceneNode **i; // rdi
  _QWORD *v4; // rsi
  _QWORD *j; // rdi
  void *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v14; // rcx
  std::_Ref_count_base *v15; // rcx
  std::_Ref_count_base *v16; // rcx
  std::_Ref_count_base *v17; // rcx
  std::_Ref_count_base *v18; // rcx
  std::_Ref_count_base *v19; // rcx
  std::_Ref_count_base *v20; // rcx

  *this = &Spectre::Engine::SceneNode::`vftable';
  Spectre::Engine::SceneNode::TryDetachFromScene((Spectre::Engine::SceneNode *)this);
  v2 = (Spectre::Engine::SceneNode **)this[5];
  for ( i = (Spectre::Engine::SceneNode **)this[4]; i != v2; i += 2 )
    Spectre::Engine::SceneNode::SetParent(*i);
  v4 = this[48];
  for ( j = this[47]; j != v4; j += 2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 112LL))(*j);
  v6 = this[73];
  if ( v6 )
  {
    this[73] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (std::_Ref_count_base *)this[72];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = (std::_Ref_count_base *)this[70];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v9 = (std::_Ref_count_base *)this[68];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v10 = (std::_Ref_count_base *)this[66];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v11 = (std::_Ref_count_base *)this[64];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v12 = (std::_Ref_count_base *)this[62];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v13 = (std::_Ref_count_base *)this[60];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v14 = (std::_Ref_count_base *)this[58];
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  std::_Tree<std::_Tmap_traits<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>,0>>::~_Tree<std::_Tmap_traits<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>,0>>(this + 54);
  std::string::_Tidy_deallocate((__int64)(this + 50));
  std::vector<std::shared_ptr<Spectre::Engine::Component>>::_Tidy((__int64)(this + 47));
  std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy((__int64)(this + 23));
  v15 = (std::_Ref_count_base *)this[17];
  if ( v15 )
    std::_Ref_count_base::_Decwref(v15);
  v16 = (std::_Ref_count_base *)this[15];
  if ( v16 )
    std::_Ref_count_base::_Decwref(v16);
  v17 = (std::_Ref_count_base *)this[12];
  if ( v17 )
    std::_Ref_count_base::_Decwref(v17);
  v18 = (std::_Ref_count_base *)this[10];
  if ( v18 )
    std::_Ref_count_base::_Decwref(v18);
  v19 = (std::_Ref_count_base *)this[8];
  if ( v19 )
    std::_Ref_count_base::_Decwref(v19);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)(this + 4));
  *this = &Spectre::Engine::IVisitable::`vftable';
  v20 = (std::_Ref_count_base *)this[2];
  if ( v20 )
    std::_Ref_count_base::_Decwref(v20);
}
