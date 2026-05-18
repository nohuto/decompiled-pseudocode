/*
 * XREFs of ?SetLocalToParent@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z @ 0x18003D40C
 * Callers:
 *     ?LoadMesh@MeshInstance@Engine@Spectre@@AEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@IV?$shared_ptr@VMesh@Engine@Spectre@@@5@IIPEBM22_N@Z @ 0x18004BD40 (-LoadMesh@MeshInstance@Engine@Spectre@@AEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 * Callees:
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

bool __fastcall Spectre::Engine::SceneNode::SetLocalToParent(
        Spectre::Engine::SceneNode *this,
        const struct Spectre::Utils::Math::Matrix *a2)
{
  Spectre::Engine::SceneNode::VerifyWriteAccess(this);
  return Spectre::Engine::SceneNode::SetTransformMatrix(this, a2);
}
