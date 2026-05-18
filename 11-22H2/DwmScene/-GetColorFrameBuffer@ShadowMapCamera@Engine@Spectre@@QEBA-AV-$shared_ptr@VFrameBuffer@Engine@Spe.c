/*
 * XREFs of ?GetColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@QEBA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@XZ @ 0x18008E178
 * Callers:
 *     ?ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008DB9C (-ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 *     ?GetColorTexture@ShadowMapCamera@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x18008E1C8 (-GetColorTexture@ShadowMapCamera@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@s.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::ShadowMapCamera::GetColorFrameBuffer(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 1912));
  return v2;
}
