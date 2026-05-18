/*
 * XREFs of ?SetMaterialCount@MeshInstance@Engine@Spectre@@QEAAX_K@Z @ 0x18004CB18
 * Callers:
 *     ??0MeshInstance@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18004AD2C (--0MeshInstance@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?Shutdown@MeshInstance@Engine@Spectre@@UEAAXXZ @ 0x18004CB30 (-Shutdown@MeshInstance@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::MeshInstance::SetMaterialCount(
        Spectre::Engine::MeshInstance *this,
        unsigned __int64 a2)
{
  std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Resize<std::_Value_init_tag>((__int64)this + 104, a2);
}
