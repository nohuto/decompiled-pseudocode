/*
 * XREFs of ?at@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@QEAAAEAUMaterialInfo@MeshInstance@Engine@Spectre@@_K@Z @ 0x18004CE64
 * Callers:
 *     ?AttachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_KV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x18004B250 (-AttachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_KV-$shared_ptr@VShaderFamily@Engine@Spect.c)
 *     ?DetachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_K@Z @ 0x18004B800 (-DetachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_K@Z.c)
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAX_KV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C9D0 (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAX_KV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@.c)
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
