/*
 * XREFs of ?GetMaterialInstances@ShaderFamily@Engine@Spectre@@QEBA?AV?$set@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800609DC
 * Callers:
 *     ?ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060FAC (-ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?lock_shared@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4FC (-lock_shared@Mutex@Engine@Spectre@@QEAAXXZ.c)
 *     ??$?0V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18005EA50 (--$-0V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@-$_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Spectre::Engine::ShaderFamily::GetMaterialInstances(__int64 a1, __int64 *a2)
{
  char v4; // r8
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v6 = a1 + 472;
  v7 = 1;
  Spectre::Engine::Mutex::lock_shared((Spectre::Engine::Mutex *)(a1 + 472));
  std::_Tree<std::_Tset_traits<std::weak_ptr<Spectre::Engine::Material>,std::owner_less<std::weak_ptr<Spectre::Engine::Material>>,std::allocator<std::weak_ptr<Spectre::Engine::Material>>,0>>::_Tree<std::_Tset_traits<std::weak_ptr<Spectre::Engine::Material>,std::owner_less<std::weak_ptr<Spectre::Engine::Material>>,std::allocator<std::weak_ptr<Spectre::Engine::Material>>,0>>(
    a2,
    (_QWORD *)(a1 + 480),
    v4);
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)&v6);
  return a2;
}
