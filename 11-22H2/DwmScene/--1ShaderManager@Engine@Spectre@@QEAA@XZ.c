/*
 * XREFs of ??1ShaderManager@Engine@Spectre@@QEAA@XZ @ 0x18004EBA4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VShaderManager@Engine@Spectre@@@std@@EEAAXXZ @ 0x180038190 (-_Destroy@-$_Ref_count_obj2@VShaderManager@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18001B850 (-_Tidy@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@TValueElement@Sh.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18001D258 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@PEAVLev.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F54 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Engine@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18004E918 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UShader.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18004E948 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$shar.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18004E978 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@_ea_18004E978.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ShaderManager::~ShaderManager(Spectre::Engine::ShaderManager *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy((__int64)this + 18664);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 2332);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 2330);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>((void **)this + 2326);
  std::_Tree<std::_Tmap_traits<std::string,std::shared_ptr<Spectre::Engine::IShaderExtension>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<Spectre::Engine::IShaderExtension>>>,0>>::~_Tree<std::_Tmap_traits<std::string,std::shared_ptr<Spectre::Engine::IShaderExtension>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<Spectre::Engine::IShaderExtension>>>,0>>((void **)this + 2324);
  std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::ShaderManager::ShaderInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>>,0>>::~_Tree<std::_Tmap_traits<std::string,Spectre::Engine::ShaderManager::ShaderInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>>,0>>((void **)this + 2322);
  std::_Tree<std::_Tmap_traits<std::string,std::shared_ptr<Spectre::Engine::ShaderFamily>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<Spectre::Engine::ShaderFamily>>>,0>>::~_Tree<std::_Tmap_traits<std::string,std::shared_ptr<Spectre::Engine::ShaderFamily>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<Spectre::Engine::ShaderFamily>>>,0>>((void **)this + 2320);
  std::string::_Tidy_deallocate((__int64)this + 18528);
  std::string::_Tidy_deallocate((__int64)this + 18496);
  `eh vector destructor iterator'(
    (char *)this + 2104,
    32LL,
    512LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>::~_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>((void **)this + 261);
  `eh vector destructor iterator'(
    (char *)this + 32,
    32LL,
    64LL,
    (void (*)(void *))std::pair<std::string const,float>::~pair<std::string const,float>);
  std::_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>::~_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>((void **)this + 2);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}
