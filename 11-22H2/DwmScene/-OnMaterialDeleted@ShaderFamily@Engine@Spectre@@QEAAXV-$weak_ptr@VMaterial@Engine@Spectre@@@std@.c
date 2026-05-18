/*
 * XREFs of ?OnMaterialDeleted@ShaderFamily@Engine@Spectre@@QEAAXV?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x180060EFC
 * Callers:
 *     ?Release@Material@Engine@Spectre@@QEAAXXZ @ 0x180044568 (-Release@Material@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??0?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@AEAVMutex@Engine@Spectre@@@Z @ 0x180029DF8 (--0-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@AEAVMutex@Engine@Spectre@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$weak_ptr@VMaterial@Engine@Spectre@@@2@@Z @ 0x180061528 (-erase@-$_Tree@V-$_Tset_traits@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@U-$owner_less@V-$weak.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ShaderFamily::OnMaterialDeleted(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v4; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  std::unique_lock<Spectre::Engine::Mutex>::unique_lock<Spectre::Engine::Mutex>(
    (__int64)v5,
    (Spectre::Engine::Mutex *)(a1 + 472));
  std::_Tree<std::_Tset_traits<std::weak_ptr<Spectre::Engine::Material>,std::owner_less<std::weak_ptr<Spectre::Engine::Material>>,std::allocator<std::weak_ptr<Spectre::Engine::Material>>,0>>::erase(
    a1 + 480,
    a2);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v5);
  v4 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}
