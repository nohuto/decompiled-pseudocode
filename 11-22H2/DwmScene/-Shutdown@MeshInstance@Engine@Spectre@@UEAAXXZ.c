/*
 * XREFs of ?Shutdown@MeshInstance@Engine@Spectre@@UEAAXXZ @ 0x18004CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMesh@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x180014620 (-SetMesh@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z.c)
 *     ?SetMaterialCount@MeshInstance@Engine@Spectre@@QEAAX_K@Z @ 0x18004CB18 (-SetMaterialCount@MeshInstance@Engine@Spectre@@QEAAX_K@Z.c)
 */

void __fastcall Spectre::Engine::MeshInstance::Shutdown(Spectre::Engine::MeshInstance *this)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  Spectre::Engine::MeshInstance::SetMaterialCount(this, 0LL);
  v2 = 0LL;
  Spectre::Engine::MeshInstance::SetMesh((__int64)this, &v2);
}
