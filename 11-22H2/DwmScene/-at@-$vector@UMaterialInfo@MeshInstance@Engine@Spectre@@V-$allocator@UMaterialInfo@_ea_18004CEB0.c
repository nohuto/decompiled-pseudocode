/*
 * XREFs of ?at@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@QEBAAEBUMaterialInfo@MeshInstance@Engine@Spectre@@_K@Z @ 0x18004CEB0
 * Callers:
 *     ?GetMaterial@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@_K@Z @ 0x18004B988 (-GetMaterial@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@_K.c)
 *     ?GetShaderProperties@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@_KW4EShaderPropertyScope@23@@Z @ 0x18004BAA0 (-GetShaderProperties@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyBlock@Engin.c)
 *     ?IsMaterialEnabled@MeshInstance@Engine@Spectre@@QEBA_N_K@Z @ 0x18004BB70 (-IsMaterialEnabled@MeshInstance@Engine@Spectre@@QEBA_N_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::at(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 3) <= a2 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v2 + 88 * a2;
}
