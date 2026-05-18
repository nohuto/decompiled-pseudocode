/*
 * XREFs of ?InitVertexLayout@StandardShaderExtension@Engine@Spectre@@MEAAXXZ @ 0x18007DF20
 * Callers:
 *     <none>
 * Callees:
 *     ?ColorLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C0D0 (-ColorLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?JointIndicesLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3A8 (-JointIndicesLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?JointWeightsLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3BC (-JointWeightsLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?NormalLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3D0 (-NormalLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?PositionLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3E0 (-PositionLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?TangentLayout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C3F0 (-TangentLayout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?TextureCoord0Layout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C400 (-TextureCoord0Layout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 *     ?TextureCoord1Layout@VertexLayoutBase@Engine@Spectre@@SA?B_KW4EAttributeFormat@123@H_K@Z @ 0x18008C410 (-TextureCoord1Layout@VertexLayoutBase@Engine@Spectre@@SA-B_KW4EAttributeFormat@123@H_K@Z.c)
 */

void __fastcall Spectre::Engine::StandardShaderExtension::InitVertexLayout(
        Spectre::Engine::StandardShaderExtension *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx

  v1 = Spectre::Engine::VertexLayoutBase::PositionLayout(this);
  v3 = Spectre::Engine::VertexLayoutBase::NormalLayout(v2, v1);
  v6 = Spectre::Engine::VertexLayoutBase::TangentLayout(v5, v3 | v4);
  v9 = Spectre::Engine::VertexLayoutBase::ColorLayout(v8, v6 | v7);
  v12 = Spectre::Engine::VertexLayoutBase::TextureCoord0Layout(v11, v9 | v10);
  v15 = Spectre::Engine::VertexLayoutBase::TextureCoord1Layout(v14, v12 | v13);
  v18 = Spectre::Engine::VertexLayoutBase::JointWeightsLayout(v17, v15 | v16);
  v21 = Spectre::Engine::VertexLayoutBase::JointIndicesLayout(v20, v18 | v19);
  *(_QWORD *)(v23 + 112) = v21 | v22;
}
