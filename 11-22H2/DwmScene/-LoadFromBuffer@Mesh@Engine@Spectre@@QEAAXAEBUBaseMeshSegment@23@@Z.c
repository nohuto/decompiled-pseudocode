/*
 * XREFs of ?LoadFromBuffer@Mesh@Engine@Spectre@@QEAAXAEBUBaseMeshSegment@23@@Z @ 0x180048A80
 * Callers:
 *     ?LoadFromStream@MeshInstance@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@PEBXII@Z @ 0x18004BC20 (-LoadFromStream@MeshInstance@Engine@Spectre@@UEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@S.c)
 * Callees:
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?LoadVertexDataFromStream@Mesh@Engine@Spectre@@IEAAXAEBUBaseMeshSegment@23@@Z @ 0x180048B24 (-LoadVertexDataFromStream@Mesh@Engine@Spectre@@IEAAXAEBUBaseMeshSegment@23@@Z.c)
 *     ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68 (-ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z.c)
 */

void __fastcall Spectre::Engine::Mesh::LoadFromBuffer(
        Spectre::Engine::Mesh *this,
        const struct Spectre::Engine::BaseMeshSegment *a2)
{
  int v2; // r9d
  int v5; // r10d
  int v6; // r8d

  v2 = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 75) = v2;
  v5 = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 30) = v5;
  v6 = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 28) = v6;
  *((_DWORD *)this + 29) = v6;
  *((_DWORD *)this + 31) = v5;
  *((_WORD *)this + 154) = *((_WORD *)a2 + 56);
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsMesh,
    3,
    "Mesh of type %d loaded with %lu vertices and %lu indices",
    v2,
    v5,
    v6);
  if ( (*((_DWORD *)a2 + 7) & 0x800) != 0 )
    Spectre::Engine::Mesh::ReserveDynamic(this, *((unsigned int *)this + 29), *((unsigned int *)this + 31));
  if ( *((_DWORD *)this + 30) )
    Spectre::Engine::Mesh::LoadVertexDataFromStream(this, a2);
}
