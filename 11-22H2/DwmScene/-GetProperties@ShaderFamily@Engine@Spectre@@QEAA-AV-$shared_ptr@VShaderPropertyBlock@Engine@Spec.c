/*
 * XREFs of ?GetProperties@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x180060C00
 * Callers:
 *     ?GetProperties@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180060C2C (-GetProperties@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBloc_ea_180060C2C.c)
 *     ?OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18007DF80 (-OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engine@Spec.c)
 *     ?OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180080C30 (-OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engi.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::ShaderFamily::GetProperties(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r9

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 16 * (a3 + 16LL)));
  return v3;
}
