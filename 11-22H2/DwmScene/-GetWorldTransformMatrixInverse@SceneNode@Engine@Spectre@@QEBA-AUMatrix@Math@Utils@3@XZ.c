/*
 * XREFs of ?GetWorldTransformMatrixInverse@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C7D8
 * Callers:
 *     ?OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x18009B340 (-OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z.c)
 * Callees:
 *     ?GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA?AUMatrix@Math@Utils@3@XZ @ 0x18003C6AC (-GetWorldTransformMatrix@SceneNode@Engine@Spectre@@QEBA-AUMatrix@Math@Utils@3@XZ.c)
 *     ?Invert@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z @ 0x18003C8D8 (-Invert@Matrix@Math@Utils@Spectre@@QEBAXAEAU1234@@Z.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

__int64 __fastcall Spectre::Engine::SceneNode::GetWorldTransformMatrixInverse(
        Spectre::Engine::SceneNode *a1,
        __int64 a2)
{
  _OWORD v5[4]; // [rsp+20h] [rbp-48h] BYREF

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  Spectre::Engine::SceneNode::GetWorldTransformMatrix((__int64)a1, v5);
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  Spectre::Utils::Math::Matrix::Invert((Spectre::Utils::Math::Matrix *)v5, (struct Spectre::Utils::Math::Matrix *)a2);
  return a2;
}
