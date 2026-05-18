/*
 * XREFs of ?Compute@Bounds@Engine@Spectre@@QEAAXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@I@Z @ 0x18004A344
 * Callers:
 *     ?LoadMesh@MeshInstance@Engine@Spectre@@AEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@IV?$shared_ptr@VMesh@Engine@Spectre@@@5@IIPEBM22_N@Z @ 0x18004BD40 (-LoadMesh@MeshInstance@Engine@Spectre@@AEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Bounds::Compute(__int64 a1, const struct DirectX::XMFLOAT3 **a2, unsigned int a3)
{
  DirectX::BoundingBox::CreateFromPoints((struct DirectX::BoundingBox *)(a1 + 88), a3, *a2);
}
