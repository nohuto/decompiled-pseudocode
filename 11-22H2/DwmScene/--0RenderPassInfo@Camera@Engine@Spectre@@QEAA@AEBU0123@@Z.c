/*
 * XREFs of ??0RenderPassInfo@Camera@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x18005962C
 * Callers:
 *     ??$_Emplace_reallocate@AEBURenderPassInfo@Camera@Engine@Spectre@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@QEAAPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180058988 (--$_Emplace_reallocate@AEBURenderPassInfo@Camera@Engine@Spectre@@@-$vector@URenderPassInfo@Camer.c)
 *     ?AddRenderPass@Camera@Engine@Spectre@@QEAAH_K0V?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@0@Z @ 0x180059E28 (-AddRenderPass@Camera@Engine@Spectre@@QEAAH_K0V-$shared_ptr@VISceneNodeTraversal@Engine@Spectre@.c)
 *     ?Clone@RenderPassInfo@Camera@Engine@Spectre@@QEBA?AU1234@XZ @ 0x18005AE58 (-Clone@RenderPassInfo@Camera@Engine@Spectre@@QEBA-AU1234@XZ.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::Camera::RenderPassInfo::RenderPassInfo(
        Spectre::Engine::Camera::RenderPassInfo *this,
        const struct Spectre::Engine::Camera::RenderPassInfo *a2)
{
  __int64 v2; // r8

  *(_BYTE *)this = *(_BYTE *)a2;
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)this + 4,
    (_QWORD *)a2 + 4);
  return v2;
}
