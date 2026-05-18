/*
 * XREFs of ?SetOptions@Material@Engine@Spectre@@QEAAX_K_N@Z @ 0x1800446F0
 * Callers:
 *     ?SetOption@Material@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z @ 0x1800446D4 (-SetOption@Material@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z.c)
 *     ?ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@6@2@Z @ 0x180095DA0 (-ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV-$shared_ptr.c)
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 *     ?ApplyBlur@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V?$shared_ptr@VTexture@Engine@Spectre@@@5@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@@Z @ 0x18009C150 (-ApplyBlur@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@.c)
 *     ?ApplyDownsample@ImageProcessingEffectBlur@Engine@Spectre@@MEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@@Z @ 0x18009C400 (-ApplyDownsample@ImageProcessingEffectBlur@Engine@Spectre@@MEAA-AV-$shared_ptr@VTexture@Engine@S.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Material::SetOptions(Spectre::Engine::Material *this, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *((_QWORD *)this + 19);
  if ( a3 )
    v4 = a2 | v3;
  else
    v4 = ~a2 & v3;
  *((_QWORD *)this + 19) = v4;
}
