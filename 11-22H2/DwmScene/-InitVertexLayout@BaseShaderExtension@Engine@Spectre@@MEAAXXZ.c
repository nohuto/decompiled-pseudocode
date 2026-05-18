/*
 * XREFs of ?InitVertexLayout@BaseShaderExtension@Engine@Spectre@@MEAAXXZ @ 0x18009A930
 * Callers:
 *     <none>
 * Callees:
 *     ?ColorLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C0D0 (-ColorLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?JointIndicesLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3A8 (-JointIndicesLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?JointWeightsLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3BC (-JointWeightsLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?PositionLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3E0 (-PositionLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?TextureCoord0Layout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C400 (-TextureCoord0Layout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?TextureCoord1Layout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C410 (-TextureCoord1Layout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 */

void __fastcall Spectre::Engine::BaseShaderExtension::InitVertexLayout(Spectre::Engine::BaseShaderExtension *this)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  Spectre::Engine::VertexLayoutBase::PositionLayout();
  Spectre::Engine::VertexLayoutBase::ColorLayout();
  Spectre::Engine::VertexLayoutBase::TextureCoord0Layout();
  Spectre::Engine::VertexLayoutBase::TextureCoord1Layout();
  Spectre::Engine::VertexLayoutBase::JointWeightsLayout();
  v1 = Spectre::Engine::VertexLayoutBase::JointIndicesLayout();
  *(_QWORD *)(v3 + 112) = v1 | v2;
}
