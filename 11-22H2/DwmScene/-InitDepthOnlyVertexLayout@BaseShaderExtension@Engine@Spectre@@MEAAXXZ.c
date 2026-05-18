/*
 * XREFs of ?InitDepthOnlyVertexLayout@BaseShaderExtension@Engine@Spectre@@MEAAXXZ @ 0x18009A900
 * Callers:
 *     <none>
 * Callees:
 *     ?JointIndicesLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3A8 (-JointIndicesLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?JointWeightsLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3BC (-JointWeightsLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?PositionLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3E0 (-PositionLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 */

void __fastcall Spectre::Engine::BaseShaderExtension::InitDepthOnlyVertexLayout(
        Spectre::Engine::BaseShaderExtension *this)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  Spectre::Engine::VertexLayoutBase::PositionLayout();
  Spectre::Engine::VertexLayoutBase::JointWeightsLayout();
  v1 = Spectre::Engine::VertexLayoutBase::JointIndicesLayout();
  *(_QWORD *)(v3 + 120) = v1 | v2;
}
