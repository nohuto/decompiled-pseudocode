/*
 * XREFs of ?GetRepresentative@ResourceManager@Engine@Spectre@@QEBA_K_K@Z @ 0x180070250
 * Callers:
 *     ?Request@ResourceManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x18007040C (-Request@ResourceManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spect.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@_K_KU?$less@_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@AEB_K@Z @ 0x180070684 (-find@-$_Tree@V-$_Tmap_traits@_K_KU-$less@_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@$0A@@std.c)
 */

unsigned __int64 __fastcall Spectre::Engine::ResourceManager::GetRepresentative(
        Spectre::Engine::ResourceManager *this,
        __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = a2;
  std::_Mutex_base::lock((Spectre::Engine::ResourceManager *)((char *)this + 104));
  std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned __int64,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::find(
    (char *)this + 200,
    &v5,
    &v6);
  if ( v5 != *((_QWORD *)this + 25) )
    v3 = *(_QWORD *)(v5 + 40);
  _Mtx_unlock((Spectre::Engine::ResourceManager *)((char *)this + 104));
  return v3;
}
