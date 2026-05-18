/*
 * XREFs of ??1?$set@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18005FBD4
 * Callers:
 *     _Spectre::Engine::ShaderFamily::ReleaseResources_::_1_::dtor$2 @ 0x1800E7D36 (_Spectre--Engine--ShaderFamily--ReleaseResources_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::set<std::weak_ptr<Spectre::Engine::Material>,std::owner_less<std::weak_ptr<Spectre::Engine::Material>>,std::allocator<std::weak_ptr<Spectre::Engine::Material>>>::~set<std::weak_ptr<Spectre::Engine::Material>,std::owner_less<std::weak_ptr<Spectre::Engine::Material>>,std::allocator<std::weak_ptr<Spectre::Engine::Material>>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>::_Erase_head<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>(
    a1,
    (__int64)a1);
}
