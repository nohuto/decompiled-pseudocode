/*
 * XREFs of ?Release@ResourceManager@Engine@Spectre@@QEAAXXZ @ 0x180070388
 * Callers:
 *     ?OnShutdown@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026E80 (-OnShutdown@RenderDevice@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@_K_KU?$less@_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180070618 (-clear@-$_Tree@V-$_Tmap_traits@_K_KU-$less@_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@$0A@@st.c)
 *     ?clear@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAXXZ @ 0x180070658 (-clear@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@@@std@@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ResourceManager::Release(Spectre::Engine::ResourceManager *this)
{
  struct _Mtx_internal_imp_t *v2; // rdi

  v2 = (Spectre::Engine::ResourceManager *)((char *)this + 24);
  std::_Mutex_base::lock((Spectre::Engine::ResourceManager *)((char *)this + 24));
  std::_Mutex_base::lock((Spectre::Engine::ResourceManager *)((char *)this + 104));
  std::vector<Spectre::Engine::ResourceData>::clear(this);
  std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned __int64,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::clear((char *)this + 184);
  std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned __int64,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::clear((char *)this + 200);
  _Mtx_unlock((Spectre::Engine::ResourceManager *)((char *)this + 104));
  _Mtx_unlock(v2);
}
