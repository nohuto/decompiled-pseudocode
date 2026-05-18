/*
 * XREFs of ?GetPropertyLayout@ShaderFamily@Engine@Spectre@@QEBAAEBV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x180060C50
 * Callers:
 *     ?AttachShaderFamily@Material@Engine@Spectre@@AEAAXV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180044188 (-AttachShaderFamily@Material@Engine@Spectre@@AEAAXV-$shared_ptr@VShaderFamily@Engine@Spectre@@@s.c)
 *     ?AttachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_KV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x18004B250 (-AttachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_KV-$shared_ptr@VShaderFamily@Engine@Spect.c)
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderFamily::GetPropertyLayout(__int64 a1, unsigned int a2)
{
  return a1 + 16 * (a2 + 6LL);
}
