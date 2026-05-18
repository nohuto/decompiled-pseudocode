/*
 * XREFs of ??1ShaderFamily@Engine@Spectre@@QEAA@XZ @ 0x18005FC40
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VShaderFamily@Engine@Spectre@@@std@@EEAAXXZ @ 0x180050B30 (-_Destroy@-$_Ref_count_obj2@VShaderFamily@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18001B850 (-_Tidy@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@TValueElement@Sh.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18001D258 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@PEAVLev.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@1@@Z @ 0x18004D844 (--$_Erase_head@V-$allocator@U-$_Tree_node@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18005F174 (--$_Erase_head@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@U?$less@W4EShaderModel@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x18005FA98 (--1-$_Tree@V-$_Tmap_traits@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily.c)
 *     ??1SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0D30 (--1SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ShaderFamily::~ShaderFamily(Spectre::Engine::ShaderFamily *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy((__int64)this + 528);
  std::string::_Tidy_deallocate((__int64)this + 496);
  std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>::_Erase_head<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>(
    (void **)this + 60,
    (__int64)this + 480);
  Spectre::Utils::SharedMutex::~SharedMutex((Spectre::Engine::ShaderFamily *)((char *)this + 472));
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 58);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 56);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::EShaderModel,Spectre::Engine::ShaderFamily::ShaderPipelineCollection,std::less<enum Spectre::Engine::EShaderModel>,std::allocator<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::EShaderModel,Spectre::Engine::ShaderFamily::ShaderPipelineCollection,std::less<enum Spectre::Engine::EShaderModel>,std::allocator<std::pair<enum Spectre::Engine::EShaderModel const,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>>,0>>((void **)this + 52);
  `eh vector destructor iterator'(
    (char *)this + 256,
    16LL,
    10LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  `eh vector destructor iterator'(
    (char *)this + 96,
    16LL,
    10LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
  std::_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>::~_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>((void **)this + 10);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    (void **)this + 6,
    (__int64)this + 48);
  std::string::_Tidy_deallocate((__int64)this + 16);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}
