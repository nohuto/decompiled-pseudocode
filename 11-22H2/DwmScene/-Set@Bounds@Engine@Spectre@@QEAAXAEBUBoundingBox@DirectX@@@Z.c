/*
 * XREFs of ?Set@Bounds@Engine@Spectre@@QEAAXAEBUBoundingBox@DirectX@@@Z @ 0x18004A584
 * Callers:
 *     ?UpdateBounds@SpectreMeshComponent@@UEAAJXZ @ 0x1800148B0 (-UpdateBounds@SpectreMeshComponent@@UEAAJXZ.c)
 *     ?LoadMesh@MeshInstance@Engine@Spectre@@AEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@IV?$shared_ptr@VMesh@Engine@Spectre@@@5@IIPEBM22_N@Z @ 0x18004BD40 (-LoadMesh@MeshInstance@Engine@Spectre@@AEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Bounds::Set(Spectre::Engine::Bounds *this, const struct DirectX::BoundingBox *a2)
{
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)a2;
  *((_QWORD *)this + 13) = *((_QWORD *)a2 + 2);
}
