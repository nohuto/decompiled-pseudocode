/*
 * XREFs of ?SetTexture@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x1800448F0
 * Callers:
 *     ?OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x18009AB60 (-OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV-$shared_ptr.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V?$shared_ptr@VTexture@Engine@Spectre@@@std@@@Z @ 0x18008566C (-SetTexture@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@V-$shared_ptr@VTexture@.c)
 */

__int64 __fastcall Spectre::Engine::Material::SetTexture(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  unsigned __int16 v4; // r10
  __int64 v5; // r9
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v7, a3);
  return Spectre::Engine::ShaderPropertyBlock::SetTexture(v5, v4, v3);
}
